// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/enemy_spawner__pf839595025.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemy_spawner__pf839595025() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_spawner_C__pf839595025();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Aenemy_spawner_C__pf839595025::execbpf__spawnxenemy__pfT)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__enemyxtype__pfT);
		P_GET_OBJECT_REF(Aenemy_base_C__pf839595025,Z_Param_Out_bpp__spawnedxenemy__pfT);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__success__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__spawnxenemy__pfT(Z_Param_bpp__enemyxtype__pfT,Z_Param_Out_bpp__spawnedxenemy__pfT,Z_Param_Out_bpp__success__pf);
		P_NATIVE_END;
	}
	void Aenemy_spawner_C__pf839595025::StaticRegisterNativesAenemy_spawner_C__pf839595025()
	{
		UClass* Class = Aenemy_spawner_C__pf839595025::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "spawn enemy", &Aenemy_spawner_C__pf839595025::execbpf__spawnxenemy__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics
	{
		struct enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms
		{
			UClass* bpp__enemyxtype__pfT;
			Aenemy_base_C__pf839595025* bpp__spawnedxenemy__pfT;
			bool bpp__success__pf;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__enemyxtype__pfT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__spawnedxenemy__pfT;
		static void NewProp_bpp__success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__success__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__enemyxtype__pfT = { "bpp__enemyxtype__pfT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms, bpp__enemyxtype__pfT), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__spawnedxenemy__pfT = { "bpp__spawnedxenemy__pfT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms, bpp__spawnedxenemy__pfT), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__success__pf_SetBit(void* Obj)
	{
		((enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms*)Obj)->bpp__success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__success__pf = { "bpp__success__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms), &Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__success__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__enemyxtype__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__spawnedxenemy__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::NewProp_bpp__success__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "OverrideNativeName", "spawn enemy" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_spawner_C__pf839595025, nullptr, "spawn enemy", nullptr, nullptr, sizeof(enemy_spawner_C__pf839595025_eventbpf__spawnxenemy__pfT_Parms), Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_spawner_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "spawn enemy" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister()
	{
		return Aenemy_spawner_C__pf839595025::StaticClass();
	}
	struct Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Cube__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Cube__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__timer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__timer__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__enemylist__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__enemylist__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__enemylist__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__success__pf_MetaData[];
#endif
		static void NewProp_bpv__success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__success__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aenemy_spawner_C__pf839595025_bpf__spawnxenemy__pfT, "spawn enemy" }, // 3735371142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "enemy_spawner__pf839595025.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "enemy_spawner_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/enemy_spawner.enemy_spawner_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__Cube__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "OverrideNativeName", "Cube" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__Cube__pf = { "Cube", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_spawner_C__pf839595025, bpv__Cube__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__Cube__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__Cube__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_spawner_C__pf839595025, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__timer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "timer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__timer__pf = { "timer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_spawner_C__pf839595025, bpv__timer__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__timer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__timer__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf_Inner = { "bpv__enemylist__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemylist" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "enemylist" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf = { "enemylist", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_spawner_C__pf839595025, bpv__enemylist__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "Public/enemy_spawner__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "success" },
	};
#endif
	void Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf_SetBit(void* Obj)
	{
		((Aenemy_spawner_C__pf839595025*)Obj)->bpv__success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf = { "success", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_spawner_C__pf839595025), &Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__Cube__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__timer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__enemylist__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::NewProp_bpv__success__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemy_spawner_C__pf839595025>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::ClassParams = {
		&Aenemy_spawner_C__pf839595025::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aenemy_spawner_C__pf839595025()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/enemy_spawner"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("enemy_spawner_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aenemy_spawner_C__pf839595025_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aenemy_spawner_C__pf839595025, TEXT("enemy_spawner_C"), 494133917);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aenemy_spawner_C__pf839595025>()
	{
		return Aenemy_spawner_C__pf839595025::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aenemy_spawner_C__pf839595025(Z_Construct_UClass_Aenemy_spawner_C__pf839595025, &Aenemy_spawner_C__pf839595025::StaticClass, TEXT("/Game/blueprints/monster/enemy_spawner"), TEXT("enemy_spawner_C"), true, TEXT("/Game/blueprints/monster/enemy_spawner"), TEXT("/Game/blueprints/monster/enemy_spawner.enemy_spawner_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemy_spawner_C__pf839595025);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
