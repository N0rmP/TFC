// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/gunner_enemy__pf839595025.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegunner_enemy__pf839595025() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Agunner_enemy_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Agunner_enemy_C__pf839595025();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Agunner_enemy_C__pf839595025::execbpf__enemy_gun_fire__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__enemy_gun_fire__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Agunner_enemy_C__pf839595025::execbpf__enemy_gun_ready__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__shoot__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__enemy_gun_ready__pf(Z_Param_Out_bpp__shoot__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Agunner_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Agunner_enemy_C__pf839595025::execbpf__ExecuteUbergraph_gunner_enemy__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_gunner_enemy__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void Agunner_enemy_C__pf839595025::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void Agunner_enemy_C__pf839595025::StaticRegisterNativesAgunner_enemy_C__pf839595025()
	{
		UClass* Class = Agunner_enemy_C__pf839595025::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "enemy_gun_fire", &Agunner_enemy_C__pf839595025::execbpf__enemy_gun_fire__pf },
			{ "enemy_gun_ready", &Agunner_enemy_C__pf839595025::execbpf__enemy_gun_ready__pf },
			{ "ExecuteUbergraph_gunner_enemy_1", &Agunner_enemy_C__pf839595025::execbpf__ExecuteUbergraph_gunner_enemy__pf_1 },
			{ "ReceiveBeginPlay", &Agunner_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "enemy_gun_fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agunner_enemy_C__pf839595025, nullptr, "enemy_gun_fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf()
	{
		UObject* Outer = Z_Construct_UClass_Agunner_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "enemy_gun_fire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics
	{
		struct gunner_enemy_C__pf839595025_eventbpf__enemy_gun_ready__pf_Parms
		{
			bool bpp__shoot__pf;
		};
		static void NewProp_bpp__shoot__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__shoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::NewProp_bpp__shoot__pf_SetBit(void* Obj)
	{
		((gunner_enemy_C__pf839595025_eventbpf__enemy_gun_ready__pf_Parms*)Obj)->bpp__shoot__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::NewProp_bpp__shoot__pf = { "bpp__shoot__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(gunner_enemy_C__pf839595025_eventbpf__enemy_gun_ready__pf_Parms), &Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::NewProp_bpp__shoot__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::NewProp_bpp__shoot__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "enemy_gun_ready" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agunner_enemy_C__pf839595025, nullptr, "enemy_gun_ready", nullptr, nullptr, sizeof(gunner_enemy_C__pf839595025_eventbpf__enemy_gun_ready__pf_Parms), Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf()
	{
		UObject* Outer = Z_Construct_UClass_Agunner_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "enemy_gun_ready" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics
	{
		struct gunner_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_gunner_enemy__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(gunner_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_gunner_enemy__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_gunner_enemy_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agunner_enemy_C__pf839595025, nullptr, "ExecuteUbergraph_gunner_enemy_1", nullptr, nullptr, sizeof(gunner_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_gunner_enemy__pf_1_Parms), Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_Agunner_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_gunner_enemy_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Agunner_enemy_C__pf839595025, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_Agunner_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Agunner_enemy_C__pf839595025_NoRegister()
	{
		return Agunner_enemy_C__pf839595025::StaticClass();
	}
	struct Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__gun__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__gun__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__stun__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__stun__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__guntimer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__guntimer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b2l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData[];
#endif
		static void NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__CallFunc_enemy_attack_hit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_MetaData[];
#endif
		static void NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemy_base_C__pf839595025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_fire__pf, "enemy_gun_fire" }, // 2221002053
		{ &Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__enemy_gun_ready__pf, "enemy_gun_ready" }, // 3935484408
		{ &Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ExecuteUbergraph_gunner_enemy__pf_1, "ExecuteUbergraph_gunner_enemy_1" }, // 666178731
		{ &Z_Construct_UFunction_Agunner_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 4077855077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "gunner_enemy__pf839595025.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "gunner_enemy_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/gunner_enemy.gunner_enemy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__gun__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "gun" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__gun__pf = { "gun", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agunner_enemy_C__pf839595025, bpv__gun__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__gun__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__gun__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stun" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "stun" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf = { "stun", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agunner_enemy_C__pf839595025, bpv__stun__pf), METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__guntimer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Guntimer" },
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "guntimer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__guntimer__pf = { "guntimer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agunner_enemy_C__pf839595025, bpv__guntimer__pf), METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__guntimer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__guntimer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Agunner_enemy_C__pf839595025, b2l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_enemy_attack_hit" },
	};
#endif
	void Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit(void* Obj)
	{
		((Agunner_enemy_C__pf839595025*)Obj)->b2l__CallFunc_enemy_attack_hit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf = { "CallFunc_enemy_attack_hit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Agunner_enemy_C__pf839595025), &Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/gunner_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_enemy_gun_ready_shoot" },
	};
#endif
	void Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_SetBit(void* Obj)
	{
		((Agunner_enemy_C__pf839595025*)Obj)->b2l__CallFunc_enemy_gun_ready_shoot__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf = { "CallFunc_enemy_gun_ready_shoot", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Agunner_enemy_C__pf839595025), &Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__gun__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_bpv__guntimer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_gun_ready_shoot__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agunner_enemy_C__pf839595025>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::ClassParams = {
		&Agunner_enemy_C__pf839595025::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agunner_enemy_C__pf839595025()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/gunner_enemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("gunner_enemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agunner_enemy_C__pf839595025_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Agunner_enemy_C__pf839595025, TEXT("gunner_enemy_C"), 2734813951);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Agunner_enemy_C__pf839595025>()
	{
		return Agunner_enemy_C__pf839595025::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agunner_enemy_C__pf839595025(Z_Construct_UClass_Agunner_enemy_C__pf839595025, &Agunner_enemy_C__pf839595025::StaticClass, TEXT("/Game/blueprints/monster/gunner_enemy"), TEXT("gunner_enemy_C"), true, TEXT("/Game/blueprints/monster/gunner_enemy"), TEXT("/Game/blueprints/monster/gunner_enemy.gunner_enemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agunner_enemy_C__pf839595025);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
