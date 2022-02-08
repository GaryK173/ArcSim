// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterLibrary() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UImportedSoundWave_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus();
	RUNTIMEAUDIOIMPORTER_API UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat();
	RUNTIMEAUDIOIMPORTER_API UClass* Z_Construct_UClass_UPreImportedSoundAsset_NoRegister();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms
		{
			URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef;
			UImportedSoundWave* SoundWaveRef;
			ETranscodingStatus Status;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeAudioImporterObjectRef;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_RuntimeAudioImporterObjectRef = { "RuntimeAudioImporterObjectRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, RuntimeAudioImporterObjectRef), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_SoundWaveRef = { "SoundWaveRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, SoundWaveRef), Z_Construct_UClass_UImportedSoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms, Status), Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_RuntimeAudioImporterObjectRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_SoundWaveRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::NewProp_Status,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast to get the audio importer result */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Delegate broadcast to get the audio importer result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics
	{
		struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms
		{
			int32 Percentage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms, Percentage), METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate broadcast to get the audio importer progress */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Delegate broadcast to get the audio importer progress" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter, nullptr, "OnAudioImporterProgress__DelegateSignature", nullptr, nullptr, sizeof(_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execGetAudioFormat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAudioFormat*)Z_Param__Result=URuntimeAudioImporterLibrary::GetAudioFormat(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execTranscodeRAWDataFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePathFrom);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_FormatFrom);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePathTo);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_FormatTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TranscodeRAWDataFromFile(Z_Param_FilePathFrom,ERAWAudioFormat(Z_Param_FormatFrom),Z_Param_FilePathTo,ERAWAudioFormat(Z_Param_FormatTo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execTranscodeRAWDataFromBuffer)
	{
		P_GET_TARRAY(uint8,Z_Param_RAWData_From);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_FormatFrom);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_RAWData_To);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_FormatTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TranscodeRAWDataFromBuffer(Z_Param_RAWData_From,ERAWAudioFormat(Z_Param_FormatFrom),Z_Param_Out_RAWData_To,ERAWAudioFormat(Z_Param_FormatTo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer)
	{
		P_GET_TARRAY(uint8,Z_Param_RAWBuffer);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_Format);
		P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromRAWBuffer(Z_Param_RAWBuffer,ERAWAudioFormat(Z_Param_Format),Z_Param_SampleRate,Z_Param_NumOfChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromRAWFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_ENUM(ERAWAudioFormat,Z_Param_Format);
		P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromRAWFile(Z_Param_FilePath,ERAWAudioFormat(Z_Param_Format),Z_Param_SampleRate,Z_Param_NumOfChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromBuffer_BP)
	{
		P_GET_TARRAY(uint8,Z_Param_AudioDataBuffer);
		P_GET_ENUM(EAudioFormat,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromBuffer_BP(Z_Param_AudioDataBuffer,EAudioFormat(Z_Param_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound)
	{
		P_GET_OBJECT(UPreImportedSoundAsset,Z_Param_PreImportedSoundAssetRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromPreImportedSound(Z_Param_PreImportedSoundAssetRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execImportAudioFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_ENUM(EAudioFormat,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAudioFromFile(Z_Param_FilePath,EAudioFormat(Z_Param_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeAudioImporterLibrary**)Z_Param__Result=URuntimeAudioImporterLibrary::CreateRuntimeAudioImporter();
		P_NATIVE_END;
	}
	void URuntimeAudioImporterLibrary::StaticRegisterNativesURuntimeAudioImporterLibrary()
	{
		UClass* Class = URuntimeAudioImporterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateRuntimeAudioImporter", &URuntimeAudioImporterLibrary::execCreateRuntimeAudioImporter },
			{ "GetAudioFormat", &URuntimeAudioImporterLibrary::execGetAudioFormat },
			{ "ImportAudioFromBuffer_BP", &URuntimeAudioImporterLibrary::execImportAudioFromBuffer_BP },
			{ "ImportAudioFromFile", &URuntimeAudioImporterLibrary::execImportAudioFromFile },
			{ "ImportAudioFromPreImportedSound", &URuntimeAudioImporterLibrary::execImportAudioFromPreImportedSound },
			{ "ImportAudioFromRAWBuffer", &URuntimeAudioImporterLibrary::execImportAudioFromRAWBuffer },
			{ "ImportAudioFromRAWFile", &URuntimeAudioImporterLibrary::execImportAudioFromRAWFile },
			{ "TranscodeRAWDataFromBuffer", &URuntimeAudioImporterLibrary::execTranscodeRAWDataFromBuffer },
			{ "TranscodeRAWDataFromFile", &URuntimeAudioImporterLibrary::execTranscodeRAWDataFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics
	{
		struct RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms
		{
			URuntimeAudioImporterLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms, ReturnValue), Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/**\n\x09 * Instantiates a RuntimeAudioImporter object\n\x09 *\n\x09 * @return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates to know when it is in the process of importing and imported\n\x09 */" },
		{ "Keywords", "Create, Audio, Runtime, MP3, FLAC, WAV, OGG, VORBIS, OPUS, IMPORT" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Instantiates a RuntimeAudioImporter object\n\n@return The RuntimeAudioImporter object. Bind to it's OnProgress and OnResult delegates to know when it is in the process of importing and imported" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "CreateRuntimeAudioImporter", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventCreateRuntimeAudioImporter_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics
	{
		struct RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms
		{
			FString FilePath;
			EAudioFormat ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms, ReturnValue), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Utility" },
		{ "Comment", "/**\n\x09 * Get audio format by extension\n\x09 *\n\x09 * @param FilePath File path where to find the format (by extension)\n\x09 * @return Returns the found audio format (e.g. mp3. flac, etc) by AudioFormat Enum\n\x09 */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Get audio format by extension\n\n@param FilePath File path where to find the format (by extension)\n@return Returns the found audio format (e.g. mp3. flac, etc) by AudioFormat Enum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "GetAudioFormat", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventGetAudioFormat_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_BP_Parms
		{
			TArray<uint8> AudioDataBuffer;
			EAudioFormat Format;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioDataBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioDataBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_AudioDataBuffer_Inner = { "AudioDataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_AudioDataBuffer = { "AudioDataBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_BP_Parms, AudioDataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_BP_Parms, Format), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_AudioDataBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_AudioDataBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::NewProp_Format,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Advanced" },
		{ "Comment", "/**\n\x09 * Import audio from buffer\n\x09 *\n\x09 * @param AudioDataBuffer Buffer of the audio data\n\x09 * @param Format Audio file format (extension)\n\x09 */" },
		{ "DisplayName", "Import Audio From Buffer" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from buffer\n\n@param AudioDataBuffer Buffer of the audio data\n@param Format Audio file format (extension)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromBuffer_BP", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromBuffer_BP_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms
		{
			FString FilePath;
			EAudioFormat Format;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms, Format), Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::NewProp_Format,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from file\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param Format Audio file format (extension)\n\x09 */" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3, FLAC, WAV" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from file\n\n@param FilePath Path to the audio file to import\n@param Format Audio file format (extension)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms
		{
			UPreImportedSoundAsset* PreImportedSoundAssetRef;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreImportedSoundAssetRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAssetRef = { "PreImportedSoundAssetRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms, PreImportedSoundAssetRef), Z_Construct_UClass_UPreImportedSoundAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::NewProp_PreImportedSoundAssetRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio file from the pre-imported sound asset\n\x09 *\n\x09 * @param PreImportedSoundAssetRef PreImportedSoundAsset object reference. Should contain \"BaseAudioDataArray\" buffer\n\x09 */" },
		{ "Keywords", "Importer, Transcoder, Converter, Runtime, MP3" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio file from the pre-imported sound asset\n\n@param PreImportedSoundAssetRef PreImportedSoundAsset object reference. Should contain \"BaseAudioDataArray\" buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromPreImportedSound", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromPreImportedSound_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms
		{
			TArray<uint8> RAWBuffer;
			ERAWAudioFormat Format;
			int32 SampleRate;
			int32 NumOfChannels;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWBuffer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner = { "RAWBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer = { "RAWBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, RAWBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, Format), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, SampleRate), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms, NumOfChannels), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_RAWBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::NewProp_NumOfChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from RAW buffer. Audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param RAWBuffer RAW audio buffer\n\x09 * @param Format RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from RAW buffer. Audio data must not have headers and must be uncompressed\n\n@param RAWBuffer RAW audio buffer\n@param Format RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromRAWBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms
		{
			FString FilePath;
			ERAWAudioFormat Format;
			int32 SampleRate;
			int32 NumOfChannels;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, Format), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, SampleRate), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels = { "NumOfChannels", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms, NumOfChannels), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_SampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::NewProp_NumOfChannels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Import" },
		{ "Comment", "/**\n\x09 * Import audio from RAW file. Audio data must not have headers and must be uncompressed\n\x09 *\n\x09 * @param FilePath Path to the audio file to import\n\x09 * @param Format RAW audio format\n\x09 * @param SampleRate The number of samples per second\n\x09 * @param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)\n\x09 */" },
		{ "CPP_Default_NumOfChannels", "1" },
		{ "CPP_Default_SampleRate", "44100" },
		{ "DisplayName", "Import Audio From RAW File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Import audio from RAW file. Audio data must not have headers and must be uncompressed\n\n@param FilePath Path to the audio file to import\n@param Format RAW audio format\n@param SampleRate The number of samples per second\n@param NumOfChannels The number of channels (1 for mono, 2 for stereo, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "ImportAudioFromRAWFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventImportAudioFromRAWFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics
	{
		struct RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms
		{
			TArray<uint8> RAWData_From;
			ERAWAudioFormat FormatFrom;
			TArray<uint8> RAWData_To;
			ERAWAudioFormat FormatTo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWData_From_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWData_From;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormatFrom_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FormatFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RAWData_To_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RAWData_To;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormatTo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FormatTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_From_Inner = { "RAWData_From", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_From = { "RAWData_From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, RAWData_From), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatFrom = { "FormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, FormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_To_Inner = { "RAWData_To", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_To = { "RAWData_To", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, RAWData_To), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatTo = { "FormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms, FormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_From_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_To_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_RAWData_To,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::NewProp_FormatTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Transcode" },
		{ "Comment", "/**\n\x09 * Transcoding one RAW Data format to another\n\x09 *\n\x09 * @param RAWData_From RAW data for transcoding\n\x09 * @param FormatFrom Original format\n\x09 * @param RAWData_To Transcoded RAW data with the specified format\n\x09 * @param FormatTo Required format\n\x09 */" },
		{ "DisplayName", "Transcode RAW Data From Buffer" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Transcoding one RAW Data format to another\n\n@param RAWData_From RAW data for transcoding\n@param FormatFrom Original format\n@param RAWData_To Transcoded RAW data with the specified format\n@param FormatTo Required format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "TranscodeRAWDataFromBuffer", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromBuffer_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics
	{
		struct RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms
		{
			FString FilePathFrom;
			ERAWAudioFormat FormatFrom;
			FString FilePathTo;
			ERAWAudioFormat FormatTo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathFrom;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormatFrom_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FormatFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePathTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePathTo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FormatTo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FormatTo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom = { "FilePathFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FilePathFrom), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatFrom_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatFrom = { "FormatFrom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FormatFrom), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo = { "FilePathTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FilePathTo), METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatTo = { "FormatTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms, FormatTo), Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms), &Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatFrom_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FilePathTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatTo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_FormatTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Runtime Audio Importer|Transcode" },
		{ "Comment", "/**\n\x09 * Transcoding one RAW Data format to another\n\x09 *\n\x09 * @param FilePathFrom Path to file with RAW data for transcoding\n\x09 * @param FormatFrom Original format\n\x09 * @param FilePathTo File path for saving RAW data\n\x09 * @param FormatTo Required format\n\x09 */" },
		{ "DisplayName", "Transcode RAW Data From File" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Transcoding one RAW Data format to another\n\n@param FilePathFrom Path to file with RAW data for transcoding\n@param FormatFrom Original format\n@param FilePathTo File path for saving RAW data\n@param FormatTo Required format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeAudioImporterLibrary, nullptr, "TranscodeRAWDataFromFile", nullptr, nullptr, sizeof(RuntimeAudioImporterLibrary_eventTranscodeRAWDataFromFile_Parms), Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary_NoRegister()
	{
		return URuntimeAudioImporterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_CreateRuntimeAudioImporter, "CreateRuntimeAudioImporter" }, // 872203241
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_GetAudioFormat, "GetAudioFormat" }, // 1194127193
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromBuffer_BP, "ImportAudioFromBuffer_BP" }, // 1205069838
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromFile, "ImportAudioFromFile" }, // 721925060
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromPreImportedSound, "ImportAudioFromPreImportedSound" }, // 3803593530
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWBuffer, "ImportAudioFromRAWBuffer" }, // 1726236794
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_ImportAudioFromRAWFile, "ImportAudioFromRAWFile" }, // 3175789074
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromBuffer, "TranscodeRAWDataFromBuffer" }, // 3064524246
		{ &Z_Construct_UFunction_URuntimeAudioImporterLibrary_TranscodeRAWDataFromFile, "TranscodeRAWDataFromFile" }, // 1061658295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/**\n * Runtime Audio Importer object\n * Designed primarily for importing audio files in real time\n */" },
		{ "IncludePath", "RuntimeAudioImporterLibrary.h" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Runtime Audio Importer object\nDesigned primarily for importing audio files in real time" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData[] = {
		{ "Category", "Runtime Audio Importer|Delegates" },
		{ "Comment", "/** Bind to know when the transcoding is on progress */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Bind to know when the transcoding is on progress" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnProgress), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterProgress__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData[] = {
		{ "Category", "Runtime Audio Importer" },
		{ "Comment", "/** Bind to know when the transcoding is complete (even if it fails) */" },
		{ "ModuleRelativePath", "Public/RuntimeAudioImporterLibrary.h" },
		{ "ToolTip", "Bind to know when the transcoding is complete (even if it fails)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult = { "OnResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeAudioImporterLibrary, OnResult), Z_Construct_UDelegateFunction_RuntimeAudioImporter_OnAudioImporterResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::NewProp_OnResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeAudioImporterLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams = {
		&URuntimeAudioImporterLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeAudioImporterLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeAudioImporterLibrary, 1037316738);
	template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<URuntimeAudioImporterLibrary>()
	{
		return URuntimeAudioImporterLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeAudioImporterLibrary(Z_Construct_UClass_URuntimeAudioImporterLibrary, &URuntimeAudioImporterLibrary::StaticClass, TEXT("/Script/RuntimeAudioImporter"), TEXT("URuntimeAudioImporterLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeAudioImporterLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
