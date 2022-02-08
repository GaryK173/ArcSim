// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcNoteRender.h"
#include "ArcTapRender.generated.h"

/**
 * 
 */
UCLASS()
class ARCSIM_API AArcTapRender : public AArcNoteRender
{
	GENERATED_BODY()


public:

	UPROPERTY()
		int32 TrackID = 0;

	UPROPERTY()
		FVector Size = FVector(0.40, 0.00, 0.10);

public:
	// Constructor of TapRender
	AArcTapRender();
	
	// Initialize mesh component of this note
	virtual void InitMesh() override;

	// Update mesh and material status runtime
	virtual void UpdateMesh(bool isActive) override;

};
