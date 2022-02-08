// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcNoteRender.h"
#include "Algo/BinarySearch.h"
#include "ArcSim/GameplayManager/ArcConductor.h"


// Sets default values
AArcNoteRender::AArcNoteRender()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Mesh"));
	MaterialBase = CreateDefaultSubobject<UMaterial>(TEXT("MaterialBase"));
	Material = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("Material"));

	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void AArcNoteRender::BeginPlay()
{
	Super::BeginPlay();

	SetActive(false);

	//InitMesh();
	
}

// Called every frame
void AArcNoteRender::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Interpolate();

}

void AArcNoteRender::SetActive(bool isActive) {

	// Hide note in game (Not rendered)
	SetActorHiddenInGame(!isActive);

	// Disables collision components
	SetActorEnableCollision(isActive);

	// Stops the note from ticking
	SetActorTickEnabled(isActive);

}

bool AArcNoteRender::Interpolate() {

	if (!(Conductor->UpdateFlag)) {
		return false;
	}

	FVector Location = GetActorLocation();
	CalculateLocation(Location);

	//if (Location.Z > 2 * Conductor->FarDistStatic) {
	//	return false;
	//}

	// should add isGroupHidden to isActive, later todo
	bool isActive = Location.Z <= Conductor->FarDistStatic && Location.Z >= Conductor->NearDistStatic;
	SetActorLocation(Location);
	UpdateMesh(isActive);
	//SetActive(isActive);

	return isActive;

}

void AArcNoteRender::CalculateLocation(FVector& Location) {

	const TArray<FArcTiming>& Group = Conductor->TimingGroup[GroupID];
	float& TimeCurr = Conductor->TimeDspCurr;
	float& Speed = Conductor->Speed;
	float& RefBPM = Conductor->RefBPM;
	float& Velocity = Conductor->Velocity;

	int32 TCurrPtr = Algo::LowerBoundBy(Group, TimeCurr, UE_PROJECTION(FArcTiming::ForComp));
	if (!Group.IsValidIndex(TCurrPtr)) {
		TCurrPtr = Group.Num() - 1;
	}
	else if (TCurrPtr == 0) {
		TCurrPtr = 0;
	}
	else {
		TCurrPtr -= 1;
	}

	int32 TStartPtr = Algo::LowerBoundBy(Group, TimeStart, UE_PROJECTION(FArcTiming::ForComp));
	if (!Group.IsValidIndex(TCurrPtr)) {
		TStartPtr = Group.Num() - 1;
	}
	else if (TStartPtr == 0) {
		TStartPtr = 0;
	}
	else {
		TStartPtr -= 1;
	}

	float StartPos = Group[TStartPtr].TillNowPos + (TimeStart - Group[TStartPtr].Time) * Speed * Velocity * Group[TStartPtr].BPM / RefBPM;

	float CurrPos = Group[TCurrPtr].TillNowPos + (TimeCurr - Group[TCurrPtr].Time) * Speed * Velocity * Group[TCurrPtr].BPM / RefBPM;

	Location.Z = StartPos - CurrPos;

	return;

}


