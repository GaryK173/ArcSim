// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCSIM_ArcLineType_generated_h
#error "ArcLineType.generated.h already included, missing '#pragma once' in ArcLineType.h"
#endif
#define ARCSIM_ArcLineType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcSim_Source_ArcSim_Structs_ArcLineType_h


#define FOREACH_ENUM_EARCLINETYPE(op) \
	op(EArcLineType::S) \
	op(EArcLineType::B) \
	op(EArcLineType::Si) \
	op(EArcLineType::SiSi) \
	op(EArcLineType::SiSo) \
	op(EArcLineType::So) \
	op(EArcLineType::SoSi) \
	op(EArcLineType::SoSo) 

enum class EArcLineType : uint8;
template<> ARCSIM_API UEnum* StaticEnum<EArcLineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
