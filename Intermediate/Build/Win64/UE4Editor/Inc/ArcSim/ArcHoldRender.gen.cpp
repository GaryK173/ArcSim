// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/NoteRender/ArcHoldRender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcHoldRender() {}
// Cross Module References
	ARCSIM_API UClass* Z_Construct_UClass_AArcHoldRender_NoRegister();
	ARCSIM_API UClass* Z_Construct_UClass_AArcHoldRender();
	ARCSIM_API UClass* Z_Construct_UClass_AArcNoteRender();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AArcHoldRender::StaticRegisterNativesAArcHoldRender()
	{
	}
	UClass* Z_Construct_UClass_AArcHoldRender_NoRegister()
	{
		return AArcHoldRender::StaticClass();
	}
	struct Z_Construct_UClass_AArcHoldRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcHoldRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArcNoteRender,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcHoldRender_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NoteRender/ArcHoldRender.h" },
		{ "ModuleRelativePath", "NoteRender/ArcHoldRender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcHoldRender_Statics::NewProp_TrackID_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcHoldRender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArcHoldRender_Statics::NewProp_TrackID = { "TrackID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcHoldRender, TrackID), METADATA_PARAMS(Z_Construct_UClass_AArcHoldRender_Statics::NewProp_TrackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcHoldRender_Statics::NewProp_TrackID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcHoldRender_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcHoldRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcHoldRender_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcHoldRender, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcHoldRender_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcHoldRender_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcHoldRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcHoldRender_Statics::NewProp_TrackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcHoldRender_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcHoldRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcHoldRender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcHoldRender_Statics::ClassParams = {
		&AArcHoldRender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArcHoldRender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcHoldRender_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcHoldRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcHoldRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcHoldRender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcHoldRender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcHoldRender, 1240750104);
	template<> ARCSIM_API UClass* StaticClass<AArcHoldRender>()
	{
		return AArcHoldRender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcHoldRender(Z_Construct_UClass_AArcHoldRender, &AArcHoldRender::StaticClass, TEXT("/Script/ArcSim"), TEXT("AArcHoldRender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcHoldRender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
