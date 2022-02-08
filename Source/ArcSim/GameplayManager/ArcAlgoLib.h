// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcSim/Structs/ArcLineType.h"

/**
 * 
 */


namespace ArcAlgoLib {

	const float Scale = 100.00f;

	const float OneMinute = 60000.00f;

	const float TrackOffset = 0.50f;

	// Calculate note position by track info
	void CalculatePositionByTrack(int32 TrackID, FVector& Position);

	// Calculate Arc Segment position by type and timing
	void CalculatePositionByArcType(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio, FVector& Position);

	// Calculate Arc Segment relative position to startPos by type and timing
	void CalculateRelativePositionByArcType(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio, FVector& Position);

	// Calculate X
	float CalculateX(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio);

	// Calculate Y
	float CalculateY(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio);

	// Straight
	float S(float start, float end, float TimeRatio);

	// Both
	float B(float start, float end, float TimeRatio);

	// Sine In
	float I(float start, float end, float TimeRatio);

	// Sine Out
	float O(float start, float end, float TimeRatio);

}

