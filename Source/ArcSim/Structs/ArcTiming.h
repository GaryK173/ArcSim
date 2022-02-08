// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcTiming.generated.h"

USTRUCT()
struct FArcTiming {

	GENERATED_BODY();

	UPROPERTY()
		float Time = 0.0f;

	UPROPERTY()
		float BPM = 0.0f;

	UPROPERTY()
		float Beats = 0.0f;

	UPROPERTY()
		float TillNowPos = 0.0f;

	FArcTiming() {

	}

	FArcTiming(float time, float bpm, float beats) {
		Time = time;
		BPM = bpm;
		Beats = beats;
	}

	static float ForComp(const FArcTiming& curr) {
		return curr.Time;
	}

};