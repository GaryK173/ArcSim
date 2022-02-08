// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcNoteRender.h"
#include "ArcHoldRender.generated.h"

/**
 * 
 */
UCLASS()
class ARCSIM_API AArcHoldRender : public AArcNoteRender
{
	GENERATED_BODY()

public:

	UPROPERTY()
		int32 TrackID = 0;

	UPROPERTY()
		FVector Size = FVector(0.40, 0.00, -1.00);

public:
	// Constructor of TapRender
	AArcHoldRender();

	// Initialize mesh component of this note
	virtual void InitMesh() override;

	// Update mesh and material status runtime
	virtual void UpdateMesh(bool isActive) override;

	float CalculateLength();

};
