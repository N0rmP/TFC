// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/upgrade_Manager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeupgrade_Manager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBase_Upgrade_C__pf77128533_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUpgrade_C__pf77128533_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Aupgrade_Manager_C__pf3789721252::execbpf__InitxUpgrades__pfT)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__upgrade__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InitxUpgrades__pfT(Z_Param_bpp__upgrade__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aupgrade_Manager_C__pf3789721252::execbpf__Upgrade__pf)
	{
		P_GET_OBJECT(UUpgrade_C__pf77128533,Z_Param_bpp__Upgrade__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__succeed__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Upgrade__pf(Z_Param_bpp__Upgrade__pf,Z_Param_Out_bpp__succeed__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aupgrade_Manager_C__pf3789721252::execbpf__get_Upgraded__pf)
	{
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_bpp__upgraded__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_Upgraded__pf(Z_Param_Out_bpp__upgraded__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aupgrade_Manager_C__pf3789721252::execbpf__get_Upgrade_Tree__pf)
	{
		P_GET_OBJECT_REF(UBase_Upgrade_C__pf77128533,Z_Param_Out_bpp__tree__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_Upgrade_Tree__pf(Z_Param_Out_bpp__tree__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aupgrade_Manager_C__pf3789721252::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void Aupgrade_Manager_C__pf3789721252::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void Aupgrade_Manager_C__pf3789721252::StaticRegisterNativesAupgrade_Manager_C__pf3789721252()
	{
		UClass* Class = Aupgrade_Manager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "get_Upgrade_Tree", &Aupgrade_Manager_C__pf3789721252::execbpf__get_Upgrade_Tree__pf },
			{ "get_Upgraded", &Aupgrade_Manager_C__pf3789721252::execbpf__get_Upgraded__pf },
			{ "Init Upgrades", &Aupgrade_Manager_C__pf3789721252::execbpf__InitxUpgrades__pfT },
			{ "ReceiveBeginPlay", &Aupgrade_Manager_C__pf3789721252::execbpf__ReceiveBeginPlay__pf },
			{ "Upgrade", &Aupgrade_Manager_C__pf3789721252::execbpf__Upgrade__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics
	{
		struct upgrade_Manager_C__pf3789721252_eventbpf__get_Upgrade_Tree__pf_Parms
		{
			UBase_Upgrade_C__pf77128533* bpp__tree__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__tree__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tree__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::NewProp_bpp__tree__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::NewProp_bpp__tree__pf = { "bpp__tree__pf", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(upgrade_Manager_C__pf3789721252_eventbpf__get_Upgrade_Tree__pf_Parms, bpp__tree__pf), Z_Construct_UClass_UBase_Upgrade_C__pf77128533_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::NewProp_bpp__tree__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::NewProp_bpp__tree__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::NewProp_bpp__tree__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_Upgrade_Tree" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, nullptr, "get_Upgrade_Tree", nullptr, nullptr, sizeof(upgrade_Manager_C__pf3789721252_eventbpf__get_Upgrade_Tree__pf_Parms), Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_Upgrade_Tree" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics
	{
		struct upgrade_Manager_C__pf3789721252_eventbpf__get_Upgraded__pf_Parms
		{
			TArray<UClass*> bpp__upgraded__pf;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__upgraded__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__upgraded__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::NewProp_bpp__upgraded__pf_Inner = { "bpp__upgraded__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::NewProp_bpp__upgraded__pf = { "bpp__upgraded__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(upgrade_Manager_C__pf3789721252_eventbpf__get_Upgraded__pf_Parms, bpp__upgraded__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::NewProp_bpp__upgraded__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::NewProp_bpp__upgraded__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_Upgraded" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, nullptr, "get_Upgraded", nullptr, nullptr, sizeof(upgrade_Manager_C__pf3789721252_eventbpf__get_Upgraded__pf_Parms), Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_Upgraded" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics
	{
		struct upgrade_Manager_C__pf3789721252_eventbpf__InitxUpgrades__pfT_Parms
		{
			UClass* bpp__upgrade__pf;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__upgrade__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::NewProp_bpp__upgrade__pf = { "bpp__upgrade__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(upgrade_Manager_C__pf3789721252_eventbpf__InitxUpgrades__pfT_Parms, bpp__upgrade__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::NewProp_bpp__upgrade__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "Init Upgrades" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, nullptr, "Init Upgrades", nullptr, nullptr, sizeof(upgrade_Manager_C__pf3789721252_eventbpf__InitxUpgrades__pfT_Parms), Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT()
	{
		UObject* Outer = Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Init Upgrades" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics
	{
		struct upgrade_Manager_C__pf3789721252_eventbpf__Upgrade__pf_Parms
		{
			UUpgrade_C__pf77128533* bpp__Upgrade__pf;
			bool bpp__succeed__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Upgrade__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Upgrade__pf;
		static void NewProp_bpp__succeed__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__succeed__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__Upgrade__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__Upgrade__pf = { "bpp__Upgrade__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(upgrade_Manager_C__pf3789721252_eventbpf__Upgrade__pf_Parms, bpp__Upgrade__pf), Z_Construct_UClass_UUpgrade_C__pf77128533_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__Upgrade__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__Upgrade__pf_MetaData)) };
	void Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__succeed__pf_SetBit(void* Obj)
	{
		((upgrade_Manager_C__pf3789721252_eventbpf__Upgrade__pf_Parms*)Obj)->bpp__succeed__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__succeed__pf = { "bpp__succeed__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(upgrade_Manager_C__pf3789721252_eventbpf__Upgrade__pf_Parms), &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__succeed__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__Upgrade__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::NewProp_bpp__succeed__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "Upgrade" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, nullptr, "Upgrade", nullptr, nullptr, sizeof(upgrade_Manager_C__pf3789721252_eventbpf__Upgrade__pf_Parms), Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Upgrade" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_NoRegister()
	{
		return Aupgrade_Manager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__root_Upgrade__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__root_Upgrade__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgrade_Tree__pf, "get_Upgrade_Tree" }, // 1777667618
		{ &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__get_Upgraded__pf, "get_Upgraded" }, // 3077344180
		{ &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__InitxUpgrades__pfT, "Init Upgrades" }, // 3394719743
		{ &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 435200671
		{ &Z_Construct_UFunction_Aupgrade_Manager_C__pf3789721252_bpf__Upgrade__pf, "Upgrade" }, // 2836885231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "upgrade_Manager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "upgrade_Manager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/upgrade_Manager.upgrade_Manager_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aupgrade_Manager_C__pf3789721252, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__root_Upgrade__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Root Upgrade" },
		{ "ModuleRelativePath", "Public/upgrade_Manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "root_Upgrade" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__root_Upgrade__pf = { "root_Upgrade", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aupgrade_Manager_C__pf3789721252, bpv__root_Upgrade__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__root_Upgrade__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__root_Upgrade__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::NewProp_bpv__root_Upgrade__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aupgrade_Manager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::ClassParams = {
		&Aupgrade_Manager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/upgrade_Manager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("upgrade_Manager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aupgrade_Manager_C__pf3789721252, TEXT("upgrade_Manager_C"), 138801422);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aupgrade_Manager_C__pf3789721252>()
	{
		return Aupgrade_Manager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aupgrade_Manager_C__pf3789721252(Z_Construct_UClass_Aupgrade_Manager_C__pf3789721252, &Aupgrade_Manager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/upgrade_Manager"), TEXT("upgrade_Manager_C"), true, TEXT("/Game/blueprints/others/Observer/upgrade_Manager"), TEXT("/Game/blueprints/others/Observer/upgrade_Manager.upgrade_Manager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aupgrade_Manager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
