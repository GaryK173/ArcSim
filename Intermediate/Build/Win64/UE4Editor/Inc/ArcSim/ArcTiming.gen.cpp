// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/Structs/ArcTiming.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcTiming() {}
// Cross Module References
	ARCSIM_API UScriptStruct* Z_Construct_UScriptStruct_FArcTiming();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
// End Cross Module References
class UScriptStruct* FArcTiming::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ARCSIM_API uint32 Get_Z_Construct_UScriptStruct_FArcTiming_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArcTiming, Z_Construct_UPackage__Script_ArcSim(), TEXT("ArcTiming"), sizeof(FArcTiming), Get_Z_Construct_UScriptStruct_FArcTiming_Hash());
	}
	return Singleton;
}
template<> ARCSIM_API UScriptStruct* StaticStruct<FArcTiming>()
{
	return FArcTiming::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArcTiming(FArcTiming::StaticStruct, TEXT("/Script/ArcSim"), TEXT("ArcTiming"), false, nullptr, nullptr);
static struct FScriptStruct_ArcSim_StaticRegisterNativesFArcTiming
{
	FScriptStruct_ArcSim_StaticRegisterNativesFArcTiming()
	{
		UScriptStruct::DeferCppStructOps<FArcTiming>(FName(TEXT("ArcTiming")));
	}
} ScriptStruct_ArcSim_StaticRegisterNativesFArcTiming;
	struct Z_Construct_UScriptStruct_FArcTiming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Beats_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Beats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TillNowPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TillNowPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcTiming_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Structs/ArcTiming.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArcTiming_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArcTiming>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Structs/ArcTiming.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArcTiming, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_BPM_MetaData[] = {
		{ "ModuleRelativePath", "Structs/ArcTiming.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_BPM = { "BPM", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArcTiming, BPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_BPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_BPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Beats_MetaData[] = {
		{ "ModuleRelativePath", "Structs/ArcTiming.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Beats = { "Beats", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArcTiming, Beats), METADATA_PARAMS(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Beats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Beats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_TillNowPos_MetaData[] = {
		{ "ModuleRelativePath", "Structs/ArcTiming.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_TillNowPos = { "TillNowPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArcTiming, TillNowPos), METADATA_PARAMS(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_TillNowPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_TillNowPos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArcTiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_BPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_Beats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArcTiming_Statics::NewProp_TillNowPos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArcTiming_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
		nullptr,
		&NewStructOps,
		"ArcTiming",
		sizeof(FArcTiming),
		alignof(FArcTiming),
		Z_Construct_UScriptStruct_FArcTiming_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArcTiming_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArcTiming_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArcTiming()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArcTiming_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ArcSim();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArcTiming"), sizeof(FArcTiming), Get_Z_Construct_UScriptStruct_FArcTiming_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArcTiming_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArcTiming_Hash() { return 2171748651U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
