// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/ImportedSoundWave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportedSoundWave() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms
		{
			TArray<float> PCMData;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PCMData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PCMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PCMData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner = { "PCMData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData = { "PCMData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms, PCMData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::NewProp_PCMData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast PCM data during a generation request */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Delegate broadcast PCM data during a generation request" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnGeneratePCMData__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnGeneratePCMData_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast to track the end of audio playback */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Delegate broadcast to track the end of audio playback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioPlaybackFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execIsPlaybackFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaybackFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetDurationConst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDurationConst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execGetPlaybackTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execRewindPlaybackTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RewindPlaybackTime(Z_Param_PlaybackTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImportedSoundWave::execReleaseMemory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseMemory();
		P_NATIVE_END;
	}
	void UImportedSoundWave::StaticRegisterNativesUImportedSoundWave()
	{
		UClass* Class = UImportedSoundWave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDuration", &UImportedSoundWave::execGetDuration },
			{ "GetDurationConst", &UImportedSoundWave::execGetDurationConst },
			{ "GetPlaybackPercentage", &UImportedSoundWave::execGetPlaybackPercentage },
			{ "GetPlaybackTime", &UImportedSoundWave::execGetPlaybackTime },
			{ "IsPlaybackFinished", &UImportedSoundWave::execIsPlaybackFinished },
			{ "ReleaseMemory", &UImportedSoundWave::execReleaseMemory },
			{ "RewindPlaybackTime", &UImportedSoundWave::execRewindPlaybackTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics
	{
		struct ImportedSoundWave_eventGetDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the length of the sound wave, in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Get the length of the sound wave, in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDuration", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetDuration_Parms), Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics
	{
		struct ImportedSoundWave_eventGetDurationConst_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetDurationConst_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Constant alternative for getting the length of the sound wave, in seconds\n\x09 */" },
		{ "DisplayName", "Get Duration" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Constant alternative for getting the length of the sound wave, in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetDurationConst", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetDurationConst_Parms), Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetDurationConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetDurationConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics
	{
		struct ImportedSoundWave_eventGetPlaybackPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the current sound playback percentage, 0-100%\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Get the current sound playback percentage, 0-100%" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackPercentage", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetPlaybackPercentage_Parms), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics
	{
		struct ImportedSoundWave_eventGetPlaybackTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventGetPlaybackTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Get the current sound wave playback time, in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Get the current sound wave playback time, in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "GetPlaybackTime", nullptr, nullptr, sizeof(ImportedSoundWave_eventGetPlaybackTime_Parms), Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics
	{
		struct ImportedSoundWave_eventIsPlaybackFinished_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImportedSoundWave_eventIsPlaybackFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImportedSoundWave_eventIsPlaybackFinished_Parms), &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Utility" },
		{ "Comment", "/**\n\x09 * Check if audio playback has finished or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Check if audio playback has finished or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "IsPlaybackFinished", nullptr, nullptr, sizeof(ImportedSoundWave_eventIsPlaybackFinished_Parms), Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Miscellaneous" },
		{ "Comment", "/**\n\x09 * Release PCM data. After the SoundWave is no longer needed, you need to call this function to free memory\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Release PCM data. After the SoundWave is no longer needed, you need to call this function to free memory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "ReleaseMemory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics
	{
		struct ImportedSoundWave_eventRewindPlaybackTime_Parms
		{
			float PlaybackTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime = { "PlaybackTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ImportedSoundWave_eventRewindPlaybackTime_Parms, PlaybackTime), METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime_MetaData)) };
	void Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImportedSoundWave_eventRewindPlaybackTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ImportedSoundWave_eventRewindPlaybackTime_Parms), &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_PlaybackTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Imported Sound Wave|Main" },
		{ "Comment", "/**\n\x09 * Rewind the sound for the specified time\n\x09 *\n\x09 * @param PlaybackTime How long to rewind the sound\n\x09 * @return Whether the sound was rewound or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Rewind the sound for the specified time\n\n@param PlaybackTime How long to rewind the sound\n@return Whether the sound was rewound or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportedSoundWave, nullptr, "RewindPlaybackTime", nullptr, nullptr, sizeof(ImportedSoundWave_eventRewindPlaybackTime_Parms), Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister()
	{
		return UImportedSoundWave::StaticClass();
	}
	struct Z_Construct_UClass_UImportedSoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioPlaybackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioPlaybackFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGeneratePCMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGeneratePCMData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNumOfFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentNumOfFrames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportedSoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportedSoundWave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDuration, "GetDuration" }, // 1526090371
		{ &Z_Construct_UFunction_UImportedSoundWave_GetDurationConst, "GetDurationConst" }, // 165785314
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackPercentage, "GetPlaybackPercentage" }, // 4174742226
		{ &Z_Construct_UFunction_UImportedSoundWave_GetPlaybackTime, "GetPlaybackTime" }, // 3472229430
		{ &Z_Construct_UFunction_UImportedSoundWave_IsPlaybackFinished, "IsPlaybackFinished" }, // 1315062102
		{ &Z_Construct_UFunction_UImportedSoundWave_ReleaseMemory, "ReleaseMemory" }, // 3871984394
		{ &Z_Construct_UFunction_UImportedSoundWave_RewindPlaybackTime, "RewindPlaybackTime" }, // 376921030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Imported Sound Wave" },
		{ "Comment", "/**\n * The main sound wave class used to play imported audio from the Runtime Audio Importer\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ImportedSoundWave.h" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "The main sound wave class used to play imported audio from the Runtime Audio Importer" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * Sampling Rate (samples per second)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Sampling Rate (samples per second)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, SamplingRate), METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
		{ "Comment", "/**\n\x09 * Bind to this delegate to know when the audio playback is finished\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Bind to this delegate to know when the audio playback is finished" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished = { "OnAudioPlaybackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, OnAudioPlaybackFinished), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioPlaybackFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData[] = {
		{ "Category", "Imported Sound Wave|Delegates" },
		{ "Comment", "/**\n\x09 * Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "Bind to this delegate to receive PCM data during playback (may be useful for analyzing audio data)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData = { "OnGeneratePCMData", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, OnGeneratePCMData), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnGeneratePCMData__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_CurrentNumOfFrames_MetaData[] = {
		{ "Category", "Imported Sound Wave|Info" },
		{ "Comment", "/**\n\x09 * The current number of processed frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImportedSoundWave.h" },
		{ "ToolTip", "The current number of processed frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_CurrentNumOfFrames = { "CurrentNumOfFrames", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UImportedSoundWave, CurrentNumOfFrames), METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_CurrentNumOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_CurrentNumOfFrames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_SamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnAudioPlaybackFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_OnGeneratePCMData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportedSoundWave_Statics::NewProp_CurrentNumOfFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportedSoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportedSoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams = {
		&UImportedSoundWave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportedSoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportedSoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImportedSoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImportedSoundWave, 3428536730);
	template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<UImportedSoundWave>()
	{
		return UImportedSoundWave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImportedSoundWave(Z_Construct_UClass_UImportedSoundWave, &UImportedSoundWave::StaticClass, TEXT("/Script/RuntimeAudioImporter"), TEXT("UImportedSoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportedSoundWave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
