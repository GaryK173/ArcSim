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
#ifdef ARCSIM_ArcConductor_generated_h
#error "ArcConductor.generated.h already included, missing '#pragma once' in ArcConductor.h"
#endif
#define ARCSIM_ArcConductor_generated_h

#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_23_DELEGATE \
struct _Script_ArcSim_eventOnSubscribeSoundWave_Parms \
{ \
	URuntimeAudioImporterLibrary* ImporterRef; \
	UImportedSoundWave* SoundWaveRef; \
	ETranscodingStatus Status; \
}; \
static inline void FOnSubscribeSoundWave_DelegateWrapper(const FScriptDelegate& OnSubscribeSoundWave, URuntimeAudioImporterLibrary* ImporterRef, UImportedSoundWave* SoundWaveRef, ETranscodingStatus const& Status) \
{ \
	_Script_ArcSim_eventOnSubscribeSoundWave_Parms Parms; \
	Parms.ImporterRef=ImporterRef; \
	Parms.SoundWaveRef=SoundWaveRef; \
	Parms.Status=Status; \
	OnSubscribeSoundWave.ProcessDelegate<UObject>(&Parms); \
}


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_SPARSE_DATA
#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSubscribeSoundWave); \
	DECLARE_FUNCTION(execUpdateCountdown);


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSubscribeSoundWave); \
	DECLARE_FUNCTION(execUpdateCountdown);


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArcConductor(); \
	friend struct Z_Construct_UClass_AArcConductor_Statics; \
public: \
	DECLARE_CLASS(AArcConductor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcSim"), NO_API) \
	DECLARE_SERIALIZER(AArcConductor)


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAArcConductor(); \
	friend struct Z_Construct_UClass_AArcConductor_Statics; \
public: \
	DECLARE_CLASS(AArcConductor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ArcSim"), NO_API) \
	DECLARE_SERIALIZER(AArcConductor)


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArcConductor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArcConductor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcConductor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcConductor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcConductor(AArcConductor&&); \
	NO_API AArcConductor(const AArcConductor&); \
public:


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcConductor(AArcConductor&&); \
	NO_API AArcConductor(const AArcConductor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcConductor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcConductor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArcConductor)


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_PRIVATE_PROPERTY_OFFSET
#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_26_PROLOG
#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_PRIVATE_PROPERTY_OFFSET \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_SPARSE_DATA \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_RPC_WRAPPERS \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_INCLASS \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_PRIVATE_PROPERTY_OFFSET \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_SPARSE_DATA \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_INCLASS_NO_PURE_DECLS \
	ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCSIM_API UClass* StaticClass<class AArcConductor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcSim_Source_ArcSim_GameplayManager_ArcConductor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
