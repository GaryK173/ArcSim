// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeAudioImporterEditor/Public/PreImportedSoundFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreImportedSoundFactory() {}
// Cross Module References
	RUNTIMEAUDIOIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPreImportedSoundFactory_NoRegister();
	RUNTIMEAUDIOIMPORTEREDITOR_API UClass* Z_Construct_UClass_UPreImportedSoundFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RuntimeAudioImporterEditor();
// End Cross Module References
	void UPreImportedSoundFactory::StaticRegisterNativesUPreImportedSoundFactory()
	{
	}
	UClass* Z_Construct_UClass_UPreImportedSoundFactory_NoRegister()
	{
		return UPreImportedSoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPreImportedSoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreImportedSoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeAudioImporterEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreImportedSoundFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for pre-importing audio files. Only MP3 is available for pre-import because it takes up the least amount of memory.\n */" },
		{ "IncludePath", "PreImportedSoundFactory.h" },
		{ "ModuleRelativePath", "Public/PreImportedSoundFactory.h" },
		{ "ToolTip", "Factory for pre-importing audio files. Only MP3 is available for pre-import because it takes up the least amount of memory." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreImportedSoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreImportedSoundFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPreImportedSoundFactory_Statics::ClassParams = {
		&UPreImportedSoundFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreImportedSoundFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreImportedSoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreImportedSoundFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPreImportedSoundFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPreImportedSoundFactory, 374301774);
	template<> RUNTIMEAUDIOIMPORTEREDITOR_API UClass* StaticClass<UPreImportedSoundFactory>()
	{
		return UPreImportedSoundFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPreImportedSoundFactory(Z_Construct_UClass_UPreImportedSoundFactory, &UPreImportedSoundFactory::StaticClass, TEXT("/Script/RuntimeAudioImporterEditor"), TEXT("UPreImportedSoundFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreImportedSoundFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
