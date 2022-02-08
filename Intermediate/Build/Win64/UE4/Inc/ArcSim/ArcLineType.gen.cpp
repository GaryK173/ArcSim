// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/Structs/ArcLineType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcLineType() {}
// Cross Module References
	ARCSIM_API UEnum* Z_Construct_UEnum_ArcSim_EArcLineType();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
// End Cross Module References
	static UEnum* EArcLineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ArcSim_EArcLineType, Z_Construct_UPackage__Script_ArcSim(), TEXT("EArcLineType"));
		}
		return Singleton;
	}
	template<> ARCSIM_API UEnum* StaticEnum<EArcLineType>()
	{
		return EArcLineType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArcLineType(EArcLineType_StaticEnum, TEXT("/Script/ArcSim"), TEXT("EArcLineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ArcSim_EArcLineType_Hash() { return 3946039900U; }
	UEnum* Z_Construct_UEnum_ArcSim_EArcLineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ArcSim();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArcLineType"), 0, Get_Z_Construct_UEnum_ArcSim_EArcLineType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EArcLineType::S", (int64)EArcLineType::S },
				{ "EArcLineType::B", (int64)EArcLineType::B },
				{ "EArcLineType::Si", (int64)EArcLineType::Si },
				{ "EArcLineType::SiSi", (int64)EArcLineType::SiSi },
				{ "EArcLineType::SiSo", (int64)EArcLineType::SiSo },
				{ "EArcLineType::So", (int64)EArcLineType::So },
				{ "EArcLineType::SoSi", (int64)EArcLineType::SoSi },
				{ "EArcLineType::SoSo", (int64)EArcLineType::SoSo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "B.Name", "EArcLineType::B" },
				{ "ModuleRelativePath", "Structs/ArcLineType.h" },
				{ "S.Name", "EArcLineType::S" },
				{ "Si.Name", "EArcLineType::Si" },
				{ "SiSi.Name", "EArcLineType::SiSi" },
				{ "SiSo.Name", "EArcLineType::SiSo" },
				{ "So.Name", "EArcLineType::So" },
				{ "SoSi.Name", "EArcLineType::SoSi" },
				{ "SoSo.Name", "EArcLineType::SoSo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ArcSim,
				nullptr,
				"EArcLineType",
				"EArcLineType",
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
