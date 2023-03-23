// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/tower_manager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetower_manager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATowerBase_C__pf711247040_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__find_towers__pf)
	{
		P_GET_OBJECT(ATower_C__pf711247040,Z_Param_bpp__type_of_tower__pf);
		P_GET_TARRAY_REF(ATower_C__pf711247040*,Z_Param_Out_bpp__target_towers_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__find_towers__pf(Z_Param_bpp__type_of_tower__pf,Z_Param_Out_bpp__target_towers_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__get_towers_list__pf)
	{
		P_GET_TARRAY_REF(ATower_C__pf711247040*,Z_Param_Out_bpp__towers_res__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_towers_list__pf(Z_Param_Out_bpp__towers_res__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__initiation__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__initiation__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__clear_towers__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__clear_towers__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__add_tower__pf)
	{
		P_GET_OBJECT(ATower_C__pf711247040,Z_Param_bpp__tower__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__add_tower__pf(Z_Param_bpp__tower__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Atower_manager_C__pf3789721252::execbpf__remove_tower_by_reference__pf)
	{
		P_GET_OBJECT(ATower_C__pf711247040,Z_Param_bpp__tower__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__remove_tower_by_reference__pf(Z_Param_bpp__tower__pf);
		P_NATIVE_END;
	}
	void Atower_manager_C__pf3789721252::StaticRegisterNativesAtower_manager_C__pf3789721252()
	{
		UClass* Class = Atower_manager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add_tower", &Atower_manager_C__pf3789721252::execbpf__add_tower__pf },
			{ "clear_towers", &Atower_manager_C__pf3789721252::execbpf__clear_towers__pf },
			{ "find_towers", &Atower_manager_C__pf3789721252::execbpf__find_towers__pf },
			{ "get_towers_list", &Atower_manager_C__pf3789721252::execbpf__get_towers_list__pf },
			{ "initiation", &Atower_manager_C__pf3789721252::execbpf__initiation__pf },
			{ "remove_tower_by_reference", &Atower_manager_C__pf3789721252::execbpf__remove_tower_by_reference__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics
	{
		struct tower_manager_C__pf3789721252_eventbpf__add_tower__pf_Parms
		{
			ATower_C__pf711247040* bpp__tower__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tower__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::NewProp_bpp__tower__pf = { "bpp__tower__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(tower_manager_C__pf3789721252_eventbpf__add_tower__pf_Parms, bpp__tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::NewProp_bpp__tower__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "add_tower" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "add_tower", nullptr, nullptr, sizeof(tower_manager_C__pf3789721252_eventbpf__add_tower__pf_Parms), Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "add_tower" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "clear_towers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "clear_towers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "clear_towers" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics
	{
		struct tower_manager_C__pf3789721252_eventbpf__find_towers__pf_Parms
		{
			ATower_C__pf711247040* bpp__type_of_tower__pf;
			TArray<ATower_C__pf711247040*> bpp__target_towers_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__type_of_tower__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__target_towers_return__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__target_towers_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__type_of_tower__pf = { "bpp__type_of_tower__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(tower_manager_C__pf3789721252_eventbpf__find_towers__pf_Parms, bpp__type_of_tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__target_towers_return__pf_Inner = { "bpp__target_towers_return__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__target_towers_return__pf = { "bpp__target_towers_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(tower_manager_C__pf3789721252_eventbpf__find_towers__pf_Parms, bpp__target_towers_return__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__type_of_tower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__target_towers_return__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::NewProp_bpp__target_towers_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "find_towers" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "find_towers", nullptr, nullptr, sizeof(tower_manager_C__pf3789721252_eventbpf__find_towers__pf_Parms), Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "find_towers" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics
	{
		struct tower_manager_C__pf3789721252_eventbpf__get_towers_list__pf_Parms
		{
			TArray<ATower_C__pf711247040*> bpp__towers_res__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__towers_res__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__towers_res__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::NewProp_bpp__towers_res__pf_Inner = { "bpp__towers_res__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::NewProp_bpp__towers_res__pf = { "bpp__towers_res__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(tower_manager_C__pf3789721252_eventbpf__get_towers_list__pf_Parms, bpp__towers_res__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::NewProp_bpp__towers_res__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::NewProp_bpp__towers_res__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_towers_list" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "get_towers_list", nullptr, nullptr, sizeof(tower_manager_C__pf3789721252_eventbpf__get_towers_list__pf_Parms), Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_towers_list" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "initiation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "initiation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "initiation" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics
	{
		struct tower_manager_C__pf3789721252_eventbpf__remove_tower_by_reference__pf_Parms
		{
			ATower_C__pf711247040* bpp__tower__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tower__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::NewProp_bpp__tower__pf = { "bpp__tower__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(tower_manager_C__pf3789721252_eventbpf__remove_tower_by_reference__pf_Parms, bpp__tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::NewProp_bpp__tower__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "remove_tower_by_reference" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Atower_manager_C__pf3789721252, nullptr, "remove_tower_by_reference", nullptr, nullptr, sizeof(tower_manager_C__pf3789721252_eventbpf__remove_tower_by_reference__pf_Parms), Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf()
	{
		UObject* Outer = Z_Construct_UClass_Atower_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "remove_tower_by_reference" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister()
	{
		return Atower_manager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__towers__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__towers__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__towers__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__tower_bases__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__tower_bases__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__tower_bases__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_tower_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_tower_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_tower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_tower__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__add_tower__pf, "add_tower" }, // 2898537962
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__clear_towers__pf, "clear_towers" }, // 2054433905
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__find_towers__pf, "find_towers" }, // 2203171854
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__get_towers_list__pf, "get_towers_list" }, // 3776286315
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__initiation__pf, "initiation" }, // 2879586623
		{ &Z_Construct_UFunction_Atower_manager_C__pf3789721252_bpf__remove_tower_by_reference__pf, "remove_tower_by_reference" }, // 3151022854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "tower_manager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "tower_manager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/tower_manager.tower_manager_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf_Inner = { "bpv__towers__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Towers" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "towers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf = { "towers", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, bpv__towers__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf_Inner = { "bpv__tower_bases__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATowerBase_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tower Bases" },
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "tower_bases" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf = { "tower_bases", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, bpv__tower_bases__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_tower_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower_1__pf = { "K2Node_CustomEvent_tower_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, b0l__K2Node_CustomEvent_tower_1__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_tower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower__pf = { "K2Node_CustomEvent_tower", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, b0l__K2Node_CustomEvent_tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATowerBase_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/tower_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atower_manager_C__pf3789721252, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__towers__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_bpv__tower_bases__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Atower_manager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::ClassParams = {
		&Atower_manager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/tower_manager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("tower_manager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Atower_manager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Atower_manager_C__pf3789721252, TEXT("tower_manager_C"), 1851221493);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Atower_manager_C__pf3789721252>()
	{
		return Atower_manager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atower_manager_C__pf3789721252(Z_Construct_UClass_Atower_manager_C__pf3789721252, &Atower_manager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/tower_manager"), TEXT("tower_manager_C"), true, TEXT("/Game/blueprints/others/Observer/tower_manager"), TEXT("/Game/blueprints/others/Observer/tower_manager.tower_manager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atower_manager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
