// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcSkyTapRender.h"
#include "ArcSim/GameplayManager/ArcAlgoLib.h"
#include "ArcSim/GameplayManager/ArcConductor.h"

AArcSkyTapRender::AArcSkyTapRender() : Super() {

	static ConstructorHelpers::FObjectFinder<UMaterial> FindMaterial(TEXT("/Game/Materials/ArcSkyTap.ArcSkyTap"));

	if (FindMaterial.Succeeded()) {
		MaterialBase = FindMaterial.Object;
	}

	Material = UMaterialInstanceDynamic::Create(MaterialBase, RootComponent);

}

void AArcSkyTapRender::InitMesh() {

	//   7-------6
	//  /|      /|
	// 4-3-----5 2
	// |/      |/
	// 0---o---1 mesh looks like this

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector2D> UVs;

	Vertices.Add(FVector(Size.X / -2.0, 0.0, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, 0.0, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, 0.0, Size.Z) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / -2.0, 0.0, Size.Z) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / -2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / 2.0, Size.Y, Size.Z) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(Size.X / -2.0, Size.Y, Size.Z) * ArcAlgoLib::Scale);

	Triangles = { 0, 2, 1, 0, 3, 2, 4, 5, 6, 4, 6, 7, 1, 2, 6, 1, 6, 5, 0, 7, 3, 0, 4, 7, 0, 1, 5, 0, 5, 4, 3, 6, 2, 3, 7, 6 };

	UVs.Add(FVector2D(0, 1)); // 0
	UVs.Add(FVector2D(1, 1)); // 1
	UVs.Add(FVector2D(1, 0)); // 2
	UVs.Add(FVector2D(0, 0)); // 3
	UVs.Add(FVector2D(0, 0)); // 4
	UVs.Add(FVector2D(1, 0)); // 5
	UVs.Add(FVector2D(1, 1)); // 6
	UVs.Add(FVector2D(0, 1)); // 7

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

void AArcSkyTapRender::UpdateMesh(bool isActive) {

	Mesh->SetVisibility(isActive);

	if (Triggered) {
		Mesh->SetVisibility(false);
	}

	return;

}