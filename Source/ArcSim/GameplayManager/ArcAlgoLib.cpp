// Fill out your copyright notice in the Description page of Project Settings.


#include "ArcAlgoLib.h"

//const float ArcAlgoLib::Scale = 100.00f;
//
//const float ArcAlgoLib::OneMinute = 60000.00f;
//
//const float ArcAlgoLib::TrackOffset = 0.50f;

void ArcAlgoLib::CalculatePositionByTrack(int32 TrackID, FVector& Position) {

	Position.X = -TrackOffset / 2.0 + (TrackID - 1) * TrackOffset;
	return;

}

void ArcAlgoLib::CalculatePositionByArcType(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio, FVector& Position) {

	Position.X = CalculateX(Type, startPos, endPos, TimeRatio);
	Position.Y = CalculateY(Type, startPos, endPos, TimeRatio);
	return;
}

void ArcAlgoLib::CalculateRelativePositionByArcType(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio, FVector& Position) {

	Position.X = CalculateX(Type, startPos, endPos, TimeRatio);
	Position.Y = CalculateY(Type, startPos, endPos, TimeRatio);
	Position -= startPos;
	return;
}

float ArcAlgoLib::CalculateX(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio) {

	switch (Type)
	{
		default:
			case EArcLineType::S:
				return S(startPos.X, endPos.X, TimeRatio);
			case EArcLineType::B:
				return B(startPos.X, endPos.X, TimeRatio);
			case EArcLineType::Si:
			case EArcLineType::SiSi:
			case EArcLineType::SiSo:
				return I(startPos.X, endPos.X, TimeRatio);
			case EArcLineType::So:
			case EArcLineType::SoSi:
			case EArcLineType::SoSo:
				return O(startPos.X, endPos.X, TimeRatio);
			break;
	}

}

float ArcAlgoLib::CalculateY(EArcLineType Type, const FVector& startPos, const FVector& endPos, float TimeRatio) {

	switch (Type)
	{
		default:
			case EArcLineType::S:
			case EArcLineType::Si:
			case EArcLineType::So:
				return S(startPos.Y, endPos.Y, TimeRatio);
			case EArcLineType::B:
				return B(startPos.Y, endPos.Y, TimeRatio);
			case EArcLineType::SiSi:
			case EArcLineType::SoSi:
				return I(startPos.Y, endPos.Y, TimeRatio);
			case EArcLineType::SiSo:
			case EArcLineType::SoSo:
				return O(startPos.Y, endPos.Y, TimeRatio);
			break;
	}

}

float ArcAlgoLib::S(float start, float end, float TimeRatio) {

	return (1 - TimeRatio) * start + end * TimeRatio;

}

float ArcAlgoLib::B(float start, float end, float TimeRatio) {

	float Remain = 1 - TimeRatio;
	return FGenericPlatformMath::Pow(Remain, 3) * start + 3 * FGenericPlatformMath::Pow(Remain, 2) * TimeRatio * start + 3 * Remain * FGenericPlatformMath::Pow(TimeRatio, 2) * end + FGenericPlatformMath::Pow(TimeRatio, 3) * end;

}

float ArcAlgoLib::I(float start, float end, float TimeRatio) {

	return start + (end - start) * (FGenericPlatformMath::Sin(1.5707963f * TimeRatio));

}

float ArcAlgoLib::O(float start, float end, float TimeRatio) {

	return start + (end - start) * (1 - FGenericPlatformMath::Cos(1.5707963f * TimeRatio));

}