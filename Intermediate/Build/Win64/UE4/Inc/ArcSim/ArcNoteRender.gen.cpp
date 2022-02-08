// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArcSim/NoteRender/ArcNoteRender.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcNoteRender() {}
// Cross Module References
	ARCSIM_API UClass* Z_Construct_UClass_AArcNoteRender_NoRegister();
	ARCSIM_API UClass* Z_Construct_UClass_AArcNoteRender();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArcSim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ARCSIM_API UClass* Z_Construct_UClass_AArcConductor_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void AArcNoteRender::StaticRegisterNativesAArcNoteRender()
	{
	}
	UClass* Z_Construct_UClass_AArcNoteRender_NoRegister()
	{
		return AArcNoteRender::StaticClass();
	}
	struct Z_Construct_UClass_AArcNoteRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupInput_MetaData[];
#endif
		static void NewProp_GroupInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GroupInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noteID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_noteID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static void NewProp_Triggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Triggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conductor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conductor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcNoteRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArcSim,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoteRender/ArcNoteRender.h" },
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	void Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput_SetBit(void* Obj)
	{
		((AArcNoteRender*)Obj)->GroupInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput = { "GroupInput", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArcNoteRender), &Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_noteID_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_noteID = { "noteID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, noteID), METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_noteID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_noteID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupID_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupID = { "GroupID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, GroupID), METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosStart_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosStart = { "PosStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, PosStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosEnd_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosEnd = { "PosEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, PosEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeStart_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeStart = { "TimeStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, TimeStart), METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeEnd_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, TimeEnd), METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	void Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered_SetBit(void* Obj)
	{
		((AArcNoteRender*)Obj)->Triggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArcNoteRender), &Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Conductor_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Conductor = { "Conductor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, Conductor), Z_Construct_UClass_AArcConductor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Conductor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Conductor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_MaterialBase_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_MaterialBase = { "MaterialBase", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, MaterialBase), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_MaterialBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_MaterialBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "NoteRender/ArcNoteRender.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcNoteRender, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcNoteRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_noteID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_GroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_PosEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_TimeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Triggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Conductor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_MaterialBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcNoteRender_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcNoteRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcNoteRender>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcNoteRender_Statics::ClassParams = {
		&AArcNoteRender::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArcNoteRender_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArcNoteRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcNoteRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcNoteRender()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcNoteRender_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcNoteRender, 3527912250);
	template<> ARCSIM_API UClass* StaticClass<AArcNoteRender>()
	{
		return AArcNoteRender::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcNoteRender(Z_Construct_UClass_AArcNoteRender, &AArcNoteRender::StaticClass, TEXT("/Script/ArcSim"), TEXT("AArcNoteRender"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcNoteRender);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
