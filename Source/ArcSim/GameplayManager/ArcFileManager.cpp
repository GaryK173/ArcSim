// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcFileManager.h"
#include "ArcConductor.h"


bool ArcFileManager::ImportChartFile(AArcConductor* Conductor, const FString& ChartFilePath) {

	IPlatformFile& Manager = FPlatformFileManager::Get().GetPlatformFile();

	if (Manager.FileExists(*ChartFilePath)) {

		FString FileRaw = "";
		FFileHelper::LoadFileToString(FileRaw, *ChartFilePath);
		TArray<FString> File;
		int32 Lines = FileRaw.ParseIntoArray(File, _T("\n"));
		return ChartingMachine(Conductor, File);

	}

	return false;

}

void ArcFileManager::FindAllSongs(const FString& RootDirectory, TArray<FString>& FoundSongs) {

	IPlatformFile& Manager = FPlatformFileManager::Get().GetPlatformFile();

	if (Manager.DirectoryExists(*RootDirectory)) {

		Manager.FindFiles(FoundSongs, *RootDirectory, TEXT(""));

		for (int i = 0; i < FoundSongs.Num(); ++i) {

			FoundSongs[i] = RootDirectory + FoundSongs[i];
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("114514"));

		}

	}

	return;

}

bool ArcFileManager::ChartingMachine(AArcConductor* Conductor, TArray<FString>& File) {

	UWorld* World = Conductor->GetWorld();

	float& AudioOffset = Conductor->AudioOffset;
	TMap<int32, TArray<FArcTiming>>& TimingGroup = Conductor->TimingGroup;
	TArray<TArray<AArcNoteRender*>>& NoteRenders = Conductor->NoteRenders;
	NoteRenders.SetNum(9);
	
	// Index of line in File
	int32 LineIdx = 0;

	// ID of current timing group
	int32 GroupID = 0;

	// If group is full functional or just (noinput)
	bool GroupInput = true;

	// Count of notes
	int32 NoteCount = 0;

	// Status of auto-machine
	// 1 == before '-'
	// 2 == after '-' (default timing group 0)
	// 3 == inside sub timing groups
	// -1 == illegal, break
	int32 Status = 1;

	while (Status && LineIdx < File.Num()) {

		FString& CurrLine = File[LineIdx];

		CurrLine.RemoveSpacesInline();

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, CurrLine);

		if (Status == 1 && LineIdx == 0) {

			FRegexMatcher Matcher(PatternAudioOffset, CurrLine);
			if (Matcher.FindNext()) {

				int32 Idx = 0;
				if (!CurrLine.FindChar(TCHAR(':'), Idx)) {
					Status = -1;
					break;
				}
				FString Offset = CurrLine.Right(CurrLine.Len() - Idx - 1);
				if (!FDefaultValueHelper::ParseFloat(Offset, AudioOffset)) {
					Status = -1;
					break;
				}
				LineIdx += 1;
				continue;
			}
			else {
				Status = -1;
				break;
			}

		}
		else if (Status == 1) {

			FRegexMatcher MatcherDensity(PatternTimingDensity, CurrLine);
			FRegexMatcher MatcherStartMachine(PatternStartMachine, CurrLine);

			if (MatcherDensity.FindNext()) {

				LineIdx += 1;
				continue;

			}
			else if (MatcherStartMachine.FindNext()) {

				Status = 2;
				LineIdx += 1;
				continue;

			}
			else {

				Status = -1;
				break;

			}
		}
		else if (Status == 2) {

			FRegexMatcher MatcherTimingGroup(PatternTimingGroup, CurrLine);
			FRegexMatcher MatcherTimingGroupNoInput(PatternTimingGroupNoInput, CurrLine);
			FRegexMatcher MatcherTiming(PatternTiming, CurrLine);

			FRegexMatcher MatcherTap(PatternTap, CurrLine);
			FRegexMatcher MatcherHold(PatternHold, CurrLine);

			FRegexMatcher MatcherArcVoid(PatternArcVoid, CurrLine);
			FRegexMatcher MatcherArcVoidWithSkyTap(PatternArcVoidWithSkyTap, CurrLine);

			FRegexMatcher MatcherArcBlue(PatternArcBlue, CurrLine);
			FRegexMatcher MatcherArcRed(PatternArcRed, CurrLine);
			FRegexMatcher MatcherArcGreen(PatternArcGreen, CurrLine);

			if (MatcherTimingGroup.FindNext()) {

				GroupInput = true;
				GroupID += 1;
				Status = 3;
				LineIdx += 1;
				continue;

			}
			else if (MatcherTimingGroupNoInput.FindNext()) {

				GroupInput = false;
				GroupID += 1;
				Status = 3;
				LineIdx += 1;
				continue;

			}
			else if (MatcherTiming.FindNext()) {

				FArcTiming NewTiming;

				InitTimingByLine(NewTiming, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				TimingGroup.FindOrAdd(0);
				TimingGroup[0].Add(NewTiming);
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcVoid.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Void;
				NewArc->GroupID = 0;
				//NewArc->noteID = NoteCount;

				NoteRenders[0].Add(NewArc);

				//NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcVoidWithSkyTap.FindNext()) {
			
				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Void;
				NewArc->GroupID = 0;
				//NewArc->noteID = NoteCount;

				NoteRenders[0].Add(NewArc);


				while (!CurrLine.StartsWith(TEXT("arctap("))) {
					CurrLine.RemoveAt(0);
				}

				while (!CurrLine.IsEmpty() && CurrLine.StartsWith(TEXT("arctap("))) {
					
					AArcSkyTapRender* NewSkyTap = World->SpawnActor<AArcSkyTapRender>();
					
					InitSkyTapByLine(NewSkyTap, CurrLine, Status);

					if (Status == -1) {
						break;
					}

					if (!NewSkyTap->IsLegal()) {
						Status = -1;
						break;
					}

					float Ratio = (float)(NewSkyTap->TimeStart - NewArc->TimeStart) / (NewArc->TimeEnd - NewArc->TimeStart);
					ArcAlgoLib::CalculatePositionByArcType(NewArc->Type, NewArc->PosStart, NewArc->PosEnd, Ratio, NewSkyTap->PosStart);

					NewSkyTap->Conductor = Conductor;
					NewSkyTap->GroupID = 0;
					NewSkyTap->noteID = NoteCount;

					NoteRenders[5].Add(NewSkyTap);

					NoteCount += 1;
				}


				//NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcBlue.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Blue;
				NewArc->GroupID = 0;
				NewArc->noteID = NoteCount;

				NoteRenders[6].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcRed.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Red;
				NewArc->GroupID = 0;
				NewArc->noteID = NoteCount;

				NoteRenders[7].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcGreen.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Green;
				NewArc->GroupID = 0;
				NewArc->noteID = NoteCount;

				NoteRenders[8].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherTap.FindNext()) {

				AArcTapRender* NewTap = World->SpawnActor<AArcTapRender>();

				InitTapByLine(NewTap, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewTap->IsLegal()) {
					Status = -1;
					break;
				}

				ArcAlgoLib::CalculatePositionByTrack(NewTap->TrackID, NewTap->PosStart);
				NewTap->Conductor = Conductor;
				NewTap->GroupID = 0;
				NewTap->noteID = NoteCount;

				NoteRenders[NewTap->TrackID].Add(NewTap);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherHold.FindNext()) {

				AArcHoldRender* NewHold = World->SpawnActor<AArcHoldRender>();

				InitHoldByLine(NewHold, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewHold->IsLegal()) {
					Status = -1;
					break;
				}

				ArcAlgoLib::CalculatePositionByTrack(NewHold->TrackID, NewHold->PosStart);
				NewHold->Conductor = Conductor;
				NewHold->GroupID = 0;
				NewHold->noteID = NoteCount;

				NoteRenders[NewHold->TrackID].Add(NewHold);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else {
				LineIdx += 1;
				continue;
			}
		}
		else if (Status == 3) {

			FRegexMatcher MatcherTimingGroupOut(PatternTimingGroupOut, CurrLine);
			FRegexMatcher MatcherTiming(PatternTiming, CurrLine);

			FRegexMatcher MatcherTap(PatternTap, CurrLine);
			FRegexMatcher MatcherHold(PatternHold, CurrLine);

			FRegexMatcher MatcherArcVoid(PatternArcVoid, CurrLine);
			FRegexMatcher MatcherArcVoidWithSkyTap(PatternArcVoidWithSkyTap, CurrLine);

			FRegexMatcher MatcherArcBlue(PatternArcBlue, CurrLine);
			FRegexMatcher MatcherArcRed(PatternArcRed, CurrLine);
			FRegexMatcher MatcherArcGreen(PatternArcGreen, CurrLine);

			if (MatcherTimingGroupOut.FindNext()) {

				GroupInput = true;
				Status = 2;
				LineIdx += 1;
				continue;

			}
			else if (MatcherTiming.FindNext()) {

				FArcTiming NewTiming;

				InitTimingByLine(NewTiming, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				TimingGroup.FindOrAdd(GroupID);
				TimingGroup[GroupID].Add(NewTiming);
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcVoid.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Void;
				NewArc->GroupID = GroupID;
				//NewArc->noteID = NoteCount;

				NoteRenders[0].Add(NewArc);

				//NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcVoidWithSkyTap.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Void;
				NewArc->GroupID = 0;
				//NewArc->noteID = NoteCount;

				NoteRenders[0].Add(NewArc);


				while (!CurrLine.StartsWith(TEXT("arctap("))) {
					CurrLine.RemoveAt(0);
				}

				while (!CurrLine.IsEmpty() && CurrLine.StartsWith(TEXT("arctap("))) {

					AArcSkyTapRender* NewSkyTap = World->SpawnActor<AArcSkyTapRender>();

					InitSkyTapByLine(NewSkyTap, CurrLine, Status);

					if (Status == -1) {
						break;
					}

					if (!NewSkyTap->IsLegal()) {
						Status = -1;
						break;
					}

					float Ratio = (float)(NewSkyTap->TimeStart - NewArc->TimeStart) / (NewArc->TimeEnd - NewArc->TimeStart);
					ArcAlgoLib::CalculatePositionByArcType(NewArc->Type, NewArc->PosStart, NewArc->PosEnd, Ratio, NewSkyTap->PosStart);

					NewSkyTap->Conductor = Conductor;
					NewSkyTap->GroupID = GroupID;
					NewSkyTap->noteID = NoteCount;
					NewSkyTap->GroupInput = GroupInput;

					NoteRenders[5].Add(NewSkyTap);

					NoteCount += 1;
				}


				//NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcBlue.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Blue;
				NewArc->GroupID = GroupID;
				NewArc->noteID = NoteCount;
				NewArc->GroupInput = GroupInput;

				NoteRenders[6].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcRed.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Red;
				NewArc->GroupID = GroupID;
				NewArc->noteID = NoteCount;
				NewArc->GroupInput = GroupInput;

				NoteRenders[7].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherArcGreen.FindNext()) {

				AArcSkyArcRender* NewArc = World->SpawnActor<AArcSkyArcRender>();

				FRegexMatcher MatcherArcB(PatternArcB, CurrLine);
				FRegexMatcher MatcherArcS(PatternArcS, CurrLine);
				FRegexMatcher MatcherArcSi(PatternArcSi, CurrLine);
				FRegexMatcher MatcherArcSo(PatternArcSo, CurrLine);
				FRegexMatcher MatcherArcSiSi(PatternArcSiSi, CurrLine);
				FRegexMatcher MatcherArcSiSo(PatternArcSiSo, CurrLine);
				FRegexMatcher MatcherArcSoSi(PatternArcSoSi, CurrLine);
				FRegexMatcher MatcherArcSoSo(PatternArcSoSo, CurrLine);

				if (MatcherArcB.FindNext()) {
					NewArc->Type = EArcLineType::B;
				}
				else if (MatcherArcS.FindNext()) {
					NewArc->Type = EArcLineType::S;
				}
				else if (MatcherArcSi.FindNext()) {
					NewArc->Type = EArcLineType::Si;
				}
				else if (MatcherArcSo.FindNext()) {
					NewArc->Type = EArcLineType::So;
				}
				else if (MatcherArcSiSi.FindNext()) {
					NewArc->Type = EArcLineType::SiSi;
				}
				else if (MatcherArcSiSo.FindNext()) {
					NewArc->Type = EArcLineType::SiSo;
				}
				else if (MatcherArcSoSi.FindNext()) {
					NewArc->Type = EArcLineType::SoSi;
				}
				else if (MatcherArcSoSo.FindNext()) {
					NewArc->Type = EArcLineType::SoSo;
				}
				else {
					Status = -1;
					break;
				}

				InitSkyArcByLine(NewArc, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewArc->IsLegal()) {
					Status = -1;
					break;
				}

				NewArc->Conductor = Conductor;
				NewArc->Color = EArcColor::Green;
				NewArc->GroupID = GroupID;
				NewArc->noteID = NoteCount;
				NewArc->GroupInput = GroupInput;

				NoteRenders[8].Add(NewArc);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherTap.FindNext()) {

				AArcTapRender* NewTap = World->SpawnActor<AArcTapRender>();

				InitTapByLine(NewTap, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewTap->IsLegal()) {
					Status = -1;
					break;
				}

				ArcAlgoLib::CalculatePositionByTrack(NewTap->TrackID, NewTap->PosStart);
				NewTap->Conductor = Conductor;
				NewTap->GroupID = GroupID;
				NewTap->noteID = NoteCount;
				NewTap->GroupInput = GroupInput;

				NoteRenders[NewTap->TrackID].Add(NewTap);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else if (MatcherHold.FindNext()) {

				AArcHoldRender* NewHold = World->SpawnActor<AArcHoldRender>();

				InitHoldByLine(NewHold, CurrLine, Status);

				if (Status == -1) {
					break;
				}

				if (!NewHold->IsLegal()) {
					Status = -1;
					break;
				}

				ArcAlgoLib::CalculatePositionByTrack(NewHold->TrackID, NewHold->PosStart);
				NewHold->Conductor = Conductor;
				NewHold->GroupID = GroupID;
				NewHold->noteID = NoteCount;
				NewHold->GroupInput = GroupInput;

				NoteRenders[NewHold->TrackID].Add(NewHold);

				NoteCount += 1;
				LineIdx += 1;
				continue;

			}
			else {
				LineIdx += 1;
				continue;
			}
		}
		else {
			Status = -1;
			break;
		}
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::FromInt(Status));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::FromInt(LineIdx));
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::FromInt(NoteCount));

	return (Status > 0);

}

void ArcFileManager::InitTimingByLine(FArcTiming& Timing, FString& CurrLine, int32& Status) {

	CurrLine.RemoveFromStart(TEXT("timing("));

	FString Time = "";
	while (CurrLine[0] != TCHAR(',')) {
		Time += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(Time, Timing.Time)) {
		Status = -1;
		return;
	}

	FString BPM = "";
	while (CurrLine[0] != TCHAR(',')) {
		BPM += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(BPM, Timing.BPM)) {
		Status = -1;
		return;
	}

	FString Beats = "";
	while (CurrLine[0] != TCHAR(')')) {
		Beats += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(Beats, Timing.Beats)) {
		Status = -1;
		return;
	}

}

void ArcFileManager::InitTapByLine(AArcTapRender* Note, FString& CurrLine, int32& Status) {

	CurrLine.RemoveFromStart(TEXT("("));

	FString TimeStart = "";
	while (CurrLine[0] != TCHAR(',')) {
		TimeStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(TimeStart, Note->TimeStart)) {
		Status = -1;
		return;
	}

	Note->TimeEnd = Note->TimeStart;

	FString TrackID = "";
	while (CurrLine[0] != TCHAR(')')) {
		TrackID += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseInt(TrackID, Note->TrackID)) {
		Status = -1;
		return;
	}

}

void ArcFileManager::InitHoldByLine(AArcHoldRender* Note, FString& CurrLine, int32& Status) {

	CurrLine.RemoveFromStart(TEXT("hold("));

	FString TimeStart = "";
	while (CurrLine[0] != TCHAR(',')) {
		TimeStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(TimeStart, Note->TimeStart)) {
		Status = -1;
		return;
	}

	FString TimeEnd = "";
	while (CurrLine[0] != TCHAR(',')) {
		TimeEnd += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(TimeEnd, Note->TimeEnd)) {
		Status = -1;
		return;
	}

	FString TrackID = "";
	while (CurrLine[0] != TCHAR(')')) {
		TrackID += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseInt(TrackID, Note->TrackID)) {
		Status = -1;
		return;
	}

}

void ArcFileManager::InitSkyTapByLine(AArcSkyTapRender* Note, FString& CurrLine, int32& Status) {
	
	CurrLine.RemoveFromStart(TEXT("arctap("));

	FString TimeStart = "";
	while (CurrLine[0] != TCHAR(')')) {
		TimeStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0, 2);
	if (!FDefaultValueHelper::ParseFloat(TimeStart, Note->TimeStart)) {
		Status = -1;
		return;
	}

	Note->TimeEnd = Note->TimeStart;

}

void ArcFileManager::InitSkyArcByLine(AArcSkyArcRender* Note, FString& CurrLine, int32& Status) {

	CurrLine.RemoveFromStart(TEXT("arc("));

	FString TimeStart = "";
	while (CurrLine[0] != TCHAR(',')) {
		TimeStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(TimeStart, Note->TimeStart)) {
		Status = -1;
		return;
	}

	FString TimeEnd = "";
	while (CurrLine[0] != TCHAR(',')) {
		TimeEnd += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(TimeEnd, Note->TimeEnd)) {
		Status = -1;
		return;
	}

	FString XStart = "";
	while (CurrLine[0] != TCHAR(',')) {
		XStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(XStart, Note->PosStart.X)) {
		Status = -1;
		return;
	}

	FString XEnd = "";
	while (CurrLine[0] != TCHAR(',')) {
		XEnd += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(XEnd, Note->PosEnd.X)) {
		Status = -1;
		return;
	}

	while (CurrLine[0] != TCHAR(',')) {
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);

	FString YStart = "";
	while (CurrLine[0] != TCHAR(',')) {
		YStart += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(YStart, Note->PosStart.Y)) {
		Status = -1;
		return;
	}

	FString YEnd = "";
	while (CurrLine[0] != TCHAR(',')) {
		YEnd += CurrLine[0];
		CurrLine.RemoveAt(0);
	}
	CurrLine.RemoveAt(0);
	if (!FDefaultValueHelper::ParseFloat(YEnd, Note->PosEnd.Y)) {
		Status = -1;
		return;
	}

}