// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterTypes_generated_h
#error "RuntimeAudioImporterTypes.generated.h already included, missing '#pragma once' in RuntimeAudioImporterTypes.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterTypes_h


#define FOREACH_ENUM_ERAWAUDIOFORMAT(op) \
	op(ERAWAudioFormat::Int16) \
	op(ERAWAudioFormat::Int32) \
	op(ERAWAudioFormat::UInt8) \
	op(ERAWAudioFormat::Float32) 

enum class ERAWAudioFormat : uint8;
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ERAWAudioFormat>();

#define FOREACH_ENUM_EAUDIOFORMAT(op) \
	op(EAudioFormat::Auto) \
	op(EAudioFormat::Mp3) \
	op(EAudioFormat::Wav) \
	op(EAudioFormat::Flac) \
	op(EAudioFormat::OggVorbis) \
	op(EAudioFormat::Invalid) 

enum class EAudioFormat : uint8;
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<EAudioFormat>();

#define FOREACH_ENUM_ETRANSCODINGSTATUS(op) \
	op(ETranscodingStatus::SuccessfulImport) \
	op(ETranscodingStatus::FailedToReadAudioDataArray) \
	op(ETranscodingStatus::SoundWaveDeclarationError) \
	op(ETranscodingStatus::InvalidAudioFormat) \
	op(ETranscodingStatus::AudioDoesNotExist) \
	op(ETranscodingStatus::LoadFileToArrayError) 

enum class ETranscodingStatus : uint8;
template<> RUNTIMEAUDIOIMPORTER_API UEnum* StaticEnum<ETranscodingStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
