// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeAudioImporterLibrary;
class UImportedSoundWave;
enum class ETranscodingStatus : uint8;
enum class EAudioFormat : uint8;
enum class ERAWAudioFormat : uint8;
class UPreImportedSoundAsset;
#ifdef RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h
#error "RuntimeAudioImporterLibrary.generated.h already included, missing '#pragma once' in RuntimeAudioImporterLibrary.h"
#endif
#define RUNTIMEAUDIOIMPORTER_RuntimeAudioImporterLibrary_generated_h

#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_16_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms \
{ \
	URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef; \
	UImportedSoundWave* SoundWaveRef; \
	ETranscodingStatus Status; \
}; \
static inline void FOnAudioImporterResult_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterResult, URuntimeAudioImporterLibrary* RuntimeAudioImporterObjectRef, UImportedSoundWave* SoundWaveRef, ETranscodingStatus const& Status) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioImporterResult_Parms Parms; \
	Parms.RuntimeAudioImporterObjectRef=RuntimeAudioImporterObjectRef; \
	Parms.SoundWaveRef=SoundWaveRef; \
	Parms.Status=Status; \
	OnAudioImporterResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_13_DELEGATE \
struct _Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms \
{ \
	int32 Percentage; \
}; \
static inline void FOnAudioImporterProgress_DelegateWrapper(const FMulticastScriptDelegate& OnAudioImporterProgress, const int32 Percentage) \
{ \
	_Script_RuntimeAudioImporter_eventOnAudioImporterProgress_Parms Parms; \
	Parms.Percentage=Percentage; \
	OnAudioImporterProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_SPARSE_DATA
#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer_BP); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAudioFormat); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromFile); \
	DECLARE_FUNCTION(execTranscodeRAWDataFromBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWBuffer); \
	DECLARE_FUNCTION(execImportAudioFromRAWFile); \
	DECLARE_FUNCTION(execImportAudioFromBuffer_BP); \
	DECLARE_FUNCTION(execImportAudioFromPreImportedSound); \
	DECLARE_FUNCTION(execImportAudioFromFile); \
	DECLARE_FUNCTION(execCreateRuntimeAudioImporter);


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAudioImporterLibrary(); \
	friend struct Z_Construct_UClass_URuntimeAudioImporterLibrary_Statics; \
public: \
	DECLARE_CLASS(URuntimeAudioImporterLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAudioImporter"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAudioImporterLibrary)


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public:


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAudioImporterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAudioImporterLibrary(URuntimeAudioImporterLibrary&&); \
	NO_API URuntimeAudioImporterLibrary(const URuntimeAudioImporterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAudioImporterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAudioImporterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAudioImporterLibrary)


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_PRIVATE_PROPERTY_OFFSET
#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_22_PROLOG
#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_SPARSE_DATA \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_RPC_WRAPPERS \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_INCLASS \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_PRIVATE_PROPERTY_OFFSET \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_SPARSE_DATA \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_INCLASS_NO_PURE_DECLS \
	ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEAUDIOIMPORTER_API UClass* StaticClass<class URuntimeAudioImporterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcSim_Plugins_RuntimeAudioImporter_Source_RuntimeAudioImporter_Public_RuntimeAudioImporterLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
