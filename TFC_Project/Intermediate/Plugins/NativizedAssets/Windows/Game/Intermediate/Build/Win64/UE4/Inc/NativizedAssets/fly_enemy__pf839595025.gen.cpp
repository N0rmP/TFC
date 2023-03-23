// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/fly_enemy__pf839595025.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefly_enemy__pf839595025() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Afly_enemy_C__pf839595025();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Afly_enemy_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics
	{
		struct fly_enemy_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(fly_enemy_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "OAISimpleDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afly_enemy_C__pf839595025, nullptr, "OAISimpleDelegate__DelegateSignature", nullptr, nullptr, sizeof(fly_enemy_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms), Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_Afly_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OAISimpleDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(Afly_enemy_C__pf839595025::execbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afly_enemy_C__pf839595025::execbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afly_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Afly_enemy_C__pf839595025::execbpf__ExecuteUbergraph_fly_enemy__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_fly_enemy__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void Afly_enemy_C__pf839595025::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void Afly_enemy_C__pf839595025::StaticRegisterNativesAfly_enemy_C__pf839595025()
	{
		UClass* Class = Afly_enemy_C__pf839595025::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_fly_enemy_0", &Afly_enemy_C__pf839595025::execbpf__ExecuteUbergraph_fly_enemy__pf_0 },
			{ "OnFail_B58E1F2F47F2AD115669DB9BB61D392B", &Afly_enemy_C__pf839595025::execbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf },
			{ "OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B", &Afly_enemy_C__pf839595025::execbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf },
			{ "ReceiveBeginPlay", &Afly_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics
	{
		struct fly_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_fly_enemy__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(fly_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_fly_enemy__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_fly_enemy_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afly_enemy_C__pf839595025, nullptr, "ExecuteUbergraph_fly_enemy_0", nullptr, nullptr, sizeof(fly_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_fly_enemy__pf_0_Parms), Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_Afly_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_fly_enemy_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics
	{
		struct fly_enemy_C__pf839595025_eventbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(fly_enemy_C__pf839595025_eventbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "OnFail_B58E1F2F47F2AD115669DB9BB61D392B" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afly_enemy_C__pf839595025, nullptr, "OnFail_B58E1F2F47F2AD115669DB9BB61D392B", nullptr, nullptr, sizeof(fly_enemy_C__pf839595025_eventbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms), Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf()
	{
		UObject* Outer = Z_Construct_UClass_Afly_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnFail_B58E1F2F47F2AD115669DB9BB61D392B" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics
	{
		struct fly_enemy_C__pf839595025_eventbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(fly_enemy_C__pf839595025_eventbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afly_enemy_C__pf839595025, nullptr, "OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B", nullptr, nullptr, sizeof(fly_enemy_C__pf839595025_eventbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Parms), Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf()
	{
		UObject* Outer = Z_Construct_UClass_Afly_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Afly_enemy_C__pf839595025, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_Afly_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Afly_enemy_C__pf839595025_NoRegister()
	{
		return Afly_enemy_C__pf839595025::StaticClass();
	}
	struct Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Range__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Range__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__stun__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__stun__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__decend_value__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__decend_value__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__haveTarget__pf_MetaData[];
#endif
		static void NewProp_bpv__haveTarget__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__haveTarget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TargetTower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TargetTower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__weakPointBreaked__pf_MetaData[];
#endif
		static void NewProp_bpv__weakPointBreaked__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__weakPointBreaked__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_CustomEvent_MovementResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b2l__K2Node_CustomEvent_MovementResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l_____byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b2l_____byte_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l_____int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b2l_____int_Array_Index_Variable__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_BreakTransform_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b2l__CallFunc_BreakTransform_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_BreakTransform_Rotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b2l__CallFunc_BreakTransform_Rotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_BreakTransform_Scale__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b2l__CallFunc_BreakTransform_Scale__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_DynamicCast_AsTower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__K2Node_DynamicCast_AsTower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l_____int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b2l_____int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_MetaData[];
#endif
		static void NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__CallFunc_IsValid_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemy_base_C__pf839595025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, "OAISimpleDelegate__DelegateSignature" }, // 1449154416
		{ &Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ExecuteUbergraph_fly_enemy__pf_0, "ExecuteUbergraph_fly_enemy_0" }, // 3208634952
		{ &Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf, "OnFail_B58E1F2F47F2AD115669DB9BB61D392B" }, // 583760817
		{ &Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf, "OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B" }, // 1026435147
		{ &Z_Construct_UFunction_Afly_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 435691797
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "fly_enemy__pf839595025.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "fly_enemy_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/fly_enemy.fly_enemy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__Range__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "Range" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__Range__pf = { "Range", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, bpv__Range__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__Range__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__Range__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stun" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "stun" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf = { "stun", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, bpv__stun__pf), METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__decend_value__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Decend Value" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "decend_value" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__decend_value__pf = { "decend_value", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, bpv__decend_value__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__decend_value__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__decend_value__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Have Target" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "haveTarget" },
	};
#endif
	void Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf_SetBit(void* Obj)
	{
		((Afly_enemy_C__pf839595025*)Obj)->bpv__haveTarget__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf = { "haveTarget", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afly_enemy_C__pf839595025), &Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__TargetTower__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target Tower" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TargetTower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__TargetTower__pf = { "TargetTower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, bpv__TargetTower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__TargetTower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__TargetTower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Weak Point Breaked" },
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "weakPointBreaked" },
	};
#endif
	void Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf_SetBit(void* Obj)
	{
		((Afly_enemy_C__pf839595025*)Obj)->bpv__weakPointBreaked__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf = { "weakPointBreaked", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afly_enemy_C__pf839595025), &Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult_1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf = { "K2Node_CustomEvent_MovementResult_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_CustomEvent_MovementResult_1__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult__pf = { "K2Node_CustomEvent_MovementResult", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_CustomEvent_MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate_1" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf = { "K2Node_CreateDelegate_OutputDelegate_1", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_CreateDelegate_OutputDelegate_1__pf), Z_Construct_UDelegateFunction_Afly_enemy_C__pf839595025___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "___byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____byte_Variable__pf = { "___byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l_____byte_Variable__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____byte_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "___int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Array_Index_Variable__pf = { "___int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l_____int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_enemy_attack_hit" },
	};
#endif
	void Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit(void* Obj)
	{
		((Afly_enemy_C__pf839595025*)Obj)->b2l__CallFunc_enemy_attack_hit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf = { "CallFunc_enemy_attack_hit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afly_enemy_C__pf839595025), &Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Location__pf = { "CallFunc_BreakTransform_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_BreakTransform_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Rotation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Rotation__pf = { "CallFunc_BreakTransform_Rotation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_BreakTransform_Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Rotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Rotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Scale__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_BreakTransform_Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Scale__pf = { "CallFunc_BreakTransform_Scale", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_BreakTransform_Scale__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Scale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Scale__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = { "b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_GetOverlappingActors_OverlappingActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf = { "CallFunc_GetOverlappingActors_OverlappingActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_AsTower__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsTower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_AsTower__pf = { "K2Node_DynamicCast_AsTower", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__K2Node_DynamicCast_AsTower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_AsTower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_AsTower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((Afly_enemy_C__pf839595025*)Obj)->b2l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afly_enemy_C__pf839595025), &Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "___int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Loop_Counter_Variable__pf = { "___int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l_____int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_CreateMoveToProxyObject_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = { "CallFunc_CreateMoveToProxyObject_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Afly_enemy_C__pf839595025, b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/fly_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_IsValid_ReturnValue" },
	};
#endif
	void Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj)
	{
		((Afly_enemy_C__pf839595025*)Obj)->b2l__CallFunc_IsValid_ReturnValue__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf = { "CallFunc_IsValid_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Afly_enemy_C__pf839595025), &Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__Range__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__decend_value__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__haveTarget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__TargetTower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_bpv__weakPointBreaked__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CustomEvent_MovementResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_CreateDelegate_OutputDelegate_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Rotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_BreakTransform_Scale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_GetOverlappingActors_OverlappingActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_AsTower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l_____int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_IsValid_ReturnValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Afly_enemy_C__pf839595025>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::ClassParams = {
		&Afly_enemy_C__pf839595025::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Afly_enemy_C__pf839595025()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/fly_enemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("fly_enemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Afly_enemy_C__pf839595025, TEXT("fly_enemy_C"), 31958487);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Afly_enemy_C__pf839595025>()
	{
		return Afly_enemy_C__pf839595025::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Afly_enemy_C__pf839595025(Z_Construct_UClass_Afly_enemy_C__pf839595025, &Afly_enemy_C__pf839595025::StaticClass, TEXT("/Game/blueprints/monster/fly_enemy"), TEXT("fly_enemy_C"), true, TEXT("/Game/blueprints/monster/fly_enemy"), TEXT("/Game/blueprints/monster/fly_enemy.fly_enemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Afly_enemy_C__pf839595025);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
