// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/enemy_spawn_table__pf3303916713.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemy_spawn_table__pf3303916713() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* Fenemy_spawn_table__pf3303916713::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/excel/enemy_spawn_table"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("enemy_spawn_table")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713, StructPackage, TEXT("enemy_spawn_table"), sizeof(Fenemy_spawn_table__pf3303916713), Get_Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<Fenemy_spawn_table__pf3303916713>()
{
	return Fenemy_spawn_table__pf3303916713::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_Fenemy_spawn_table__pf3303916713(Fenemy_spawn_table__pf3303916713::StaticStruct, TEXT("/Game/blueprints/others/excel/enemy_spawn_table"), TEXT("enemy_spawn_table"), true, TEXT("/Game/blueprints/others/excel/enemy_spawn_table"), TEXT("/Game/blueprints/others/excel/enemy_spawn_table.enemy_spawn_table"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFenemy_spawn_table__pf3303916713
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFenemy_spawn_table__pf3303916713()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("enemy_spawn_table")),new UScriptStruct::TCppStructOps<Fenemy_spawn_table__pf3303916713>);
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFenemy_spawn_table__pf3303916713;
	struct Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/excel/enemy_spawn_table"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/enemy_spawn_table__pf3303916713.h" },
		{ "OverrideNativeName", "enemy_spawn_table" },
		{ "ReplaceConverted", "/Game/blueprints/others/excel/enemy_spawn_table.enemy_spawn_table" },
	};
#endif
	void* Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<Fenemy_spawn_table__pf3303916713>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf_MetaData[] = {
		{ "Category", "enemy_spawn_table__pf3303916713" },
		{ "DisplayName", "delay_next_spawn" },
		{ "ModuleRelativePath", "Public/enemy_spawn_table__pf3303916713.h" },
		{ "OverrideNativeName", "delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf = { "delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fenemy_spawn_table__pf3303916713, bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf_MetaData[] = {
		{ "Category", "enemy_spawn_table__pf3303916713" },
		{ "DisplayName", "type_of_enemy" },
		{ "ModuleRelativePath", "Public/enemy_spawn_table__pf3303916713.h" },
		{ "OverrideNativeName", "type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf = { "type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fenemy_spawn_table__pf3303916713, bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf_MetaData[] = {
		{ "Category", "enemy_spawn_table__pf3303916713" },
		{ "DisplayName", "spawner_number" },
		{ "ModuleRelativePath", "Public/enemy_spawn_table__pf3303916713.h" },
		{ "OverrideNativeName", "spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf = { "spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fenemy_spawn_table__pf3303916713, bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf), METADATA_PARAMS(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::NewProp_bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"enemy_spawn_table",
		sizeof(Fenemy_spawn_table__pf3303916713),
		alignof(Fenemy_spawn_table__pf3303916713),
		Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/excel/enemy_spawn_table"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("enemy_spawn_table"), sizeof(Fenemy_spawn_table__pf3303916713), Get_Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713_Hash() { return 1787394749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
