// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/DefaultValueHelper.h"
#include "Internationalization/Regex.h"

class ARCSIM_API AArcConductor;

class ARCSIM_API AArcTapRender;

class ARCSIM_API AArcHoldRender;

class ARCSIM_API AArcSkyTapRender;

class ARCSIM_API AArcSkyArcRender;

struct FArcTiming;


namespace ArcFileManager {

	// Patterns for Chart Initialize Parameters
	const FRegexPattern PatternAudioOffset(TEXT("^(AudioOffset:)[0-9,\\-]*$"));
	const FRegexPattern PatternTimingDensity(TEXT("^(TimingPointDensityFactor:)[0-9]*$"));
	const FRegexPattern PatternStartMachine(TEXT("^(-)"));

	// Patterns for Timing & TimingGroup
	const FRegexPattern PatternTimingGroup(TEXT("^(timinggroup(){)$"));
	const FRegexPattern PatternTimingGroupNoInput(TEXT("^(timinggroup(noinput){)$"));
	const FRegexPattern PatternTimingGroupOut(TEXT("^(};)$"));
	const FRegexPattern PatternTiming(TEXT("^(timing)\\([0-9,\\.]*,[0-9,\\.,\\-]*,[0-9,\\.]*\\)\\;$"));

	// Patterns for Arc
	const FRegexPattern PatternArcVoid(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[a-z]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,(true)\\)\\;$"));
	const FRegexPattern PatternArcVoidWithSkyTap(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[a-z]*\\,[0-9\\.]*\\,[0-9\\.]*\\,[0-9]*\\,[a-z]*\\,(true)\\)\\[[a-z,A-Z,0-9,\\(,\\), ]*\\]\\;$"));
	const FRegexPattern PatternSkyTap(TEXT("^(arctap)\\([0-9]*\\)"));

	const FRegexPattern PatternArcBlue(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[a-z]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(0)\\,[a-z]*\\,(false)\\)\\;$"));
	const FRegexPattern PatternArcRed(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[a-z]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(1)\\,[a-z]*\\,(false)\\)\\;$"));
	const FRegexPattern PatternArcGreen(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[a-z]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(2)\\,[a-z]*\\,(false)\\)\\;$"));

	const FRegexPattern PatternArcB(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(b)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcS(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(s)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSi(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(si)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSo(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(so)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSiSi(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(sisi)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSiSo(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(siso)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSoSi(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(sosi)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));
	const FRegexPattern PatternArcSoSo(TEXT("^(arc)\\([0-9]*\\,[0-9]*\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,(soso)\\,[0-9\\.\\-]*\\,[0-9\\.\\-]*\\,[0-9]*\\,[a-z]*\\,[a-z]*\\)"));

	// Patterns for Tap & Hold
	const FRegexPattern PatternTap(TEXT("^\\([0-9]*,[1-4]\\);$"));
	const FRegexPattern PatternHold(TEXT("^(hold)\\([0-9]*,[0-9]*,[1-4]\\);$"));

    bool ImportChartFile(AArcConductor* Conductor, const FString& ChartFilePath);

    void FindAllSongs(const FString& RootDirectory, TArray<FString>& FoundSongs);

    bool ChartingMachine(AArcConductor* Conductor, TArray<FString>& File);

	void InitTimingByLine(FArcTiming& Timing, FString& CurrLine, int32& Status);

	void InitTapByLine(AArcTapRender* Note, FString& CurrLine, int32& Status);

	void InitHoldByLine(AArcHoldRender* Note, FString& CurrLine, int32& Status);

	void InitSkyTapByLine(AArcSkyTapRender* Note, FString& CurrLine, int32& Status);

	void InitSkyArcByLine(AArcSkyArcRender* Note, FString& CurrLine, int32& Status);

};