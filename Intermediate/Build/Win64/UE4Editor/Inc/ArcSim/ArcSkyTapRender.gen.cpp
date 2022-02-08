// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/NoteRender/ArcSkyTapRender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcSkyTapRender() {}
// Cross Module References
	ARCSIM_API UClass* Z_Construct_UClass_AArcSkyTapRender_NoRegister();
	ARCSIM_API UClass* Z_Construct_UClass_AArcSkyTapRender();
	ARCSIM_API UClass* Z_Construct_UClass_AArcNoteRender();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AArcSkyTapRender::StaticRegisterNativesAArcSkyTapRender()
	{
	}
	UClass* Z_Construct_UClass_AArcSkyTapRender_NoRegister()
	{
		return AArcSkyTapRender::StaticClass();
	}
	struct Z_Construct_UClass_AArcSkyTapRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcSkyTapRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArcNoteRender,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyTapRender_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NoteRender/ArcSkyTapRender.h" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyTapRender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyTapRender_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyTapRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyTapRender_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyTapRender, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyTapRender_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyTapRender_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcSkyTapRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyTapRender_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcSkyTapRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcSkyTapRender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcSkyTapRender_Statics::ClassParams = {
		&AArcSkyTapRender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArcSkyTapRender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyTapRender_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcSkyTapRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyTapRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcSkyTapRender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcSkyTapRender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcSkyTapRender, 1287513138);
	template<> ARCSIM_API UClass* StaticClass<AArcSkyTapRender>()
	{
		return AArcSkyTapRender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcSkyTapRender(Z_Construct_UClass_AArcSkyTapRender, &AArcSkyTapRender::StaticClass, TEXT("/Script/ArcSim"), TEXT("AArcSkyTapRender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcSkyTapRender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
