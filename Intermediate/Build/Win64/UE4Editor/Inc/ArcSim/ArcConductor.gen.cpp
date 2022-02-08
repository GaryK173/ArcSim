// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/GameplayManager/ArcConductor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcConductor() {}
// Cross Module References
	ARCSIM_API UFunction* Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus();
	ARCSIM_API UClass* Z_Construct_UClass_AArcConductor_NoRegister();
	ARCSIM_API UClass* Z_Construct_UClass_AArcConductor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics
	{
		struct _Script_ArcSim_eventOnSubscribeSoundWave_Parms
		{
			URuntimeAudioImporterLibrary* ImporterRef;
			UImportedSoundWave* SoundWaveRef;
			ETranscodingStatus Status;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImporterRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_ImporterRef = { "ImporterRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ArcSim_eventOnSubscribeSoundWave_Parms, ImporterRef), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_SoundWaveRef = { "SoundWaveRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ArcSim_eventOnSubscribeSoundWave_Parms, SoundWaveRef), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_ArcSim_eventOnSubscribeSoundWave_Parms, Status), Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, METADATA_PARAMS(Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_ImporterRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_SoundWaveRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate for parse SoundWave\n" },
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
		{ "ToolTip", "Delegate for parse SoundWave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ArcSim, nullptr, "OnSubscribeSoundWave__DelegateSignature", nullptr, nullptr, sizeof(_Script_ArcSim_eventOnSubscribeSoundWave_Parms), Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AArcConductor::execSubscribeSoundWave)
	{
		P_GET_OBJECT(URuntimeAudioImporterLibrary,Z_Param_ImporterRef);
		P_GET_OBJECT(UImportedSoundWave,Z_Param_SoundWaveRef);
		P_GET_ENUM_REF(ETranscodingStatus,Z_Param_Out_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubscribeSoundWave(Z_Param_ImporterRef,Z_Param_SoundWaveRef,(ETranscodingStatus&)(Z_Param_Out_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArcConductor::execUpdateCountdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCountdown();
		P_NATIVE_END;
	}
	void AArcConductor::StaticRegisterNativesAArcConductor()
	{
		UClass* Class = AArcConductor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SubscribeSoundWave", &AArcConductor::execSubscribeSoundWave },
			{ "UpdateCountdown", &AArcConductor::execUpdateCountdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics
	{
		struct ArcConductor_eventSubscribeSoundWave_Parms
		{
			URuntimeAudioImporterLibrary* ImporterRef;
			UImportedSoundWave* SoundWaveRef;
			ETranscodingStatus Status;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImporterRef;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWaveRef;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_ImporterRef = { "ImporterRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcConductor_eventSubscribeSoundWave_Parms, ImporterRef), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_SoundWaveRef = { "SoundWaveRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcConductor_eventSubscribeSoundWave_Parms, SoundWaveRef), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArcConductor_eventSubscribeSoundWave_Parms, Status), Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, METADATA_PARAMS(Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_ImporterRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_SoundWaveRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArcConductor, nullptr, "SubscribeSoundWave", nullptr, nullptr, sizeof(ArcConductor_eventSubscribeSoundWave_Parms), Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArcConductor_SubscribeSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArcConductor_SubscribeSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArcConductor, nullptr, "UpdateCountdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArcConductor_UpdateCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArcConductor_UpdateCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArcConductor_NoRegister()
	{
		return AArcConductor::StaticClass();
	}
	struct Z_Construct_UClass_AArcConductor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrePlayingCountdown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrePlayingCountdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubscribeSoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnSubscribeSoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefBPM_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefBPM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDspStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioDspStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioDspCurr_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AudioDspCurr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeDspCurr_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeDspCurr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UserOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearDistStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NearDistStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FarDistStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FarDistStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JudgeDistStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JudgeDistStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcConductor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArcConductor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArcConductor_SubscribeSoundWave, "SubscribeSoundWave" }, // 3162040917
		{ &Z_Construct_UFunction_AArcConductor_UpdateCountdown, "UpdateCountdown" }, // 4020098584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayManager/ArcConductor.h" },
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_PrePlayingCountdown_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_PrePlayingCountdown = { "PrePlayingCountdown", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, PrePlayingCountdown), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_PrePlayingCountdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_PrePlayingCountdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_OnSubscribeSoundWave_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_OnSubscribeSoundWave = { "OnSubscribeSoundWave", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, OnSubscribeSoundWave), Z_Construct_UDelegateFunction_ArcSim_OnSubscribeSoundWave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_OnSubscribeSoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_OnSubscribeSoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, Scale), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_RefBPM_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_RefBPM = { "RefBPM", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, RefBPM), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_RefBPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_RefBPM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, Speed), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, Velocity), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioOffset_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioOffset = { "AudioOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, AudioOffset), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspStart_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspStart = { "AudioDspStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, AudioDspStart), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspCurr_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspCurr = { "AudioDspCurr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, AudioDspCurr), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspCurr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspCurr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_TimeDspCurr_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_TimeDspCurr = { "TimeDspCurr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, TimeDspCurr), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_TimeDspCurr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_TimeDspCurr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_UserOffset_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_UserOffset = { "UserOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, UserOffset), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_UserOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_UserOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_TotalOffset_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_TotalOffset = { "TotalOffset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, TotalOffset), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_TotalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_TotalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_NearDistStatic_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_NearDistStatic = { "NearDistStatic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, NearDistStatic), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_NearDistStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_NearDistStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_FarDistStatic_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_FarDistStatic = { "FarDistStatic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, FarDistStatic), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_FarDistStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_FarDistStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_JudgeDistStatic_MetaData[] = {
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_JudgeDistStatic = { "JudgeDistStatic", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, JudgeDistStatic), METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_JudgeDistStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_JudgeDistStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcConductor_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Comment", "//USoundWave* SoundWave = nullptr;\n" },
		{ "ModuleRelativePath", "GameplayManager/ArcConductor.h" },
		{ "ToolTip", "USoundWave* SoundWave = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcConductor_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcConductor, SoundWave), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::NewProp_SoundWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcConductor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_PrePlayingCountdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_OnSubscribeSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_RefBPM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_AudioDspCurr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_TimeDspCurr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_UserOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_TotalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_NearDistStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_FarDistStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_JudgeDistStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcConductor_Statics::NewProp_SoundWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcConductor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcConductor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcConductor_Statics::ClassParams = {
		&AArcConductor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArcConductor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcConductor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcConductor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcConductor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcConductor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcConductor, 2432356013);
	template<> ARCSIM_API UClass* StaticClass<AArcConductor>()
	{
		return AArcConductor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcConductor(Z_Construct_UClass_AArcConductor, &AArcConductor::StaticClass, TEXT("/Script/ArcSim"), TEXT("AArcConductor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcConductor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
