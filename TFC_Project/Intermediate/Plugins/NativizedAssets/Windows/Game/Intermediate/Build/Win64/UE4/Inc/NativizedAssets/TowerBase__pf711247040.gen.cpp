// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/TowerBase__pf711247040.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerBase__pf711247040() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATowerBase_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATowerBase_C__pf711247040();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATowerBase_C__pf711247040::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase_C__pf711247040::execbpf__BuildTower__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__Index__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BuildTower__pf(Z_Param_bpp__Index__pf);
		P_NATIVE_END;
	}
	static FName NAME_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ATowerBase_C__pf711247040::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ATowerBase_C__pf711247040::StaticRegisterNativesATowerBase_C__pf711247040()
	{
		UClass* Class = ATowerBase_C__pf711247040::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildTower", &ATowerBase_C__pf711247040::execbpf__BuildTower__pf },
			{ "ReceiveBeginPlay", &ATowerBase_C__pf711247040::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics
	{
		struct TowerBase_C__pf711247040_eventbpf__BuildTower__pf_Parms
		{
			int32 bpp__Index__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__Index__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::NewProp_bpp__Index__pf = { "bpp__Index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(TowerBase_C__pf711247040_eventbpf__BuildTower__pf_Parms, bpp__Index__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::NewProp_bpp__Index__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "BuildTower" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase_C__pf711247040, nullptr, "BuildTower", nullptr, nullptr, sizeof(TowerBase_C__pf711247040_eventbpf__BuildTower__pf_Parms), Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATowerBase_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BuildTower" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase_C__pf711247040, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATowerBase_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATowerBase_C__pf711247040_NoRegister()
	{
		return ATowerBase_C__pf711247040::StaticClass();
	}
	struct Z_Construct_UClass_ATowerBase_C__pf711247040_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpawnPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Body__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Body__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Index__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_Index__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__BuildTower__pf, "BuildTower" }, // 2506613306
		{ &Z_Construct_UFunction_ATowerBase_C__pf711247040_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2079739881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TowerBase__pf711247040.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "TowerBase_C" },
		{ "ReplaceConverted", "/Game/blueprints/Tower/TowerBase.TowerBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__SpawnPoint__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "SpawnPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__SpawnPoint__pf = { "SpawnPoint", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, bpv__SpawnPoint__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__SpawnPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__SpawnPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "Body" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Body__pf = { "Body", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, bpv__Body__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tower" },
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Tower__pf = { "Tower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, bpv__Tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_Index__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_Index__pf = { "K2Node_CustomEvent_Index", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, b0l__K2Node_CustomEvent_Index__pf), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_Index__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_Index__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_SwitchInteger_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit(void* Obj)
	{
		((ATowerBase_C__pf711247040*)Obj)->b0l__K2Node_SwitchInteger_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf = { "K2Node_SwitchInteger_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATowerBase_C__pf711247040), &Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf = { "K2Node_DynamicCast_AsMain_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf), Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ATowerBase_C__pf711247040*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATowerBase_C__pf711247040), &Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/TowerBase__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_get_tower_manager_tower_manager_return" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf = { "CallFunc_get_tower_manager_tower_manager_return", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATowerBase_C__pf711247040, b0l__CallFunc_get_tower_manager_tower_manager_return__pf), Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__SpawnPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Body__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_bpv__Tower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_Index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_SwitchInteger_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::NewProp_b0l__CallFunc_get_tower_manager_tower_manager_return__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerBase_C__pf711247040>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::ClassParams = {
		&ATowerBase_C__pf711247040::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerBase_C__pf711247040()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/Tower/TowerBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("TowerBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerBase_C__pf711247040_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATowerBase_C__pf711247040, TEXT("TowerBase_C"), 3069415401);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATowerBase_C__pf711247040>()
	{
		return ATowerBase_C__pf711247040::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerBase_C__pf711247040(Z_Construct_UClass_ATowerBase_C__pf711247040, &ATowerBase_C__pf711247040::StaticClass, TEXT("/Game/blueprints/Tower/TowerBase"), TEXT("TowerBase_C"), true, TEXT("/Game/blueprints/Tower/TowerBase"), TEXT("/Game/blueprints/Tower/TowerBase.TowerBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerBase_C__pf711247040);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
