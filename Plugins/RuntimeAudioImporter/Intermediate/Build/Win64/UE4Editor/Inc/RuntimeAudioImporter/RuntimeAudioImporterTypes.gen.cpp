// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporter/Public/RuntimeAudioImporterTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeAudioImporterTypes() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporter();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat();
	RUNTIMEAUDIOIMPORTER_API UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus();
// End Cross Module References
	static UEnum* ERAWAudioFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ERAWAudioFormat"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERAWAudioFormat>()
	{
		return ERAWAudioFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERAWAudioFormat(ERAWAudioFormat_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("ERAWAudioFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat_Hash() { return 3377926002U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERAWAudioFormat"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_ERAWAudioFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERAWAudioFormat::Int16", (int64)ERAWAudioFormat::Int16 },
				{ "ERAWAudioFormat::Int32", (int64)ERAWAudioFormat::Int32 },
				{ "ERAWAudioFormat::UInt8", (int64)ERAWAudioFormat::UInt8 },
				{ "ERAWAudioFormat::Float32", (int64)ERAWAudioFormat::Float32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Float32.DisplayName", "32-bit float" },
				{ "Float32.Name", "ERAWAudioFormat::Float32" },
				{ "Int16.DisplayName", "Signed 16-bit PCM" },
				{ "Int16.Name", "ERAWAudioFormat::Int16" },
				{ "Int32.DisplayName", "Signed 32-bit PCM" },
				{ "Int32.Name", "ERAWAudioFormat::Int32" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "UInt8.DisplayName", "Unsigned 8-bit PCM" },
				{ "UInt8.Name", "ERAWAudioFormat::UInt8" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"ERAWAudioFormat",
				"ERAWAudioFormat",
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
	static UEnum* EAudioFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("EAudioFormat"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<EAudioFormat>()
	{
		return EAudioFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAudioFormat(EAudioFormat_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("EAudioFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat_Hash() { return 121636748U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAudioFormat"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_EAudioFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAudioFormat::Auto", (int64)EAudioFormat::Auto },
				{ "EAudioFormat::Mp3", (int64)EAudioFormat::Mp3 },
				{ "EAudioFormat::Wav", (int64)EAudioFormat::Wav },
				{ "EAudioFormat::Flac", (int64)EAudioFormat::Flac },
				{ "EAudioFormat::OggVorbis", (int64)EAudioFormat::OggVorbis },
				{ "EAudioFormat::Invalid", (int64)EAudioFormat::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "/** Determine format automatically */" },
				{ "Auto.DisplayName", "Determine format automatically" },
				{ "Auto.Name", "EAudioFormat::Auto" },
				{ "Auto.ToolTip", "Determine format automatically" },
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Comment", "/** Possible audio formats (extensions) */" },
				{ "Flac.Comment", "/** FLAC format */" },
				{ "Flac.DisplayName", "flac" },
				{ "Flac.Name", "EAudioFormat::Flac" },
				{ "Flac.ToolTip", "FLAC format" },
				{ "Invalid.Comment", "/** Invalid format */" },
				{ "Invalid.DisplayName", "invalid (not defined format, CPP use only)" },
				{ "Invalid.Hidden", "" },
				{ "Invalid.Name", "EAudioFormat::Invalid" },
				{ "Invalid.ToolTip", "Invalid format" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "Mp3.Comment", "/** MP3 format */" },
				{ "Mp3.DisplayName", "mp3" },
				{ "Mp3.Name", "EAudioFormat::Mp3" },
				{ "Mp3.ToolTip", "MP3 format" },
				{ "OggVorbis.Comment", "/** OGG Vorbis format */" },
				{ "OggVorbis.DisplayName", "ogg vorbis" },
				{ "OggVorbis.Name", "EAudioFormat::OggVorbis" },
				{ "OggVorbis.ToolTip", "OGG Vorbis format" },
				{ "ToolTip", "Possible audio formats (extensions)" },
				{ "Wav.Comment", "/** WAV format */" },
				{ "Wav.DisplayName", "wav" },
				{ "Wav.Name", "EAudioFormat::Wav" },
				{ "Wav.ToolTip", "WAV format" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"EAudioFormat",
				"EAudioFormat",
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
	static UEnum* ETranscodingStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus, Z_Construct_UPackage__Script_RuntimeAudioImporter(), TEXT("ETranscodingStatus"));
		}
		return Singleton;
	}
	template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ETranscodingStatus>()
	{
		return ETranscodingStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETranscodingStatus(ETranscodingStatus_StaticEnum, TEXT("/Script/RuntimeAudioImporter"), TEXT("ETranscodingStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus_Hash() { return 3088311911U; }
	UEnum* Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeAudioImporter();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETranscodingStatus"), 0, Get_Z_Construct_UEnum_RuntimeAudioImporter_ETranscodingStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETranscodingStatus::SuccessfulImport", (int64)ETranscodingStatus::SuccessfulImport },
				{ "ETranscodingStatus::FailedToReadAudioDataArray", (int64)ETranscodingStatus::FailedToReadAudioDataArray },
				{ "ETranscodingStatus::SoundWaveDeclarationError", (int64)ETranscodingStatus::SoundWaveDeclarationError },
				{ "ETranscodingStatus::InvalidAudioFormat", (int64)ETranscodingStatus::InvalidAudioFormat },
				{ "ETranscodingStatus::AudioDoesNotExist", (int64)ETranscodingStatus::AudioDoesNotExist },
				{ "ETranscodingStatus::LoadFileToArrayError", (int64)ETranscodingStatus::LoadFileToArrayError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AudioDoesNotExist.Comment", "/** The audio file does not exist */" },
				{ "AudioDoesNotExist.DisplayName", "Audio does not exist" },
				{ "AudioDoesNotExist.Name", "ETranscodingStatus::AudioDoesNotExist" },
				{ "AudioDoesNotExist.ToolTip", "The audio file does not exist" },
				{ "BlueprintType", "true" },
				{ "Category", "Runtime Audio Importer" },
				{ "Comment", "/** Possible audio importing results */" },
				{ "FailedToReadAudioDataArray.Comment", "/** Failed to read Audio Data Array */" },
				{ "FailedToReadAudioDataArray.DisplayName", "Failed to read Audio Data Array" },
				{ "FailedToReadAudioDataArray.Name", "ETranscodingStatus::FailedToReadAudioDataArray" },
				{ "FailedToReadAudioDataArray.ToolTip", "Failed to read Audio Data Array" },
				{ "InvalidAudioFormat.Comment", "/** Invalid audio format (Can't determine the format of the audio file) */" },
				{ "InvalidAudioFormat.DisplayName", "Invalid audio format" },
				{ "InvalidAudioFormat.Name", "ETranscodingStatus::InvalidAudioFormat" },
				{ "InvalidAudioFormat.ToolTip", "Invalid audio format (Can't determine the format of the audio file)" },
				{ "LoadFileToArrayError.Comment", "/** Load file to array error */" },
				{ "LoadFileToArrayError.DisplayName", "Load file to array error" },
				{ "LoadFileToArrayError.Name", "ETranscodingStatus::LoadFileToArrayError" },
				{ "LoadFileToArrayError.ToolTip", "Load file to array error" },
				{ "ModuleRelativePath", "Public/RuntimeAudioImporterTypes.h" },
				{ "SoundWaveDeclarationError.Comment", "/** SoundWave declaration error */" },
				{ "SoundWaveDeclarationError.DisplayName", "SoundWave declaration error" },
				{ "SoundWaveDeclarationError.Name", "ETranscodingStatus::SoundWaveDeclarationError" },
				{ "SoundWaveDeclarationError.ToolTip", "SoundWave declaration error" },
				{ "SuccessfulImport.Comment", "/** Successful import */" },
				{ "SuccessfulImport.DisplayName", "Success" },
				{ "SuccessfulImport.Name", "ETranscodingStatus::SuccessfulImport" },
				{ "SuccessfulImport.ToolTip", "Successful import" },
				{ "ToolTip", "Possible audio importing results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeAudioImporter,
				nullptr,
				"ETranscodingStatus",
				"ETranscodingStatus",
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
