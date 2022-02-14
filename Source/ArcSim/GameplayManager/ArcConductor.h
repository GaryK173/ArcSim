// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RuntimeAudioImporterLibrary.h"
#include "ArcSim/NoteRender/ArcNoteRender.h"
#include "ArcSim/NoteRender/ArcTapRender.h"
#include "ArcSim/NoteRender/ArcHoldRender.h"
#include "ArcSim/NoteRender/ArcSkyTapRender.h"
#include "ArcSim/NoteRender/ArcSkyArcRender.h"
#include "ArcSim/Structs/ArcTiming.h"
#include "ArcFileManager.h"
#include "ArcAlgoLib.h"
#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h"
#include "ArcConductor.generated.h"

//// Delegate for parse SoundWave
//DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSubscribePercentage, const int32&, percentage);

// Delegate for parse SoundWave
DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnSubscribeSoundWave, URuntimeAudioImporterLibrary*, ImporterRef, UImportedSoundWave*, SoundWaveRef, const ETranscodingStatus&, Status);


UCLASS()
class ARCSIM_API AArcConductor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArcConductor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:
	
	UPROPERTY()
	float PrePlayingCountdown = -1.00f;

	UPROPERTY()
	FOnSubscribeSoundWave OnSubscribeSoundWave;

	UPROPERTY()
	float Scale = 100.00f;

	UPROPERTY()
	float RefBPM = 100.00f;

	UPROPERTY()
	float Speed = 4.00f;

	UPROPERTY()
	float Velocity = 0.10f;

	UPROPERTY()
	float AudioOffset = 0.00f;

	UPROPERTY()
	float AudioDspStart = -1.00f;

	UPROPERTY()
	float AudioDspCurr = -1.00f;

	UPROPERTY()
	float TimeDspCurr = -1.00f;

	UPROPERTY()
	float UserOffset = 0.00f;

	UPROPERTY()
	float TotalOffset = 0.00f;

	UPROPERTY()
	float NearDistStatic = 2.0 * -10.00f * ArcAlgoLib::Scale;

	UPROPERTY()
	float FarDistStatic = 2.0 * 10.00f * ArcAlgoLib::Scale;

	UPROPERTY()
	float JudgeDistStatic = 0.50f * ArcAlgoLib::Scale;

	UPROPERTY()
	//USoundWave* SoundWave = nullptr;
	UImportedSoundWave* SoundWave = nullptr;

	// Array of timing groups
	TMap<int32, TArray<FArcTiming>> TimingGroup;

	// Matrix holds all note renders

	// 0 - void
	// 1 - 1
	// 2 - 2
	// 3 - 3
	// 4 - 4
	// 5 - SkyTap
	// 6 - Blue
	// 7 - Red
	// 8 - Green

	TArray<TArray<AArcNoteRender*>> NoteRenders;

	// Folder path
	FString FolderPath = TEXT("C:/arcaea_3.8.6c/assets/songs/arcahv");

	// Sound path
	FString SoundPath = FolderPath + TEXT("/base.ogg");
	//FString SoundPath = TEXT("C:/RythmeGames/osu!/Songs/347779 sakuzyo - Altale/Altale.mp3");

	// Chart file path
	FString ChartPath = FolderPath + TEXT("/2.aff");

	bool UpdateFlag = false;

	bool PlayingFlag = false;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Update(float DeltaTime);

	void ClearState() {
		// delete every track / judgement plain. etc in the world
		// clear NoteRenders array
	};

	void InitNote();

	void InitConductor() {

		PrePlayingCountdown = 4.00f;

		AudioDspStart = 0.00f;
		AudioDspCurr = 0.00f;
		TimeDspCurr = 0.00f;
		TotalOffset = AudioOffset + UserOffset;

	}

	void InitScene() {

		// Import track / judgement plain. etc to world;

		UpdateFlag = true;
		SetActorTickEnabled(UpdateFlag);

	};

	void InitSound();

	UFUNCTION()
	void UpdateCountdown() {};

	UFUNCTION()
	void SubscribeSoundWave(URuntimeAudioImporterLibrary* ImporterRef, UImportedSoundWave* SoundWaveRef, const ETranscodingStatus& Status);

	//UFUNCTION()
	//	void SubscribePercentage(const int32& percentage) { Percentage = percentage; };

	//static int32 ForComp(const FTiming& curr) {
	//	return curr.Time;
	//}

};
