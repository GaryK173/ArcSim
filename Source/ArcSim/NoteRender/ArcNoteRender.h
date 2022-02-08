// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProceduralMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArcNoteRender.generated.h"

class ARCSIM_API AArcConductor;

UCLASS()
class ARCSIM_API AArcNoteRender : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArcNoteRender();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
		bool GroupInput = true;

	UPROPERTY()
		int32 noteID = -1;

	UPROPERTY()
		int32 GroupID = -1;

	UPROPERTY()
		FVector PosStart = FVector(0.0, 0.0, 0.0);

	UPROPERTY()
		FVector PosEnd = FVector(0.0, 0.0, 0.0);

	UPROPERTY()
		float TimeStart = -1;

	UPROPERTY()
		float TimeEnd = -1;

	UPROPERTY()
		bool Triggered = false;

	UPROPERTY()
		AArcConductor* Conductor;

	UPROPERTY()
		UProceduralMeshComponent* Mesh = nullptr;

	UPROPERTY()
		UMaterialInterface* MaterialBase = nullptr;

	UPROPERTY()
		UMaterialInstanceDynamic* Material = nullptr;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Register paremeters (BPM, currTime, TimingGroup. etc)
	virtual void RegisterParams(FVector startPos, FVector endPos, float startTime, float endTime, AArcConductor* ConductorPtr) {

		PosStart = startPos;
		TimeStart = startTime;
		TimeEnd = endTime;
		Conductor = ConductorPtr;

	};

	// Activate/Deactivate render of this note
	virtual void SetActive(bool isActive);

	// Interpolate note position based on current info (BPM, currTime, TimingGroup. etc)
	virtual bool Interpolate();

	// Calculate location of this note at specific time
	virtual void CalculateLocation(FVector& Location);

	// Initialize mesh component of this note
	virtual void InitMesh() {};

	// Update mesh and material status runtime
	virtual void UpdateMesh(bool isActive) {};

	// Judgement of current Note
	virtual void Judgement() {};
	
	// Determine the note if its legal
	bool IsLegal() {
		return TimeStart <= TimeEnd;
	};

	static float ForCompStart(const AArcNoteRender* curr) {
		return curr->TimeStart;
	}

	static float ForCompEnd(const AArcNoteRender* curr) {
		return curr->TimeEnd;
	}

};
