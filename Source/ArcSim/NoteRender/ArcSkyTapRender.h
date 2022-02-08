// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArcNoteRender.h"
#include "ArcSkyTapRender.generated.h"

/**
 * 
 */
UCLASS()
class ARCSIM_API AArcSkyTapRender : public AArcNoteRender
{
	GENERATED_BODY()
	
public:

	UPROPERTY()
		FVector Size = FVector(0.50, 0.08, 0.08);

public:
	// Constructor of SkyTapRender
	AArcSkyTapRender();

	// Initialize mesh component of this note
	virtual void InitMesh() override;

	// Update mesh and material status runtime
	virtual void UpdateMesh(bool isActive) override;
};
