// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/SaveLoadManager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveLoadManager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USaveLoadManager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USaveLoadManager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveLoadManager_C__pf3789721252::execbpf__save_Upgrades__pf)
	{
		P_GET_OBJECT(UWidget,Z_Param_bpp__widget__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__save_Upgrades__pf(Z_Param_bpp__widget__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveLoadManager_C__pf3789721252::execbpf__Save_Game__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Save_Game__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveLoadManager_C__pf3789721252::execbpf__On_Init__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Init__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveLoadManager_C__pf3789721252::execbpf__ExecuteUbergraph_SaveLoadManager__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_SaveLoadManager__pf(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	void USaveLoadManager_C__pf3789721252::StaticRegisterNativesUSaveLoadManager_C__pf3789721252()
	{
		UClass* Class = USaveLoadManager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_SaveLoadManager", &USaveLoadManager_C__pf3789721252::execbpf__ExecuteUbergraph_SaveLoadManager__pf },
			{ "On_Init", &USaveLoadManager_C__pf3789721252::execbpf__On_Init__pf },
			{ "Save_Game", &USaveLoadManager_C__pf3789721252::execbpf__Save_Game__pf },
			{ "save_Upgrades", &USaveLoadManager_C__pf3789721252::execbpf__save_Upgrades__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics
	{
		struct SaveLoadManager_C__pf3789721252_eventbpf__ExecuteUbergraph_SaveLoadManager__pf_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(SaveLoadManager_C__pf3789721252_eventbpf__ExecuteUbergraph_SaveLoadManager__pf_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_SaveLoadManager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadManager_C__pf3789721252, nullptr, "ExecuteUbergraph_SaveLoadManager", nullptr, nullptr, sizeof(SaveLoadManager_C__pf3789721252_eventbpf__ExecuteUbergraph_SaveLoadManager__pf_Parms), Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf()
	{
		UObject* Outer = Z_Construct_UClass_USaveLoadManager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_SaveLoadManager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "OverrideNativeName", "On_Init" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadManager_C__pf3789721252, nullptr, "On_Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf()
	{
		UObject* Outer = Z_Construct_UClass_USaveLoadManager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Init" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "OverrideNativeName", "Save_Game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadManager_C__pf3789721252, nullptr, "Save_Game", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf()
	{
		UObject* Outer = Z_Construct_UClass_USaveLoadManager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Save_Game" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics
	{
		struct SaveLoadManager_C__pf3789721252_eventbpf__save_Upgrades__pf_Parms
		{
			UWidget* bpp__widget__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__widget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__widget__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::NewProp_bpp__widget__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::NewProp_bpp__widget__pf = { "bpp__widget__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(SaveLoadManager_C__pf3789721252_eventbpf__save_Upgrades__pf_Parms, bpp__widget__pf), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::NewProp_bpp__widget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::NewProp_bpp__widget__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::NewProp_bpp__widget__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "OverrideNativeName", "save_Upgrades" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveLoadManager_C__pf3789721252, nullptr, "save_Upgrades", nullptr, nullptr, sizeof(SaveLoadManager_C__pf3789721252_eventbpf__save_Upgrades__pf_Parms), Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf()
	{
		UObject* Outer = Z_Construct_UClass_USaveLoadManager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "save_Upgrades" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveLoadManager_C__pf3789721252_NoRegister()
	{
		return USaveLoadManager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Slot_Name__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Slot_Name__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__user_ID__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__user_ID__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__NewVar_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__upgrade_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__upgrade_manager__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__ExecuteUbergraph_SaveLoadManager__pf, "ExecuteUbergraph_SaveLoadManager" }, // 3879578769
		{ &Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__On_Init__pf, "On_Init" }, // 2041082910
		{ &Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__Save_Game__pf, "Save_Game" }, // 950381954
		{ &Z_Construct_UFunction_USaveLoadManager_C__pf3789721252_bpf__save_Upgrades__pf, "save_Upgrades" }, // 2333450788
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveLoadManager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "SaveLoadManager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/SaveLoadManager.SaveLoadManager_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__Slot_Name__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slot Name" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Slot_Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__Slot_Name__pf = { "Slot_Name", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveLoadManager_C__pf3789721252, bpv__Slot_Name__pf), METADATA_PARAMS(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__Slot_Name__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__Slot_Name__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__user_ID__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "User ID" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "user_ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__user_ID__pf = { "user_ID", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveLoadManager_C__pf3789721252, bpv__user_ID__pf), METADATA_PARAMS(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__user_ID__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__user_ID__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__NewVar_0__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 0" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__NewVar_0__pf = { "NewVar_0", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveLoadManager_C__pf3789721252, bpv__NewVar_0__pf), METADATA_PARAMS(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__NewVar_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__NewVar_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Upgrade Manager" },
		{ "ModuleRelativePath", "Public/SaveLoadManager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "upgrade_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf = { "upgrade_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveLoadManager_C__pf3789721252, bpv__upgrade_manager__pf), Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__Slot_Name__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__user_ID__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__NewVar_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveLoadManager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::ClassParams = {
		&USaveLoadManager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveLoadManager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/SaveLoadManager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SaveLoadManager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveLoadManager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USaveLoadManager_C__pf3789721252, TEXT("SaveLoadManager_C"), 1592581322);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USaveLoadManager_C__pf3789721252>()
	{
		return USaveLoadManager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveLoadManager_C__pf3789721252(Z_Construct_UClass_USaveLoadManager_C__pf3789721252, &USaveLoadManager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/SaveLoadManager"), TEXT("SaveLoadManager_C"), true, TEXT("/Game/blueprints/others/Observer/SaveLoadManager"), TEXT("/Game/blueprints/others/Observer/SaveLoadManager.SaveLoadManager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveLoadManager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
