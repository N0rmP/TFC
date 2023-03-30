// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/enemy_manager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemy_manager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__set_time_until_next_wave__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_time_until_next_wave__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__get_time_until_next_wave__pf)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_bpp__time_until_next_wave_ret__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_time_until_next_wave__pf(Z_Param_Out_bpp__time_until_next_wave_ret__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__remove_enemy__pf)
	{
		P_GET_OBJECT(Aenemy_base_C__pf839595025,Z_Param_bpp__tar__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__remove_enemy__pf(Z_Param_bpp__tar__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__get_enemies__pf)
	{
		P_GET_TARRAY_REF(Aenemy_base_C__pf839595025*,Z_Param_Out_bpp__enemies_return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_enemies__pf(Z_Param_Out_bpp__enemies_return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__comparator_by_health__pf)
	{
		P_GET_OBJECT(UObject,Z_Param_bpp__ObjectA__pf);
		P_GET_OBJECT(UObject,Z_Param_bpp__ObjectB__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Return__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__comparator_by_health__pf(Z_Param_bpp__ObjectA__pf,Z_Param_bpp__ObjectB__pf,Z_Param_Out_bpp__Return__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__sort_enemy_by_health__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__sort_enemy_by_health__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__add_enemies__pf)
	{
		P_GET_OBJECT(Aenemy_base_C__pf839595025,Z_Param_bpp__tar__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__add_enemies__pf(Z_Param_bpp__tar__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__remove_enemies_by_reference__pf)
	{
		P_GET_OBJECT(Aenemy_base_C__pf839595025,Z_Param_bpp__tar__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__remove_enemies_by_reference__pf(Z_Param_bpp__tar__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__clear_enemies__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__clear_enemies__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__spawn_one_row__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__spawn_one_row__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__initiate_enemy_manager__pf)
	{
		P_GET_OBJECT(UDataTable,Z_Param_bpp__cur_EST_param__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__initiate_enemy_manager__pf(Z_Param_bpp__cur_EST_param__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__while_wave_stop__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__deltaxsecond__pfT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__while_wave_stop__pf(Z_Param_bpp__deltaxsecond__pfT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_manager_C__pf3789721252::execbpf__ExecuteUbergraph_enemy_manager__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_enemy_manager__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void Aenemy_manager_C__pf3789721252::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		enemy_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void Aenemy_manager_C__pf3789721252::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf),NULL);
	}
	void Aenemy_manager_C__pf3789721252::StaticRegisterNativesAenemy_manager_C__pf3789721252()
	{
		UClass* Class = Aenemy_manager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add_enemies", &Aenemy_manager_C__pf3789721252::execbpf__add_enemies__pf },
			{ "clear_enemies", &Aenemy_manager_C__pf3789721252::execbpf__clear_enemies__pf },
			{ "comparator_by_health", &Aenemy_manager_C__pf3789721252::execbpf__comparator_by_health__pf },
			{ "ExecuteUbergraph_enemy_manager_0", &Aenemy_manager_C__pf3789721252::execbpf__ExecuteUbergraph_enemy_manager__pf_0 },
			{ "get_enemies", &Aenemy_manager_C__pf3789721252::execbpf__get_enemies__pf },
			{ "get_time_until_next_wave", &Aenemy_manager_C__pf3789721252::execbpf__get_time_until_next_wave__pf },
			{ "initiate_enemy_manager", &Aenemy_manager_C__pf3789721252::execbpf__initiate_enemy_manager__pf },
			{ "ReceiveTick", &Aenemy_manager_C__pf3789721252::execbpf__ReceiveTick__pf },
			{ "remove_enemies_by_reference", &Aenemy_manager_C__pf3789721252::execbpf__remove_enemies_by_reference__pf },
			{ "remove_enemy", &Aenemy_manager_C__pf3789721252::execbpf__remove_enemy__pf },
			{ "set_time_until_next_wave", &Aenemy_manager_C__pf3789721252::execbpf__set_time_until_next_wave__pf },
			{ "sort_enemy_by_health", &Aenemy_manager_C__pf3789721252::execbpf__sort_enemy_by_health__pf },
			{ "spawn_one_row", &Aenemy_manager_C__pf3789721252::execbpf__spawn_one_row__pf },
			{ "UserConstructionScript", &Aenemy_manager_C__pf3789721252::execbpf__UserConstructionScript__pf },
			{ "while_wave_stop", &Aenemy_manager_C__pf3789721252::execbpf__while_wave_stop__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__add_enemies__pf_Parms
		{
			Aenemy_base_C__pf839595025* bpp__tar__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tar__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::NewProp_bpp__tar__pf = { "bpp__tar__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__add_enemies__pf_Parms, bpp__tar__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::NewProp_bpp__tar__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "add_enemies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "add_enemies", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__add_enemies__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "add_enemies" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "clear_enemies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "clear_enemies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "clear_enemies" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms
		{
			UObject* bpp__ObjectA__pf;
			UObject* bpp__ObjectB__pf;
			bool bpp__Return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ObjectA__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__ObjectB__pf;
		static void NewProp_bpp__Return__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__ObjectA__pf = { "bpp__ObjectA__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms, bpp__ObjectA__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__ObjectB__pf = { "bpp__ObjectB__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms, bpp__ObjectB__pf), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__Return__pf_SetBit(void* Obj)
	{
		((enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms*)Obj)->bpp__Return__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__Return__pf = { "bpp__Return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms), &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__Return__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__ObjectA__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__ObjectB__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::NewProp_bpp__Return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "comparator_by_health" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "comparator_by_health", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__comparator_by_health__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "comparator_by_health" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__ExecuteUbergraph_enemy_manager__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__ExecuteUbergraph_enemy_manager__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_enemy_manager_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "ExecuteUbergraph_enemy_manager_0", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__ExecuteUbergraph_enemy_manager__pf_0_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_enemy_manager_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__get_enemies__pf_Parms
		{
			TArray<Aenemy_base_C__pf839595025*> bpp__enemies_return__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__enemies_return__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__enemies_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::NewProp_bpp__enemies_return__pf_Inner = { "bpp__enemies_return__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::NewProp_bpp__enemies_return__pf = { "bpp__enemies_return__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__get_enemies__pf_Parms, bpp__enemies_return__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::NewProp_bpp__enemies_return__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::NewProp_bpp__enemies_return__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_enemies" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "get_enemies", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__get_enemies__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_enemies" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__get_time_until_next_wave__pf_Parms
		{
			float bpp__time_until_next_wave_ret__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__time_until_next_wave_ret__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::NewProp_bpp__time_until_next_wave_ret__pf = { "bpp__time_until_next_wave_ret__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__get_time_until_next_wave__pf_Parms, bpp__time_until_next_wave_ret__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::NewProp_bpp__time_until_next_wave_ret__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_time_until_next_wave" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "get_time_until_next_wave", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__get_time_until_next_wave__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_time_until_next_wave" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__initiate_enemy_manager__pf_Parms
		{
			UDataTable* bpp__cur_EST_param__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__cur_EST_param__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::NewProp_bpp__cur_EST_param__pf = { "bpp__cur_EST_param__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__initiate_enemy_manager__pf_Parms, bpp__cur_EST_param__pf), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::NewProp_bpp__cur_EST_param__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "initiate_enemy_manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "initiate_enemy_manager", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__initiate_enemy_manager__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "initiate_enemy_manager" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__remove_enemies_by_reference__pf_Parms
		{
			Aenemy_base_C__pf839595025* bpp__tar__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tar__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::NewProp_bpp__tar__pf = { "bpp__tar__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__remove_enemies_by_reference__pf_Parms, bpp__tar__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::NewProp_bpp__tar__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "remove_enemies_by_reference" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "remove_enemies_by_reference", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__remove_enemies_by_reference__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "remove_enemies_by_reference" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__remove_enemy__pf_Parms
		{
			Aenemy_base_C__pf839595025* bpp__tar__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tar__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::NewProp_bpp__tar__pf = { "bpp__tar__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__remove_enemy__pf_Parms, bpp__tar__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::NewProp_bpp__tar__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "remove_enemy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "remove_enemy", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__remove_enemy__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "remove_enemy" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__set_time_until_next_wave__pf_Parms
		{
			float bpp__val__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__val__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__set_time_until_next_wave__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "set_time_until_next_wave" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "set_time_until_next_wave", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__set_time_until_next_wave__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_time_until_next_wave" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "sort_enemy_by_health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "sort_enemy_by_health", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "sort_enemy_by_health" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "spawn_one_row" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "spawn_one_row", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "spawn_one_row" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics
	{
		struct enemy_manager_C__pf3789721252_eventbpf__while_wave_stop__pf_Parms
		{
			float bpp__deltaxsecond__pfT;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__deltaxsecond__pfT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::NewProp_bpp__deltaxsecond__pfT = { "bpp__deltaxsecond__pfT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_manager_C__pf3789721252_eventbpf__while_wave_stop__pf_Parms, bpp__deltaxsecond__pfT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::NewProp_bpp__deltaxsecond__pfT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "while_wave_stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_manager_C__pf3789721252, nullptr, "while_wave_stop", nullptr, nullptr, sizeof(enemy_manager_C__pf3789721252_eventbpf__while_wave_stop__pf_Parms), Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "while_wave_stop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister()
	{
		return Aenemy_manager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__enemies__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__enemies__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__enemies__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__enemy_spawners__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__enemy_spawners__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__enemy_spawners__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_EST__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__cur_EST__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__EST_rows__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EST_rows__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__EST_rows__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_EST_index__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__cur_EST_index__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__time_until_next_wave__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__time_until_next_wave__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__is_last_enemy_spawned__pf_MetaData[];
#endif
		static void NewProp_bpv__is_last_enemy_spawned__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__is_last_enemy_spawned__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_tar_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_tar_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_tar__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_tar__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Variable__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Variable_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Variable_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_spawn_enemy_success__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_spawn_enemy_success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_spawn_enemy_success__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_delta_second__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_CustomEvent_delta_second__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__add_enemies__pf, "add_enemies" }, // 2210429098
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__clear_enemies__pf, "clear_enemies" }, // 2484373898
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__comparator_by_health__pf, "comparator_by_health" }, // 3281404411
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ExecuteUbergraph_enemy_manager__pf_0, "ExecuteUbergraph_enemy_manager_0" }, // 19861367
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_enemies__pf, "get_enemies" }, // 1825070784
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__get_time_until_next_wave__pf, "get_time_until_next_wave" }, // 3997579988
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__initiate_enemy_manager__pf, "initiate_enemy_manager" }, // 2203169883
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2206045047
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemies_by_reference__pf, "remove_enemies_by_reference" }, // 3475987032
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__remove_enemy__pf, "remove_enemy" }, // 210719457
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__set_time_until_next_wave__pf, "set_time_until_next_wave" }, // 1832020920
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__sort_enemy_by_health__pf, "sort_enemy_by_health" }, // 4111652413
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__spawn_one_row__pf, "spawn_one_row" }, // 331034849
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 2896509049
		{ &Z_Construct_UFunction_Aenemy_manager_C__pf3789721252_bpf__while_wave_stop__pf, "while_wave_stop" }, // 3177790983
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "enemy_manager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "enemy_manager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/enemy_manager.enemy_manager_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf_Inner = { "bpv__enemies__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemies" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "enemies" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf = { "enemies", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__enemies__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf_Inner = { "bpv__enemy_spawners__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy Spawners" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "enemy_spawners" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf = { "enemy_spawners", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__enemy_spawners__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur EST" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_EST" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST__pf = { "cur_EST", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__cur_EST__pf), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST__pf_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf_Inner = { "bpv__EST_rows__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "EST Rows" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EST_rows" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf = { "EST_rows", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__EST_rows__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST_index__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur EST Index" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_EST_index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST_index__pf = { "cur_EST_index", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__cur_EST_index__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST_index__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST_index__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__time_until_next_wave__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Time Until Next Wave" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "time_until_next_wave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__time_until_next_wave__pf = { "time_until_next_wave", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, bpv__time_until_next_wave__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__time_until_next_wave__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__time_until_next_wave__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Last Enemy Spawned" },
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "is_last_enemy_spawned" },
	};
#endif
	void Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf_SetBit(void* Obj)
	{
		((Aenemy_manager_C__pf3789721252*)Obj)->bpv__is_last_enemy_spawned__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf = { "is_last_enemy_spawned", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_manager_C__pf3789721252), &Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_tar_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar_1__pf = { "K2Node_CustomEvent_tar_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_CustomEvent_tar_1__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_tar" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar__pf = { "K2Node_CustomEvent_tar", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_CustomEvent_tar__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf = { "___int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l_____int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_cur_EST_param" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf = { "K2Node_CustomEvent_cur_EST_param", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_CustomEvent_cur_EST_param__pf), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___int_Variable_1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable_1__pf = { "___int_Variable_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l_____int_Variable_1__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_Array_Get_Item__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_GetDataTableRowFromName_OutRow" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf = { "CallFunc_GetDataTableRowFromName_OutRow", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_GetDataTableRowFromName_OutRow__pf), Z_Construct_UScriptStruct_Fenemy_spawn_table__pf3303916713, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_Aenemy_spawner_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_spawn_enemy_spawned_enemy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf = { "CallFunc_spawn_enemy_spawned_enemy", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_spawn_enemy_spawned_enemy__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_spawn_enemy_success" },
	};
#endif
	void Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf_SetBit(void* Obj)
	{
		((Aenemy_manager_C__pf3789721252*)Obj)->b0l__CallFunc_spawn_enemy_success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf = { "CallFunc_spawn_enemy_success", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_manager_C__pf3789721252), &Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_delta_second__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_delta_second" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_delta_second__pf = { "K2Node_CustomEvent_delta_second", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_CustomEvent_delta_second__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_delta_second__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_delta_second__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf = { "K2Node_DynamicCast_AsMain_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf), Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((Aenemy_manager_C__pf3789721252*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_manager_C__pf3789721252), &Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner = { "b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_GetDataTableRowNames_OutRowNames" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf = { "CallFunc_GetDataTableRowNames_OutRowNames", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_manager_C__pf3789721252, b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemies__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__enemy_spawners__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__EST_rows__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__cur_EST_index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__time_until_next_wave__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_bpv__is_last_enemy_spawned__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_tar__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_cur_EST_param__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowFromName_OutRow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_spawned_enemy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_spawn_enemy_success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_delta_second__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemy_manager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::ClassParams = {
		&Aenemy_manager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/enemy_manager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("enemy_manager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aenemy_manager_C__pf3789721252, TEXT("enemy_manager_C"), 688648372);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aenemy_manager_C__pf3789721252>()
	{
		return Aenemy_manager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aenemy_manager_C__pf3789721252(Z_Construct_UClass_Aenemy_manager_C__pf3789721252, &Aenemy_manager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/enemy_manager"), TEXT("enemy_manager_C"), true, TEXT("/Game/blueprints/others/Observer/enemy_manager"), TEXT("/Game/blueprints/others/Observer/enemy_manager.enemy_manager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemy_manager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
