// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/enemy_base__pf839595025.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeenemy_base__pf839595025() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics
	{
		struct enemy_base_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__MovementResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "OAISimpleDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "OAISimpleDelegate__DelegateSignature", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms), Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OAISimpleDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__WeakPointBreak__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__WeakPointBreak__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__HitWeakPoint__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__dmg__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__HitWeakPoint__pf(Z_Param_bpp__dmg__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__CheckSlowRate__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CheckSlowRate__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__enemy_attack__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__damage__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__range__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__hit__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__enemy_attack__pf(Z_Param_bpp__damage__pf,Z_Param_bpp__range__pf,Z_Param_Out_bpp__hit__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__get_Target__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__chasextype__pfT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_Target__pf(Z_Param_bpp__chasextype__pfT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__enemy_init__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__enemy_init__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__MoveToTarget__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MoveToTarget__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__Stop__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__time__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Stop__pf(Z_Param_bpp__time__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aenemy_base_C__pf839595025::execbpf__ExecuteUbergraph_enemy_base__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_enemy_base__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void Aenemy_base_C__pf839595025::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		enemy_base_C__pf839595025_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf),&Parms);
	}
	void Aenemy_base_C__pf839595025::StaticRegisterNativesAenemy_base_C__pf839595025()
	{
		UClass* Class = Aenemy_base_C__pf839595025::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSlowRate", &Aenemy_base_C__pf839595025::execbpf__CheckSlowRate__pf },
			{ "enemy_attack", &Aenemy_base_C__pf839595025::execbpf__enemy_attack__pf },
			{ "enemy_init", &Aenemy_base_C__pf839595025::execbpf__enemy_init__pf },
			{ "ExecuteUbergraph_enemy_base_1", &Aenemy_base_C__pf839595025::execbpf__ExecuteUbergraph_enemy_base__pf_1 },
			{ "get_Target", &Aenemy_base_C__pf839595025::execbpf__get_Target__pf },
			{ "HitWeakPoint", &Aenemy_base_C__pf839595025::execbpf__HitWeakPoint__pf },
			{ "MoveToTarget", &Aenemy_base_C__pf839595025::execbpf__MoveToTarget__pf },
			{ "OnFail_59FAFF6A43C194E18E3711B31C93DBDF", &Aenemy_base_C__pf839595025::execbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf },
			{ "OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF", &Aenemy_base_C__pf839595025::execbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf },
			{ "ReceiveTick", &Aenemy_base_C__pf839595025::execbpf__ReceiveTick__pf },
			{ "Stop", &Aenemy_base_C__pf839595025::execbpf__Stop__pf },
			{ "WeakPointBreak", &Aenemy_base_C__pf839595025::execbpf__WeakPointBreak__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "CheckSlowRate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "CheckSlowRate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CheckSlowRate" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms
		{
			int32 bpp__damage__pf;
			float bpp__range__pf;
			bool bpp__hit__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__damage__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__range__pf;
		static void NewProp_bpp__hit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__hit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__damage__pf = { "bpp__damage__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms, bpp__damage__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__range__pf = { "bpp__range__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms, bpp__range__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__hit__pf_SetBit(void* Obj)
	{
		((enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms*)Obj)->bpp__hit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__hit__pf = { "bpp__hit__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms), &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__hit__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__damage__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__range__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::NewProp_bpp__hit__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "enemy_attack" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "enemy_attack", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__enemy_attack__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "enemy_attack" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "enemy_init" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "enemy_init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "enemy_init" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__ExecuteUbergraph_enemy_base__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__ExecuteUbergraph_enemy_base__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_enemy_base_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "ExecuteUbergraph_enemy_base_1", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__ExecuteUbergraph_enemy_base__pf_1_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_enemy_base_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__get_Target__pf_Parms
		{
			int32 bpp__chasextype__pfT;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__chasextype__pfT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::NewProp_bpp__chasextype__pfT = { "bpp__chasextype__pfT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__get_Target__pf_Parms, bpp__chasextype__pfT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::NewProp_bpp__chasextype__pfT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "get_Target" },
		{ "Tooltip", "0=\xeb\xaa\xa9\xed\x91\x9c \xec\x97\x86\xec\x9d\x8c,1=\xea\xb0\x80\xea\xb9\x8c\xec\x9a\xb4 \xea\xb2\x83 2=\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4,3=\xec\xbd\x94\xec\x96\xb4 \xec\x9a\xb0\xec\x84\xa0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "get_Target", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__get_Target__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_Target" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__HitWeakPoint__pf_Parms
		{
			int32 bpp__dmg__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__dmg__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::NewProp_bpp__dmg__pf = { "bpp__dmg__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__HitWeakPoint__pf_Parms, bpp__dmg__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::NewProp_bpp__dmg__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "HitWeakPoint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "HitWeakPoint", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__HitWeakPoint__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "HitWeakPoint" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "MoveToTarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "MoveToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MoveToTarget" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__MovementResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "OnFail_59FAFF6A43C194E18E3711B31C93DBDF" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "OnFail_59FAFF6A43C194E18E3711B31C93DBDF", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnFail_59FAFF6A43C194E18E3711B31C93DBDF" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpp__MovementResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics
	{
		struct enemy_base_C__pf839595025_eventbpf__Stop__pf_Parms
		{
			float bpp__time__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__time__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::NewProp_bpp__time__pf = { "bpp__time__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(enemy_base_C__pf839595025_eventbpf__Stop__pf_Parms, bpp__time__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::NewProp_bpp__time__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "Stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "Stop", nullptr, nullptr, sizeof(enemy_base_C__pf839595025_eventbpf__Stop__pf_Parms), Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Stop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "WeakPointBreak" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aenemy_base_C__pf839595025, nullptr, "WeakPointBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aenemy_base_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "WeakPointBreak" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister()
	{
		return Aenemy_base_C__pf839595025::StaticClass();
	}
	struct Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__start__pf_MetaData[];
#endif
		static void NewProp_bpv__start__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__start__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Target__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Target__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cndition__pf_MetaData[];
#endif
		static void NewProp_bpv__cndition__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__cndition__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__loop_checker__pf_MetaData[];
#endif
		static void NewProp_bpv__loop_checker__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__loop_checker__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__individual_max_hp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__individual_max_hp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WalkSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__WalkSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedCheckTImer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedCheckTImer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Electricity_Drop__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Electricity_Drop__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isHit__pf_MetaData[];
#endif
		static void NewProp_bpv__isHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__state__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__state__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpv__weakPoint__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__weakPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__weakPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__curxWeakPointHP__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__curxWeakPointHP__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_CustomEvent_MovementResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b1l__K2Node_CustomEvent_MovementResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l_____byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b1l_____byte_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_CustomEvent_time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_CustomEvent_time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_MetaData[];
#endif
		static void NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__CallFunc_IsValid_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Acreature_C__pf937085289,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, "OAISimpleDelegate__DelegateSignature" }, // 3712098092
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__CheckSlowRate__pf, "CheckSlowRate" }, // 1818986119
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_attack__pf, "enemy_attack" }, // 1947006955
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__enemy_init__pf, "enemy_init" }, // 3592581024
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ExecuteUbergraph_enemy_base__pf_1, "ExecuteUbergraph_enemy_base_1" }, // 2831639125
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__get_Target__pf, "get_Target" }, // 888113522
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__HitWeakPoint__pf, "HitWeakPoint" }, // 1408286618
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__MoveToTarget__pf, "MoveToTarget" }, // 2639361719
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf, "OnFail_59FAFF6A43C194E18E3711B31C93DBDF" }, // 1160519706
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf, "OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF" }, // 4219100668
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3824072653
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__Stop__pf, "Stop" }, // 3208265537
		{ &Z_Construct_UFunction_Aenemy_base_C__pf839595025_bpf__WeakPointBreak__pf, "WeakPointBreak" }, // 1120163237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "enemy_base__pf839595025.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "enemy_base_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/enemy_base.enemy_base_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Start" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "start" },
	};
#endif
	void Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf_SetBit(void* Obj)
	{
		((Aenemy_base_C__pf839595025*)Obj)->bpv__start__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf = { "start", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_base_C__pf839595025), &Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Target__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Target__pf = { "Target", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__Target__pf), Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Target__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Target__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cndition" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cndition" },
	};
#endif
	void Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf_SetBit(void* Obj)
	{
		((Aenemy_base_C__pf839595025*)Obj)->bpv__cndition__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf = { "cndition", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_base_C__pf839595025), &Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Loop Checker" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "loop_checker" },
	};
#endif
	void Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf_SetBit(void* Obj)
	{
		((Aenemy_base_C__pf839595025*)Obj)->bpv__loop_checker__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf = { "loop_checker", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_base_C__pf839595025), &Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__individual_max_hp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Individual Max Hp" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "individual_max_hp" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__individual_max_hp__pf = { "individual_max_hp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__individual_max_hp__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__individual_max_hp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__individual_max_hp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__WalkSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Walk Speed" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "WalkSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__WalkSpeed__pf = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__WalkSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__WalkSpeed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__WalkSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__SpeedCheckTImer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed Check TImer" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpeedCheckTImer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__SpeedCheckTImer__pf = { "SpeedCheckTImer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__SpeedCheckTImer__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__SpeedCheckTImer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__SpeedCheckTImer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Electricity_Drop__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Electricity Drop" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Electricity_Drop" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Electricity_Drop__pf = { "Electricity_Drop", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__Electricity_Drop__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Electricity_Drop__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Electricity_Drop__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Hit" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isHit" },
	};
#endif
	void Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf_SetBit(void* Obj)
	{
		((Aenemy_base_C__pf839595025*)Obj)->bpv__isHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf = { "isHit", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_base_C__pf839595025), &Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__state__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "State" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "state" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__state__pf = { "state", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__state__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__state__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__state__pf_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf_Inner = { "bpv__weakPoint__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Weak Point" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "weakPoint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf = { "weakPoint", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__weakPoint__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__curxWeakPointHP__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Weak Point HP" },
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur WeakPointHP" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__curxWeakPointHP__pfT = { "cur WeakPointHP", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, bpv__curxWeakPointHP__pfT), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__curxWeakPointHP__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__curxWeakPointHP__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult_1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf = { "K2Node_CustomEvent_MovementResult_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_CustomEvent_MovementResult_1__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult__pf = { "K2Node_CustomEvent_MovementResult", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_CustomEvent_MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate_1" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf = { "K2Node_CreateDelegate_OutputDelegate_1", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_CreateDelegate_OutputDelegate_1__pf), Z_Construct_UDelegateFunction_Aenemy_base_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l_____byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "___byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l_____byte_Variable__pf = { "___byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l_____byte_Variable__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l_____byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l_____byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_time__pf = { "K2Node_CustomEvent_time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_CustomEvent_time__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_CreateMoveToProxyObject_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = { "CallFunc_CreateMoveToProxyObject_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_IsValid_ReturnValue" },
	};
#endif
	void Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj)
	{
		((Aenemy_base_C__pf839595025*)Obj)->b1l__CallFunc_IsValid_ReturnValue__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf = { "CallFunc_IsValid_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Aenemy_base_C__pf839595025), &Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/enemy_base__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aenemy_base_C__pf839595025, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__start__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Target__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__cndition__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__loop_checker__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__individual_max_hp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__WalkSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__SpeedCheckTImer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__Electricity_Drop__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__isHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__state__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__weakPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_bpv__curxWeakPointHP__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_MovementResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CreateDelegate_OutputDelegate_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l_____byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_CustomEvent_time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__CallFunc_IsValid_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aenemy_base_C__pf839595025>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::ClassParams = {
		&Aenemy_base_C__pf839595025::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/enemy_base"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("enemy_base_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aenemy_base_C__pf839595025, TEXT("enemy_base_C"), 2855388575);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aenemy_base_C__pf839595025>()
	{
		return Aenemy_base_C__pf839595025::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aenemy_base_C__pf839595025(Z_Construct_UClass_Aenemy_base_C__pf839595025, &Aenemy_base_C__pf839595025::StaticClass, TEXT("/Game/blueprints/monster/enemy_base"), TEXT("enemy_base_C"), true, TEXT("/Game/blueprints/monster/enemy_base"), TEXT("/Game/blueprints/monster/enemy_base.enemy_base_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aenemy_base_C__pf839595025);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
