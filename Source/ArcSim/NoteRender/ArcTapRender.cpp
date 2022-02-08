// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcTapRender.h"
#include "ArcSim/GameplayManager/ArcAlgoLib.h"
#include "ArcSim/GameplayManager/ArcConductor.h"

AArcTapRender::AArcTapRender() : Super() {

	static ConstructorHelpers::FObjectFinder<UMaterial> FindMaterial(TEXT("/Game/Materials/ArcTap.ArcTap"));

	if (FindMaterial.Succeeded()) {
		MaterialBase = FindMaterial.Object;
	}

	Material = UMaterialInstanceDynamic::Create(MaterialBase, RootComponent);

}

void AArcTapRender::InitMesh() {

	// 3-------2
	// |       |
	// 0---o---1 mesh looks like this

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector2D> UVs;

	Vertices.Add(FVector(Size.X / -2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, Size.Z) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / -2.0, Size.Y, Size.Z) * ArcAlgoLib::Scale);

	Triangles = { 0, 1, 2, 0, 2, 3 };

	UVs.Add(FVector2D(0, 1));
	UVs.Add(FVector2D(1, 1));
	UVs.Add(FVector2D(1, 0));
	UVs.Add(FVector2D(0, 0));

	Mesh->CreateMeshSection(0, 
							Vertices, 
							Triangles, 
							TArray<FVector>(), 
							UVs, TArray<FColor>(), 
							TArray<FProcMeshTangent>(), 
							true);

	if (Material) {
		Mesh->SetMaterial(0, Material);
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("114514"));

	Mesh->SetVisibility(false);

	SetActorLocation(PosStart * ArcAlgoLib::Scale);

	return;

}

void AArcTapRender::UpdateMesh(bool isActive) {

	Mesh->SetVisibility(isActive);

	if (Triggered) {
		Mesh->SetVisibility(false);
	}

	return;

}