// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArcSim/Structs/ArcLineType.h"
#include "ArcSim/Structs/ArcColor.h"
#include "CoreMinimal.h"
#include "ImageUtils.h"
#include "ArcNoteRender.h"
#include "ArcSkyArcRender.generated.h"

/**
 * 
 */

struct FArcSegment {

	FVector RelativePosStart;
	FVector RelativePosEnd;
	float TimeEnd;

	FArcSegment(FVector PosStart, FVector PosEnd, float TimePrefix) {
		RelativePosStart = PosStart;
		RelativePosEnd = PosEnd;
		TimeEnd = TimePrefix;
	}

	static float ForComp(const FArcSegment& curr) {
		return curr.TimeEnd;
	}

};


UCLASS()
class ARCSIM_API AArcSkyArcRender : public AArcNoteRender
{
	GENERATED_BODY()

public:

	UPROPERTY()
		FVector Size;

	UPROPERTY()
		FVector CapSize;

	UPROPERTY()
		FVector SizeColor = FVector(0.25, 0.125, -1.00);

	UPROPERTY()
		FVector SizeVoid = FVector(0.05, 0.025, -1.00);

	UPROPERTY(BlueprintReadWrite)
		EArcLineType Type;

	UPROPERTY(BlueprintReadWrite)
		EArcColor Color;

	UPROPERTY()
		bool IsHead = true;

	UPROPERTY()
		UMaterialInterface* MaterialBaseBlue = nullptr;

	UPROPERTY()
		UMaterialInterface* MaterialBaseRed = nullptr;

	UPROPERTY()
		UMaterialInterface* MaterialBaseGreen = nullptr;

	UPROPERTY()
		UMaterialInterface* MaterialBaseVoid = nullptr;

	UPROPERTY()
		FVector CapRelativePos = FVector(0, 0, 0);

	UPROPERTY()
		FVector CapPos = FVector(0, 0, 0);

	UPROPERTY()
		int32 CurrOverlapSeg = -1;

	UPROPERTY()
		UProceduralMeshComponent* CapMesh = nullptr;

	UPROPERTY()
		UMaterialInterface* CapMaterialBase = nullptr;

	UPROPERTY()
		UMaterialInstanceDynamic* CapMaterial = nullptr;

	UPROPERTY()
		UProceduralMeshComponent* ShadowMesh = nullptr;

	UPROPERTY()
		UMaterialInterface* ShadowMaterialBase = nullptr;

	UPROPERTY()
		UMaterialInstanceDynamic* ShadowMaterial = nullptr;

		TArray<FArcSegment> BodySegments;

public:
	// Constructor of ArcRender
	AArcSkyArcRender();

	// Initialize mesh component of this note
	virtual void InitMesh() override;

	// Update mesh and material status runtime
	virtual void UpdateMesh(bool isActive) override;
	
	void InitSegment();

	void InitShadow();

	void InitHeightLine();

	void InitCap();

	void UpdateSegment(bool isActive);

	void UpdateShadow(bool isActive);

	void UpdateHeightLine(bool isActive);

	void UpdateCap();

	bool LocateCap();

	// Calculate Z by timeprefix
	void CalculateZByTime(float& currZ, float TimePrefix);

};
