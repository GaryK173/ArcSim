// Fill out your copyright notice in the Description page of Project Settings.

#include "ArcConductor.h"
#include "ArcSim/NoteRender/ArcTapRender.h"
#include "ArcSim/NoteRender/ArcHoldRender.h"
#include "ArcAlgoLib.h"

// Sets default values
AArcConductor::AArcConductor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArcConductor::BeginPlay()
{
	Super::BeginPlay();

	this->SetActorTickEnabled(false);

	ClearState();
	InitNote();
	InitConductor();
	InitSound();

	//int32 NoteCount = 0;
	//for (auto& track : NoteRenders) {
	//	NoteCount += track.Num();
	//}

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("NoteCount: %d"), NoteCount));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, FString::Printf(TEXT("GroupCount: %d"), GroupCount));
	
}

// Called every frame
void AArcConductor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Update(DeltaTime);

}

// Update function for note and Time
void AArcConductor::Update(float DeltaTime) {

	if (!UpdateFlag) {

		// if paused, save playsound time for rewind after resume
		// (or hope the engine will pause game for us as we wish, unlikely though)

		return;
	}

	if (PrePlayingCountdown > 0) {
		PrePlayingCountdown -= DeltaTime;
		TimeDspCurr = (0 - PrePlayingCountdown) * 1000.00f - TotalOffset;
	}
	else if (!PlayingFlag) {
		PrePlayingCountdown = 0;
		UGameplayStatics::PlaySound2D(GetWorld(), SoundWave, 1.0f, 1.0f, 0.0f, nullptr, this, false);
		TimeDspCurr = 0 - TotalOffset;
		PlayingFlag = true;
	}
	else {
		AudioDspCurr = SoundWave->GetPlaybackTime() * 1000.00f;
		TimeDspCurr = AudioDspCurr - TotalOffset;
	}

	//GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Cyan, FString::Printf(TEXT("CurrTime: %d"), (int32)TimeDspCurr));

}



void AArcConductor::InitNote() {
	// Initialize notes (sort, calculate TillNowPos for Timing. etc)
	// Could need some multi-threads modifications

	// Import chart file
	ArcFileManager::ImportChartFile(this, ChartPath);

	// Sort timing groups by timing & calculate TillNowPose for each Timing
	for (auto& group : TimingGroup) {

		group.Value.Sort([](const FArcTiming& a, const FArcTiming& b) { return a.Time < b.Time; });

		group.Value[0].TillNowPos = 0;

		for (int i = 1; i < group.Value.Num(); ++i) {

			group.Value[i].TillNowPos = group.Value[i - 1].TillNowPos + (group.Value[i].Time - group.Value[i - 1].Time) * Speed * Velocity * group.Value[i - 1].BPM / RefBPM;

		}

	}

	// Sort notes by TimeStart
	for (auto& NoteSet : NoteRenders) {

		NoteSet.Sort([](const auto& a, const auto& b) -> bool { return a.TimeStart < b.TimeStart; });

	}

	// Calculate Arc-Grouping
	for (int32 ArcSetIdx = 6; ArcSetIdx <= 8; ++ArcSetIdx) {

		TArray<AArcNoteRender*>& ArcSet = NoteRenders[ArcSetIdx];

		for (auto& Arc : ArcSet) {

			for (int32 CompSetIdx = 6; CompSetIdx <= 8; ++CompSetIdx) {

				TArray<AArcNoteRender*>& CompSet = NoteRenders[CompSetIdx];

				int32 ConnectIdx = Algo::UpperBoundBy(CompSet, Arc->TimeStart, UE_PROJECTION(AArcNoteRender::ForCompEnd)) - 1;
				if (!CompSet.IsValidIndex(ConnectIdx)) {
					continue;
				}
				AArcNoteRender* ConnectArc = CompSet[ConnectIdx];
				if (ConnectArc->TimeEnd + 10 <= Arc->TimeStart || ConnectArc->PosEnd.Y != Arc->PosStart.Y || FGenericPlatformMath::Abs(ConnectArc->PosEnd.X - Arc->PosStart.X) >= 0.10f) {
					continue;
				}
				else {

					((AArcSkyArcRender*)Arc)->IsHead = false;
					break;

				}

			}

		}

	}

	// Initialize Note Renders
	for (int32 NoteSetIdx = 0; NoteSetIdx <= 8; ++NoteSetIdx) {

		TArray<AArcNoteRender*> NoteSet = NoteRenders[NoteSetIdx];

		for (auto& Note : NoteSet) {

			Note->InitMesh();
			Note->SetActive(true);

		}

	}

}

void AArcConductor::InitSound() {

	URuntimeAudioImporterLibrary* Importer = URuntimeAudioImporterLibrary::CreateRuntimeAudioImporter();

	OnSubscribeSoundWave.BindUFunction(this, FName("SubscribeSoundWave"));
	Importer->OnResult.Add(OnSubscribeSoundWave);

	Importer->ImportAudioFromFile(SoundPath, EAudioFormat::Auto);

}

void AArcConductor::SubscribeSoundWave(URuntimeAudioImporterLibrary* ImporterRef, UImportedSoundWave* SoundWaveRef, const ETranscodingStatus& Status) {
	
	if (Status == ETranscodingStatus::SuccessfulImport) {

		SoundWave = SoundWaveRef;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Succeed"));
		if (SoundWave->IsPlayable()) {
			InitScene();
			SoundWave->bLooping = false;
			SoundWave->RewindPlaybackTime(0.0f);
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, TEXT("Playable"));
		}
		return;
	}
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Failed"));

}


