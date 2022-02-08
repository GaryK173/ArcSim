// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcSkyArcRender.h"
#include "ArcSim/GameplayManager/ArcAlgoLib.h"
#include "ArcSim/GameplayManager/ArcConductor.h"

AArcSkyArcRender::AArcSkyArcRender() : Super() {

	CapMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CapMesh"));
	ShadowMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ShadowMesh"));
	
	MaterialBaseBlue = CreateDefaultSubobject<UMaterial>(TEXT("MaterialBaseBlue"));
	MaterialBaseRed = CreateDefaultSubobject<UMaterial>(TEXT("MaterialBaseRed"));
	MaterialBaseGreen = CreateDefaultSubobject<UMaterial>(TEXT("MaterialBaseGreen"));
	MaterialBaseVoid = CreateDefaultSubobject<UMaterial>(TEXT("MaterialBaseVoid"));
	CapMaterialBase = CreateDefaultSubobject<UMaterial>(TEXT("CapMaterialBase"));
	ShadowMaterialBase = CreateDefaultSubobject<UMaterial>(TEXT("ShadowMaterialBase"));

	CapMaterial = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("CapMaterial"));
	ShadowMaterial = CreateDefaultSubobject<UMaterialInstanceDynamic>(TEXT("ShadowMaterial"));

	static ConstructorHelpers::FObjectFinder<UMaterial> FindBlue(TEXT("/Game/Materials/ArcArcBlue.ArcArcBlue"));
	if (FindBlue.Succeeded()) {
		MaterialBaseBlue = FindBlue.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> FindRed(TEXT("/Game/Materials/ArcArcRed.ArcArcRed"));
	if (FindRed.Succeeded()) {
		MaterialBaseRed = FindRed.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> FindGreen(TEXT("/Game/Materials/ArcArcGreen.ArcArcGreen"));
	if (FindGreen.Succeeded()) {
		MaterialBaseGreen = FindGreen.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> FindVoid(TEXT("/Game/Materials/ArcArcVoid.ArcArcVoid"));
	if (FindVoid.Succeeded()) {
		MaterialBaseVoid = FindVoid.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> FindCap(TEXT("/Game/Materials/ArcArcCap.ArcArcCap"));
	if (FindCap.Succeeded()) {
		CapMaterialBase = FindCap.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterial> FindShadow(TEXT("/Game/Materials/ArcArcShadow.ArcArcShadow"));
	if (FindShadow.Succeeded()) {
		ShadowMaterialBase = FindShadow.Object;
	}

	CapMesh->SetupAttachment(RootComponent);
	ShadowMesh->SetupAttachment(RootComponent);

	//IPlatformFile& FileManager = FPlatformFileManager::Get().GetPlatformFile();

	//UTexture2D* Texture2D = FImageUtils::ImportFileAsTexture2D(TEXT("C:/arcaea_3.8.6c/assets/songs/arcahv/base.jpg"));

	//UTexture* Texture = Cast<UTexture>(Texture2D);

	//if (Texture) {

	//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("114514"));
	//	Material->SetTextureParameterValue("ArcBody", Texture);
	//	Material->SetVectorParameterValue("BaseColor", FLinearColor(0, 0, 0, 0));

	//}

}

void AArcSkyArcRender::InitMesh() {

	InitSegment();
	//InitShadow();
	InitHeightLine();
	InitCap();

	SetActorLocation(PosStart * ArcAlgoLib::Scale);

}

void AArcSkyArcRender::UpdateMesh(bool isActive) {

	UpdateCap();
	UpdateSegment(isActive);
	//UpdateShadow(isActive);
	UpdateHeightLine(isActive);
	return;

}

void AArcSkyArcRender::InitSegment() {
	
	//       5
	//      / \
	//     2   \
	//    / \   \
	//   3---\---4
	//  /  o  \ /
	// 0-------1 mesh looks like this
	//
	//     2
	//    / \
	//   /   \
	//  /  o  \
	// 0-------1 mesh with head looks like this
	//  \     /
	//    -6-
	//


	// Params of generating & updating segments were inspired by Arcade

	switch (Color)
	{
	case EArcColor::Void:
	{
		MaterialBase = MaterialBaseVoid;
		Size = SizeVoid;
	}
	case EArcColor::Red:
	{
		MaterialBase = MaterialBaseRed;
		Size = SizeColor;
	}
	case EArcColor::Blue:
	{
		MaterialBase = MaterialBaseBlue;
		Size = SizeColor;
	}
	case EArcColor::Green:
	{
		MaterialBase = MaterialBaseGreen;
		Size = SizeColor;
	}
	default:
		break;
	}

	Material = UMaterialInstanceDynamic::Create(MaterialBase, RootComponent);

	float Duration = FGenericPlatformMath::Abs(TimeEnd - TimeStart);
	int32 NormalizeCount = Duration < 1000.00f ? 14 : 7;
	int32 SegSize = 1000 / NormalizeCount;
	int32 SegCount = Duration / SegSize;
	if ((float)SegCount * SegSize < Duration || (SegCount == 0 && (PosStart != PosEnd))) {
		SegCount += 1;
	}

	float TimePrefix = 0.00f;
	FVector CurrStart;
	FVector CurrEnd;
	ArcAlgoLib::CalculateRelativePositionByArcType(Type, PosStart, PosEnd, (float)TimePrefix / Duration, CurrEnd);

	for (int32 Segment = 0; Segment < SegCount; ++Segment) {

		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector2D> UVs;

		CurrStart = CurrEnd;
		CalculateZByTime(CurrStart.Z, TimePrefix);

		TimePrefix += (float)SegSize;
		TimePrefix = FGenericPlatformMath::Min(TimePrefix, Duration);
		ArcAlgoLib::CalculateRelativePositionByArcType(Type, PosStart, PosEnd, (float)TimePrefix / Duration, CurrEnd);
		CalculateZByTime(CurrEnd.Z, TimePrefix);

		Vertices.Add((CurrStart + FVector(Size.X / -2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale);
		Vertices.Add((CurrStart + FVector(Size.X / 2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale);
		Vertices.Add((CurrStart + FVector(0.0, Size.Y / 2.0, 0.0)) * ArcAlgoLib::Scale);
		Vertices.Add((CurrEnd + FVector(Size.X / -2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale);
		Vertices.Add((CurrEnd + FVector(Size.X / 2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale);
		Vertices.Add((CurrEnd + FVector(0.0, Size.Y / 2.0, 0.0)) * ArcAlgoLib::Scale);

		Triangles = { 1, 4, 5, 1, 5, 2, 0, 2, 5, 0, 5, 3 };

		UVs.Add(FVector2D(1, 1)); // 0
		UVs.Add(FVector2D(1, 1)); // 1
		UVs.Add(FVector2D(0, 0)); // 2
		UVs.Add(FVector2D(1, 0)); // 3
		UVs.Add(FVector2D(1, 0)); // 4
		UVs.Add(FVector2D(0, 1)); // 5

		if (Segment == 0 && IsHead) {

			Vertices.Add((CurrStart + FVector(0.0, Size.Y / -2.0, Size.X / -4.0)) * ArcAlgoLib::Scale);

			UVs.Add(FVector2D(1, 0)); // 6

			Triangles.Append({ 2, 0, 6, 6, 1, 2 });

		}


		Mesh->CreateMeshSection(Segment,
			Vertices,
			Triangles,
			TArray<FVector>(),
			UVs,
			TArray<FColor>(),
			TArray<FProcMeshTangent>(),
			true);

		Mesh->SetMaterial(Segment, Material);

		BodySegments.Add(FArcSegment{ CurrStart, CurrEnd, TimePrefix });

	}

	Mesh->SetVisibility(false);

	return;

}

void AArcSkyArcRender::InitShadow() {

	//       5
	//      / \
	//     2   \
	//    / \   \
	//   3---\---4
	//  /  o  \ /
	// 0-------1 mesh looks like this
	//
	//   3-------2
	//  /       /
	// 0---o---1 shadow looks like this

	ShadowMaterial = UMaterialInstanceDynamic::Create(ShadowMaterialBase, ShadowMesh);

	int32 SegmentCount = Mesh->GetNumSections();

	for (int32 Segment = 0; Segment < SegmentCount; ++Segment) {

		TArray<FVector> Vertices;
		TArray<int32> Triangles;
		TArray<FVector2D> UVs;

		FProcMeshSection* Section = Mesh->GetProcMeshSection(Segment);

		Vertices.Add(Section->ProcVertexBuffer[0].Position);
		Vertices.Add(Section->ProcVertexBuffer[1].Position);
		Vertices.Add(Section->ProcVertexBuffer[4].Position);
		Vertices.Add(Section->ProcVertexBuffer[3].Position);

		for (auto& Vertex : Vertices) {

			Vertex.Y = 0.00f;

		}

		Triangles = { 0, 1, 2, 0, 2, 3 };

		UVs.Add(FVector2D(0, 1)); // 0
		UVs.Add(FVector2D(1, 1)); // 1
		UVs.Add(FVector2D(1, 0)); // 2
		UVs.Add(FVector2D(0, 0)); // 3

		ShadowMesh->CreateMeshSection(Segment,
			Vertices,
			Triangles,
			TArray<FVector>(),
			UVs,
			TArray<FColor>(),
			TArray<FProcMeshTangent>(),
			true);

		if (ShadowMaterial) {
			ShadowMesh->SetMaterial(Segment, ShadowMaterial);
		}
		
	}

	FVector ShadowPos = PosStart * ArcAlgoLib::Scale;
	ShadowPos.Y = 0.00f;

	ShadowMesh->SetWorldLocation(ShadowPos);

	ShadowMesh->SetVisibility(false);

}

void AArcSkyArcRender::InitHeightLine() {}

void AArcSkyArcRender::InitCap() {

	CapMaterial = UMaterialInstanceDynamic::Create(CapMaterialBase, RootComponent);
	CapMaterial->SetVectorParameterValue(FName("CapTrans"), FLinearColor(0.0, 0.0, 0.0, 1.0));

	CapSize.X = Color == EArcColor::Void ? SizeVoid.X * 2 : SizeColor.Y;
	CapSize.Y = CapSize.X;
	CapSize.Z = 0;
	
	// Generate CapMesh here
	// 3-------2
	// |       |
	// |   o   |
	// |       |
	// 0-------1 cap mesh looks like this

	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector2D> UVs;

	Vertices.Add(FVector(CapSize.X / -2.0, CapSize.Y / -2.0, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(CapSize.X / 2.0, CapSize.Y / -2.0, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(CapSize.X / 2.0, CapSize.Y / 2.0, 0.0) * ArcAlgoLib::Scale);
	Vertices.Add(FVector(CapSize.X / -2.0, CapSize.Y / 2.0, 0.0) * ArcAlgoLib::Scale);

	Triangles = { 0, 1, 2, 0, 2, 3 };

	UVs.Add(FVector2D(0, 1)); // 0
	UVs.Add(FVector2D(1, 1)); // 1
	UVs.Add(FVector2D(1, 0)); // 2
	UVs.Add(FVector2D(0, 0)); // 3

	CapMesh->CreateMeshSection(0,
		Vertices,
		Triangles,
		TArray<FVector>(),
		UVs,
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true);



	if (CapMaterial) {
		CapMesh->SetMaterial(0, CapMaterial);
	}

	CapPos = PosStart * ArcAlgoLib::Scale;

	CapMesh->SetVisibility(false);

	CapMesh->SetWorldLocation(CapPos);

}

void AArcSkyArcRender::UpdateSegment(bool isActive) {

	Mesh->SetVisibility(isActive);

	if (Triggered && CurrOverlapSeg >= 0) {

		FVector Location = GetActorLocation();
		int32 SegCount = Mesh->GetNumSections();

		for (int32 Segment = 0; Segment < CurrOverlapSeg; ++Segment) {
			Mesh->SetMeshSectionVisible(Segment, false);
		}

		FProcMeshSection* Section = Mesh->GetProcMeshSection(CurrOverlapSeg);
		Section->ProcVertexBuffer[0].Position = (CapRelativePos + FVector(Size.X / -2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale;
		Section->ProcVertexBuffer[1].Position = (CapRelativePos + FVector(Size.X / 2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale;
		Section->ProcVertexBuffer[2].Position = (CapRelativePos + FVector(0.0, Size.Y / 2.0, 0.0)) * ArcAlgoLib::Scale;
		Mesh->SetProcMeshSection(CurrOverlapSeg, *Section);

		/*for (int32 Segment = 0; Segment < SegCount; ++Segment) {

			FProcMeshSection* Section = Mesh->GetProcMeshSection(Segment);
			if (!Mesh->IsMeshSectionVisible(Segment)) {
				continue;
			}
			else if (Section->ProcVertexBuffer[5].Position.Z < 0.00f) {
				Mesh->SetMeshSectionVisible(Segment, false);
				continue;
			}
			else {

				Section->ProcVertexBuffer[0].Position += (Section->ProcVertexBuffer[3].Position - Section->ProcVertexBuffer[0].Position) * (float)((-Location.Z - Section->ProcVertexBuffer[0].Position.Z) / (Section->ProcVertexBuffer[3].Position.Z - Section->ProcVertexBuffer[0].Position.Z));
				Section->ProcVertexBuffer[1].Position += (Section->ProcVertexBuffer[4].Position - Section->ProcVertexBuffer[1].Position) * (float)((-Location.Z - Section->ProcVertexBuffer[1].Position.Z) / (Section->ProcVertexBuffer[4].Position.Z - Section->ProcVertexBuffer[1].Position.Z));
				Section->ProcVertexBuffer[2].Position += (Section->ProcVertexBuffer[5].Position - Section->ProcVertexBuffer[2].Position) * (float)((-Location.Z - Section->ProcVertexBuffer[2].Position.Z) / (Section->ProcVertexBuffer[5].Position.Z - Section->ProcVertexBuffer[2].Position.Z));
				Mesh->SetProcMeshSection(Segment, *Section);
				break;

			}

		}*/

	}

}

void AArcSkyArcRender::UpdateShadow(bool isActive) {

	ShadowMesh->SetVisibility(isActive);

	if (Triggered && CurrOverlapSeg >= 0) {

		FVector Location = GetActorLocation();
		int32 SegCount = ShadowMesh->GetNumSections();

		for (int32 Segment = 0; Segment < CurrOverlapSeg; ++Segment) {
			ShadowMesh->SetMeshSectionVisible(Segment, false);
		}

		FProcMeshSection* Section = ShadowMesh->GetProcMeshSection(CurrOverlapSeg);

		FVector ShadowRelativePos = CapRelativePos;
		ShadowRelativePos.Y = 0.00f;

		Section->ProcVertexBuffer[0].Position = (ShadowRelativePos + FVector(Size.X / -2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale;
		Section->ProcVertexBuffer[1].Position = (ShadowRelativePos + FVector(Size.X / 2.0, Size.Y / -2.0, 0.0)) * ArcAlgoLib::Scale;
		ShadowMesh->SetProcMeshSection(CurrOverlapSeg, *Section);

	}

}

void AArcSkyArcRender::UpdateHeightLine(bool isActive) {}

void AArcSkyArcRender::UpdateCap() {

	if (TimeEnd - TimeStart == 0) {
		CapMesh->SetVisibility(false);
	}
	else {
		if (!LocateCap()) {
			return;
		}
		else if (Conductor->TimeDspCurr >= TimeStart || Conductor->TimeDspCurr <= TimeEnd) {
			CapMesh->SetVisibility(true);
			CapMesh->SetRelativeLocation(CapRelativePos * ArcAlgoLib::Scale);
		}
		else if (Conductor->TimeDspCurr < TimeStart && IsHead && Color != EArcColor::Void) {
			CapMesh->SetVisibility(true);
			CapMesh->SetWorldLocation(CapPos);
			// Scaling CapMesh here

			float ratio = GetActorLocation().Z / Conductor->FarDistStatic;
			ratio = ratio <= 1.0 ? ratio : 1.0;
			ratio = ratio >= 0.0 ? ratio : 0.0;

			float Scale = 1 + ratio;

			CapMaterial->SetVectorParameterValue(FName("CapTrans"), FLinearColor(0.0, 0.0, 0.0, (1.0 - ratio)));
			
			FProcMeshSection* Section = CapMesh->GetProcMeshSection(0);

			for (int32 i = 0; i < Section->ProcVertexBuffer.Num(); ++ i) {

				Section->ProcVertexBuffer[i].Position *= Scale;

			}

			CapMesh->SetProcMeshSection(0, *Section);

		}
		else {
			CapMesh->SetVisibility(false);
		}
	}

}

bool AArcSkyArcRender::LocateCap() {
	
	//if (Conductor->TimeDspCurr < TimeStart) {
	//	return true;
	//}

	CurrOverlapSeg = Algo::LowerBoundBy(BodySegments, Conductor->TimeDspCurr - TimeStart, UE_PROJECTION(FArcSegment::ForComp));
	if (!BodySegments.IsValidIndex(CurrOverlapSeg)) {
		CurrOverlapSeg = 0;
		return false;
	}

	int32 Duration = (TimeEnd - TimeStart) < 1000 ? (1000 / 14) : (1000 / 7);
	CapRelativePos = BodySegments[CurrOverlapSeg].RelativePosStart + (BodySegments[CurrOverlapSeg].RelativePosEnd - BodySegments[CurrOverlapSeg].RelativePosStart) * (Conductor->TimeDspCurr - BodySegments[CurrOverlapSeg].TimeEnd + Duration) / Duration;
	CapPos = CapRelativePos + PosStart;
	CapPos *= ArcAlgoLib::Scale;
	CapPos.Z = 0;
	return true;

}

void AArcSkyArcRender::CalculateZByTime(float& currZ, float TimePrefix) {

	const TArray<FArcTiming>& Group = Conductor->TimingGroup[GroupID];
	float& Speed = Conductor->Speed;
	float& RefBPM = Conductor->RefBPM;
	float& Velocity = Conductor->Velocity;
	const float& OneMinute = ArcAlgoLib::OneMinute;

	int32 TEndPtr = Algo::LowerBoundBy(Group, TimePrefix + TimeStart, UE_PROJECTION(FArcTiming::ForComp)) - 1;
	if (!Group.IsValidIndex(TEndPtr)) {
		TEndPtr = Group.Num() - 1;
	}

	int32 TStartPtr = Algo::LowerBoundBy(Group, TimeStart, UE_PROJECTION(FArcTiming::ForComp)) - 1;
	if (!Group.IsValidIndex(TStartPtr)) {
		TStartPtr = Group.Num() - 1;
	}

	float StartPos = Group[TStartPtr].TillNowPos + (TimeStart - Group[TStartPtr].Time) * Speed * Velocity * Group[TStartPtr].BPM / RefBPM;

	float EndPos = Group[TEndPtr].TillNowPos + (TimePrefix + TimeStart - Group[TEndPtr].Time) * Speed * Velocity * Group[TEndPtr].BPM / RefBPM;

	currZ = EndPos - StartPos;
	return;

}

