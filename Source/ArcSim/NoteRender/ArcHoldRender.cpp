// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcHoldRender.h"
#include "ArcSim/GameplayManager/ArcAlgoLib.h"
#include "ArcSim/GameplayManager/ArcConductor.h"

AArcHoldRender::AArcHoldRender() : Super() {

	static ConstructorHelpers::FObjectFinder<UMaterial> FindMaterial(TEXT("/Game/Materials/Archold.ArcHold"));

	if (FindMaterial.Succeeded()) {
		MaterialBase = FindMaterial.Object;
	}

	Material = UMaterialInstanceDynamic::Create(MaterialBase, RootComponent);

}

void AArcHoldRender::InitMesh() {

	// 3-------2
	// |       |
	// |       |
	// 0---o---1 mesh looks like this

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector2D> UVs;

	float Length = CalculateLength();
	Length /= ArcAlgoLib::Scale;

	Vertices.Add(FVector(Size.X / -2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, Length) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / -2.0, Size.Y, Length) * ArcAlgoLib::Scale);

	Triangles = { 0, 1, 2, 0, 2, 3 };

	UVs.Add(FVector2D(0, 1));
	UVs.Add(FVector2D(1, 1));
	UVs.Add(FVector2D(1, 0));
	UVs.Add(FVector2D(0, 0));

	Mesh->CreateMeshSection(0,
		Vertices,
		Triangles,
		TArray<FVector>(),
		UVs, 
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true);

	Mesh->SetMaterial(0, Material);

	Mesh->SetVisibility(false);

	SetActorLocation(PosStart * ArcAlgoLib::Scale);

	return;

}

void AArcHoldRender::UpdateMesh(bool isActive) {

	Mesh->SetVisibility(isActive);

	//if (Conductor->NoteTriggered.Contains(noteID)) {
	if (Triggered) {
		
		FVector Location = GetActorLocation();

		FProcMeshSection* Section =  Mesh->GetProcMeshSection(0);
		Section->ProcVertexBuffer[0].Position.Z = -Location.Z;
		Section->ProcVertexBuffer[1].Position.Z = -Location.Z;

		Mesh->SetProcMeshSection(0, *Section);

	}

	return;

}

float AArcHoldRender::CalculateLength() {

	const TArray<FArcTiming>& Group = Conductor->TimingGroup[GroupID];
	float& Speed = Conductor->Speed;
	float& RefBPM = Conductor->RefBPM;
	float& Velocity = Conductor->Velocity;
	const float& OneMinute = ArcAlgoLib::OneMinute;

	int32 TEndPtr = Algo::LowerBoundBy(Group, TimeEnd, UE_PROJECTION(FArcTiming::ForComp)) - 1;
	if (!Group.IsValidIndex(TEndPtr)) {
		TEndPtr = Group.Num() - 1;
	}

	int32 TStartPtr = Algo::LowerBoundBy(Group, TimeStart, UE_PROJECTION(FArcTiming::ForComp)) - 1;
	if (!Group.IsValidIndex(TStartPtr)) {
		TStartPtr = Group.Num() - 1;
	}

	float StartPos = Group[TStartPtr].TillNowPos + (TimeStart - Group[TStartPtr].Time) * Speed * Velocity * Group[TStartPtr].BPM / RefBPM;

	float EndPos = Group[TEndPtr].TillNowPos + (TimeEnd - Group[TEndPtr].Time) * Speed * Velocity * Group[TEndPtr].BPM / RefBPM;

	return EndPos - StartPos;

}