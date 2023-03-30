// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Main_GameInstance__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_GameInstance__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aline_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USaveLoadManager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__save_Game__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__succeed__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__save_Game__pf(Z_Param_Out_bpp__succeed__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__load_Game__pf)
	{
		P_GET_OBJECT_REF(USaveLoadManager_C__pf3789721252,Z_Param_Out_bpp__NewParam__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__load_Game__pf(Z_Param_Out_bpp__NewParam__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__game_Initiate__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__game_Initiate__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__get_line_manager__pf)
	{
		P_GET_OBJECT_REF(Aline_manager_C__pf3789721252,Z_Param_Out_bpp__line_manager_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_line_manager__pf(Z_Param_Out_bpp__line_manager_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__get_widget_manager__pf)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__widget_manager_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_widget_manager__pf(Z_Param_Out_bpp__widget_manager_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__get_tower_manager__pf)
	{
		P_GET_OBJECT_REF(Atower_manager_C__pf3789721252,Z_Param_Out_bpp__tower_manager_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_tower_manager__pf(Z_Param_Out_bpp__tower_manager_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__get_enemy_manager__pf)
	{
		P_GET_OBJECT_REF(Aenemy_manager_C__pf3789721252,Z_Param_Out_bpp__enemy_manager_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_enemy_manager__pf(Z_Param_Out_bpp__enemy_manager_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__get_electricity_manager__pf)
	{
		P_GET_OBJECT_REF(Aelectricity_manager_C__pf3789721252,Z_Param_Out_bpp__electricity_manager_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_electricity_manager__pf(Z_Param_Out_bpp__electricity_manager_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__level_initiate__pf)
	{
		P_GET_OBJECT(Aplayer_character_C__pf2509438801,Z_Param_bpp__plr_of_this_lvl__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__cur_stage_num__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__level_initiate__pf(Z_Param_bpp__plr_of_this_lvl__pf,Z_Param_bpp__cur_stage_num__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__level_end__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__is_clear__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__level_end__pf(Z_Param_bpp__is_clear__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMain_GameInstance_C__pf3789721252::execbpf__ExecuteUbergraph_Main_GameInstance__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_Main_GameInstance__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	void UMain_GameInstance_C__pf3789721252::StaticRegisterNativesUMain_GameInstance_C__pf3789721252()
	{
		UClass* Class = UMain_GameInstance_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_Main_GameInstance_0", &UMain_GameInstance_C__pf3789721252::execbpf__ExecuteUbergraph_Main_GameInstance__pf_0 },
			{ "game_Initiate", &UMain_GameInstance_C__pf3789721252::execbpf__game_Initiate__pf },
			{ "get_electricity_manager", &UMain_GameInstance_C__pf3789721252::execbpf__get_electricity_manager__pf },
			{ "get_enemy_manager", &UMain_GameInstance_C__pf3789721252::execbpf__get_enemy_manager__pf },
			{ "get_line_manager", &UMain_GameInstance_C__pf3789721252::execbpf__get_line_manager__pf },
			{ "get_tower_manager", &UMain_GameInstance_C__pf3789721252::execbpf__get_tower_manager__pf },
			{ "get_widget_manager", &UMain_GameInstance_C__pf3789721252::execbpf__get_widget_manager__pf },
			{ "level_end", &UMain_GameInstance_C__pf3789721252::execbpf__level_end__pf },
			{ "level_initiate", &UMain_GameInstance_C__pf3789721252::execbpf__level_initiate__pf },
			{ "load_Game", &UMain_GameInstance_C__pf3789721252::execbpf__load_Game__pf },
			{ "save_Game", &UMain_GameInstance_C__pf3789721252::execbpf__save_Game__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__ExecuteUbergraph_Main_GameInstance__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__ExecuteUbergraph_Main_GameInstance__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_Main_GameInstance_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "ExecuteUbergraph_Main_GameInstance_0", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__ExecuteUbergraph_Main_GameInstance__pf_0_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_Main_GameInstance_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "game_Initiate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "game_Initiate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "game_Initiate" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__get_electricity_manager__pf_Parms
		{
			Aelectricity_manager_C__pf3789721252* bpp__electricity_manager_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__electricity_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::NewProp_bpp__electricity_manager_return__pf = { "bpp__electricity_manager_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__get_electricity_manager__pf_Parms, bpp__electricity_manager_return__pf), Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::NewProp_bpp__electricity_manager_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "get_electricity_manager" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "get_electricity_manager", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__get_electricity_manager__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_electricity_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__get_enemy_manager__pf_Parms
		{
			Aenemy_manager_C__pf3789721252* bpp__enemy_manager_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__enemy_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::NewProp_bpp__enemy_manager_return__pf = { "bpp__enemy_manager_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__get_enemy_manager__pf_Parms, bpp__enemy_manager_return__pf), Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::NewProp_bpp__enemy_manager_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "get_enemy_manager" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "get_enemy_manager", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__get_enemy_manager__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_enemy_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__get_line_manager__pf_Parms
		{
			Aline_manager_C__pf3789721252* bpp__line_manager_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__line_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::NewProp_bpp__line_manager_return__pf = { "bpp__line_manager_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__get_line_manager__pf_Parms, bpp__line_manager_return__pf), Z_Construct_UClass_Aline_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::NewProp_bpp__line_manager_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "get_line_manager" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "get_line_manager", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__get_line_manager__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_line_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__get_tower_manager__pf_Parms
		{
			Atower_manager_C__pf3789721252* bpp__tower_manager_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tower_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::NewProp_bpp__tower_manager_return__pf = { "bpp__tower_manager_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__get_tower_manager__pf_Parms, bpp__tower_manager_return__pf), Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::NewProp_bpp__tower_manager_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "get_tower_manager" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "get_tower_manager", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__get_tower_manager__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_tower_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__get_widget_manager__pf_Parms
		{
			AActor* bpp__widget_manager_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__widget_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::NewProp_bpp__widget_manager_return__pf = { "bpp__widget_manager_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__get_widget_manager__pf_Parms, bpp__widget_manager_return__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::NewProp_bpp__widget_manager_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "get_widget_manager" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "get_widget_manager", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__get_widget_manager__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_widget_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__level_end__pf_Parms
		{
			bool bpp__is_clear__pf;
		};
		static void NewProp_bpp__is_clear__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__is_clear__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::NewProp_bpp__is_clear__pf_SetBit(void* Obj)
	{
		((Main_GameInstance_C__pf3789721252_eventbpf__level_end__pf_Parms*)Obj)->bpp__is_clear__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::NewProp_bpp__is_clear__pf = { "bpp__is_clear__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Main_GameInstance_C__pf3789721252_eventbpf__level_end__pf_Parms), &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::NewProp_bpp__is_clear__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::NewProp_bpp__is_clear__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "level_end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "level_end", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__level_end__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "level_end" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__level_initiate__pf_Parms
		{
			Aplayer_character_C__pf2509438801* bpp__plr_of_this_lvl__pf;
			int32 bpp__cur_stage_num__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__plr_of_this_lvl__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__cur_stage_num__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::NewProp_bpp__plr_of_this_lvl__pf = { "bpp__plr_of_this_lvl__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__level_initiate__pf_Parms, bpp__plr_of_this_lvl__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::NewProp_bpp__cur_stage_num__pf = { "bpp__cur_stage_num__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__level_initiate__pf_Parms, bpp__cur_stage_num__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::NewProp_bpp__plr_of_this_lvl__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::NewProp_bpp__cur_stage_num__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "level_initiate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "level_initiate", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__level_initiate__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "level_initiate" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__load_Game__pf_Parms
		{
			USaveLoadManager_C__pf3789721252* bpp__NewParam__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NewParam__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::NewProp_bpp__NewParam__pf = { "bpp__NewParam__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Main_GameInstance_C__pf3789721252_eventbpf__load_Game__pf_Parms, bpp__NewParam__pf), Z_Construct_UClass_USaveLoadManager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::NewProp_bpp__NewParam__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "load_Game" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "load_Game", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__load_Game__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "load_Game" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics
	{
		struct Main_GameInstance_C__pf3789721252_eventbpf__save_Game__pf_Parms
		{
			bool bpp__succeed__pf;
		};
		static void NewProp_bpp__succeed__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__succeed__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::NewProp_bpp__succeed__pf_SetBit(void* Obj)
	{
		((Main_GameInstance_C__pf3789721252_eventbpf__save_Game__pf_Parms*)Obj)->bpp__succeed__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::NewProp_bpp__succeed__pf = { "bpp__succeed__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Main_GameInstance_C__pf3789721252_eventbpf__save_Game__pf_Parms), &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::NewProp_bpp__succeed__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::NewProp_bpp__succeed__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "save_Game" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, nullptr, "save_Game", nullptr, nullptr, sizeof(Main_GameInstance_C__pf3789721252_eventbpf__save_Game__pf_Parms), Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf()
	{
		UObject* Outer = Z_Construct_UClass_UMain_GameInstance_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "save_Game" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister()
	{
		return UMain_GameInstance_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__elecricity_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__elecricity_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__enemy_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__enemy_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__tower_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__tower_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__widget_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__widget_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__line_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__line_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__upgrade_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__upgrade_manager__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_plr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__cur_plr__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__saveload_manager__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__saveload_manager__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EST_arr__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EST_arr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__EST_arr__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cell__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__cell__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_is_clear__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_is_clear__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_is_clear__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__ExecuteUbergraph_Main_GameInstance__pf_0, "ExecuteUbergraph_Main_GameInstance_0" }, // 2934882512
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__game_Initiate__pf, "game_Initiate" }, // 3596282287
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_electricity_manager__pf, "get_electricity_manager" }, // 1679473497
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_enemy_manager__pf, "get_enemy_manager" }, // 762736993
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_line_manager__pf, "get_line_manager" }, // 1291417033
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_tower_manager__pf, "get_tower_manager" }, // 2793045986
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__get_widget_manager__pf, "get_widget_manager" }, // 3205068510
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_end__pf, "level_end" }, // 1010405924
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__level_initiate__pf, "level_initiate" }, // 356338697
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__load_Game__pf, "load_Game" }, // 2353879776
		{ &Z_Construct_UFunction_UMain_GameInstance_C__pf3789721252_bpf__save_Game__pf, "save_Game" }, // 3360923429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Main_GameInstance__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Main_GameInstance_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__elecricity_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Elecricity Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "elecricity_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__elecricity_manager__pf = { "elecricity_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__elecricity_manager__pf), Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__elecricity_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__elecricity_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__enemy_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "enemy_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__enemy_manager__pf = { "enemy_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__enemy_manager__pf), Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__enemy_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__enemy_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__tower_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tower Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "tower_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__tower_manager__pf = { "tower_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__tower_manager__pf), Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__tower_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__tower_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__widget_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Widget Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "widget_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__widget_manager__pf = { "widget_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__widget_manager__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__widget_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__widget_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__line_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Line Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "line_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__line_manager__pf = { "line_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__line_manager__pf), Z_Construct_UClass_Aline_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__line_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__line_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Upgrade Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "upgrade_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf = { "upgrade_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__upgrade_manager__pf), Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cur_plr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Plr" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_plr" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cur_plr__pf = { "cur_plr", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__cur_plr__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cur_plr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cur_plr__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__saveload_manager__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Saveload Manager" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "saveload_manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__saveload_manager__pf = { "saveload_manager", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__saveload_manager__pf), Z_Construct_UClass_USaveLoadManager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__saveload_manager__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__saveload_manager__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf_Inner = { "bpv__EST_arr__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "EST Arr" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EST_arr" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf = { "EST_arr", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__EST_arr__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cell__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cell" },
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cell" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cell__pf = { "cell", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMain_GameInstance_C__pf3789721252, bpv__cell__pf), METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cell__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cell__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main_GameInstance__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_is_clear" },
	};
#endif
	void Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf_SetBit(void* Obj)
	{
		((UMain_GameInstance_C__pf3789721252*)Obj)->b0l__K2Node_CustomEvent_is_clear__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf = { "K2Node_CustomEvent_is_clear", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMain_GameInstance_C__pf3789721252), &Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__elecricity_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__enemy_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__tower_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__widget_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__line_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__upgrade_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cur_plr__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__saveload_manager__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__EST_arr__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_bpv__cell__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_is_clear__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMain_GameInstance_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::ClassParams = {
		&UMain_GameInstance_C__pf3789721252::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/Main_GameInstance"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Main_GameInstance_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UMain_GameInstance_C__pf3789721252, TEXT("Main_GameInstance_C"), 4155372270);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UMain_GameInstance_C__pf3789721252>()
	{
		return UMain_GameInstance_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMain_GameInstance_C__pf3789721252(Z_Construct_UClass_UMain_GameInstance_C__pf3789721252, &UMain_GameInstance_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/Main_GameInstance"), TEXT("Main_GameInstance_C"), true, TEXT("/Game/blueprints/others/Observer/Main_GameInstance"), TEXT("/Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMain_GameInstance_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
