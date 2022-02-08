// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/NoteRender/ArcSkyArcRender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcSkyArcRender() {}
// Cross Module References
	ARCSIM_API UClass* Z_Construct_UClass_AArcSkyArcRender_NoRegister();
	ARCSIM_API UClass* Z_Construct_UClass_AArcSkyArcRender();
	ARCSIM_API UClass* Z_Construct_UClass_AArcNoteRender();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ARCSIM_API UEnum* Z_Construct_UEnum_ArcSim_EArcLineType();
	ARCSIM_API UEnum* Z_Construct_UEnum_ArcSim_EArcColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void AArcSkyArcRender::StaticRegisterNativesAArcSkyArcRender()
	{
	}
	UClass* Z_Construct_UClass_AArcSkyArcRender_NoRegister()
	{
		return AArcSkyArcRender::StaticClass();
	}
	struct Z_Construct_UClass_AArcSkyArcRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeVoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SizeVoid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Color_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHead_MetaData[];
#endif
		static void NewProp_IsHead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBaseBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBaseBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBaseRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBaseRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBaseGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBaseGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBaseVoid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBaseVoid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapRelativePos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapRelativePos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrOverlapSeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrOverlapSeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapMaterialBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterialBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMaterialBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowMaterialBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcSkyArcRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArcNoteRender,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoteRender/ArcSkyArcRender.h" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapSize_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapSize = { "CapSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeColor_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeColor = { "SizeColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, SizeColor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeVoid_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeVoid = { "SizeVoid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, SizeVoid), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeVoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeVoid_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ArcSkyArcRender" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, Type), Z_Construct_UEnum_ArcSim_EArcLineType, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ArcSkyArcRender" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, Color), Z_Construct_UEnum_ArcSim_EArcColor, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	void Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead_SetBit(void* Obj)
	{
		((AArcSkyArcRender*)Obj)->IsHead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead = { "IsHead", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArcSkyArcRender), &Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseBlue_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseBlue = { "MaterialBaseBlue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, MaterialBaseBlue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseRed_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseRed = { "MaterialBaseRed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, MaterialBaseRed), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseGreen_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseGreen = { "MaterialBaseGreen", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, MaterialBaseGreen), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseVoid_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseVoid = { "MaterialBaseVoid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, MaterialBaseVoid), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseVoid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseVoid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapRelativePos_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapRelativePos = { "CapRelativePos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapRelativePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapRelativePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapRelativePos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapPos_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapPos = { "CapPos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CurrOverlapSeg_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CurrOverlapSeg = { "CurrOverlapSeg", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CurrOverlapSeg), METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CurrOverlapSeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CurrOverlapSeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMesh = { "CapMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterialBase_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterialBase = { "CapMaterialBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapMaterialBase), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterialBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterialBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterial_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, CapMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMesh = { "ShadowMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, ShadowMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterialBase_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterialBase = { "ShadowMaterialBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, ShadowMaterialBase), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterialBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterialBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterial_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcSkyArcRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterial = { "ShadowMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcSkyArcRender, ShadowMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcSkyArcRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_SizeVoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_IsHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_MaterialBaseVoid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapRelativePos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CurrOverlapSeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterialBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_CapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterialBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcSkyArcRender_Statics::NewProp_ShadowMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcSkyArcRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcSkyArcRender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcSkyArcRender_Statics::ClassParams = {
		&AArcSkyArcRender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArcSkyArcRender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcSkyArcRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcSkyArcRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcSkyArcRender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcSkyArcRender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcSkyArcRender, 381747079);
	template<> ARCSIM_API UClass* StaticClass<AArcSkyArcRender>()
	{
		return AArcSkyArcRender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcSkyArcRender(Z_Construct_UClass_AArcSkyArcRender, &AArcSkyArcRender::StaticClass, TEXT("/Script/ArcSim"), TEXT("AArcSkyArcRender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcSkyArcRender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
