// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCSIM_ArcColor_generated_h
#error "ArcColor.generated.h already included, missing '#pragma once' in ArcColor.h"
#endif
#define ARCSIM_ArcColor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcSim_Source_ArcSim_Structs_ArcColor_h


#define FOREACH_ENUM_EARCCOLOR(op) \
	op(EArcColor::Void) \
	op(EArcColor::Blue) \
	op(EArcColor::Red) \
	op(EArcColor::Green) 

enum class EArcColor : uint8;
template<> ARCSIM_API UEnum* StaticEnum<EArcColor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
