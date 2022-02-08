// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/Structs/ArcColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcColor() {}
// Cross Module References
	ARCSIM_API UEnum* Z_Construct_UEnum_ArcSim_EArcColor();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
// End Cross Module References
	static UEnum* EArcColor_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArcSim_EArcColor, Z_Construct_UPackage__Script_ArcSim(), TEXT("EArcColor"));
		}
		return Singleton;
	}
	template<> ARCSIM_API UEnum* StaticEnum<EArcColor>()
	{
		return EArcColor_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArcColor(EArcColor_StaticEnum, TEXT("/Script/ArcSim"), TEXT("EArcColor"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArcSim_EArcColor_Hash() { return 15702632U; }
	UEnum* Z_Construct_UEnum_ArcSim_EArcColor()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArcSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArcColor"), 0, Get_Z_Construct_UEnum_ArcSim_EArcColor_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EArcColor::Void", (int64)EArcColor::Void },
				{ "EArcColor::Blue", (int64)EArcColor::Blue },
				{ "EArcColor::Red", (int64)EArcColor::Red },
				{ "EArcColor::Green", (int64)EArcColor::Green },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blue.Name", "EArcColor::Blue" },
				{ "Green.Name", "EArcColor::Green" },
				{ "ModuleRelativePath", "Structs/ArcColor.h" },
				{ "Red.Name", "EArcColor::Red" },
				{ "Void.Name", "EArcColor::Void" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArcSim,
				nullptr,
				"EArcColor",
				"EArcColor",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
