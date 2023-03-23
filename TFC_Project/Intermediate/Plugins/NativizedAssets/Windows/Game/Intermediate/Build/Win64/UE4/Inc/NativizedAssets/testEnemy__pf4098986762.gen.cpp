// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/testEnemy__pf4098986762.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestEnemy__pf4098986762() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AtestEnemy_C__pf4098986762();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AtestEnemy_C__pf4098986762_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics
	{
		struct testEnemy_C__pf4098986762_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "OAISimpleDelegate__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "OAISimpleDelegate__DelegateSignature", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms), Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OAISimpleDelegate__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__OnFail_145877984D2002C566C355A759177180__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnFail_145877984D2002C566C355A759177180__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__OnSuccess_145877984D2002C566C355A759177180__pf)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_bpp__MovementResult__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__OnSuccess_145877984D2002C566C355A759177180__pf(EPathFollowingResult::Type(Z_Param_bpp__MovementResult__pf));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__Stop__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Stop__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__MoveNPC__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MoveNPC__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__ExecuteUbergraph_testEnemy__pf_2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_testEnemy__pf_2(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AtestEnemy_C__pf4098986762::execbpf__ExecuteUbergraph_testEnemy__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_testEnemy__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AtestEnemy_C__pf4098986762::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		testEnemy_C__pf4098986762_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf),&Parms);
	}
	void AtestEnemy_C__pf4098986762::StaticRegisterNativesAtestEnemy_C__pf4098986762()
	{
		UClass* Class = AtestEnemy_C__pf4098986762::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_testEnemy_0", &AtestEnemy_C__pf4098986762::execbpf__ExecuteUbergraph_testEnemy__pf_0 },
			{ "ExecuteUbergraph_testEnemy_2", &AtestEnemy_C__pf4098986762::execbpf__ExecuteUbergraph_testEnemy__pf_2 },
			{ "MoveNPC", &AtestEnemy_C__pf4098986762::execbpf__MoveNPC__pf },
			{ "OnFail_145877984D2002C566C355A759177180", &AtestEnemy_C__pf4098986762::execbpf__OnFail_145877984D2002C566C355A759177180__pf },
			{ "OnSuccess_145877984D2002C566C355A759177180", &AtestEnemy_C__pf4098986762::execbpf__OnSuccess_145877984D2002C566C355A759177180__pf },
			{ "ReceiveTick", &AtestEnemy_C__pf4098986762::execbpf__ReceiveTick__pf },
			{ "Stop", &AtestEnemy_C__pf4098986762::execbpf__Stop__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics
	{
		struct testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_testEnemy_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "ExecuteUbergraph_testEnemy_0", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_0_Parms), Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_testEnemy_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics
	{
		struct testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_2_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_2_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_testEnemy_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "ExecuteUbergraph_testEnemy_2", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_eventbpf__ExecuteUbergraph_testEnemy__pf_2_Parms), Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_testEnemy_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "MoveNPC" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "MoveNPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MoveNPC" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics
	{
		struct testEnemy_C__pf4098986762_eventbpf__OnFail_145877984D2002C566C355A759177180__pf_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_eventbpf__OnFail_145877984D2002C566C355A759177180__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "OnFail_145877984D2002C566C355A759177180" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "OnFail_145877984D2002C566C355A759177180", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_eventbpf__OnFail_145877984D2002C566C355A759177180__pf_Parms), Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnFail_145877984D2002C566C355A759177180" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics
	{
		struct testEnemy_C__pf4098986762_eventbpf__OnSuccess_145877984D2002C566C355A759177180__pf_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::NewProp_bpp__MovementResult__pf = { "bpp__MovementResult__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_eventbpf__OnSuccess_145877984D2002C566C355A759177180__pf_Parms, bpp__MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::NewProp_bpp__MovementResult__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "OnSuccess_145877984D2002C566C355A759177180" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "OnSuccess_145877984D2002C566C355A759177180", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_eventbpf__OnSuccess_145877984D2002C566C355A759177180__pf_Parms), Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "OnSuccess_145877984D2002C566C355A759177180" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(testEnemy_C__pf4098986762_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(testEnemy_C__pf4098986762_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "Stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AtestEnemy_C__pf4098986762, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf()
	{
		UObject* Outer = Z_Construct_UClass_AtestEnemy_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Stop" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AtestEnemy_C__pf4098986762_NoRegister()
	{
		return AtestEnemy_C__pf4098986762::StaticClass();
	}
	struct Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_MovementResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_CustomEvent_MovementResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____byte_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l_____byte_Variable__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_IsValid_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, "OAISimpleDelegate__DelegateSignature" }, // 857979993
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_0, "ExecuteUbergraph_testEnemy_0" }, // 210076582
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ExecuteUbergraph_testEnemy__pf_2, "ExecuteUbergraph_testEnemy_2" }, // 3440411956
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__MoveNPC__pf, "MoveNPC" }, // 3884528182
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnFail_145877984D2002C566C355A759177180__pf, "OnFail_145877984D2002C566C355A759177180" }, // 1538942058
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__OnSuccess_145877984D2002C566C355A759177180__pf, "OnSuccess_145877984D2002C566C355A759177180" }, // 3998008959
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3065792722
		{ &Z_Construct_UFunction_AtestEnemy_C__pf4098986762_bpf__Stop__pf, "Stop" }, // 1218428316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "testEnemy__pf4098986762.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "testEnemy_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/test/testEnemy.testEnemy_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Start" },
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "start" },
	};
#endif
	void Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf_SetBit(void* Obj)
	{
		((AtestEnemy_C__pf4098986762*)Obj)->bpv__start__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf = { "start", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtestEnemy_C__pf4098986762), &Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult_1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf = { "K2Node_CustomEvent_MovementResult_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__K2Node_CustomEvent_MovementResult_1__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_MovementResult" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult__pf = { "K2Node_CustomEvent_MovementResult", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__K2Node_CustomEvent_MovementResult__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate_1" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf = { "K2Node_CreateDelegate_OutputDelegate_1", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__K2Node_CreateDelegate_OutputDelegate_1__pf), Z_Construct_UDelegateFunction_AtestEnemy_C__pf4098986762___OAISimpleDelegate__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l_____byte_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "___byte_Variable" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l_____byte_Variable__pf = { "___byte_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l_____byte_Variable__pf), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l_____byte_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l_____byte_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsWithTag_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsWithTag_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf = { "CallFunc_GetAllActorsWithTag_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__CallFunc_GetAllActorsWithTag_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "CallFunc_CreateMoveToProxyObject_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = { "CallFunc_CreateMoveToProxyObject_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtestEnemy_C__pf4098986762, b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/testEnemy__pf4098986762.h" },
		{ "OverrideNativeName", "CallFunc_IsValid_ReturnValue" },
	};
#endif
	void Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_SetBit(void* Obj)
	{
		((AtestEnemy_C__pf4098986762*)Obj)->b0l__CallFunc_IsValid_ReturnValue__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf = { "CallFunc_IsValid_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtestEnemy_C__pf4098986762), &Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_bpv__start__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CustomEvent_MovementResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l_____byte_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_GetAllActorsWithTag_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::NewProp_b0l__CallFunc_IsValid_ReturnValue__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtestEnemy_C__pf4098986762>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::ClassParams = {
		&AtestEnemy_C__pf4098986762::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AtestEnemy_C__pf4098986762()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/test/testEnemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("testEnemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AtestEnemy_C__pf4098986762_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AtestEnemy_C__pf4098986762, TEXT("testEnemy_C"), 3590871848);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AtestEnemy_C__pf4098986762>()
	{
		return AtestEnemy_C__pf4098986762::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AtestEnemy_C__pf4098986762(Z_Construct_UClass_AtestEnemy_C__pf4098986762, &AtestEnemy_C__pf4098986762::StaticClass, TEXT("/Game/blueprints/monster/test/testEnemy"), TEXT("testEnemy_C"), true, TEXT("/Game/blueprints/monster/test/testEnemy"), TEXT("/Game/blueprints/monster/test/testEnemy.testEnemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtestEnemy_C__pf4098986762);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
