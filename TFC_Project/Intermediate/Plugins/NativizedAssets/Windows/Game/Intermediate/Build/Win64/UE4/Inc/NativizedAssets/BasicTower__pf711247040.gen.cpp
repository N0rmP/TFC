// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BasicTower__pf711247040.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicTower__pf711247040() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABasicTower_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABasicTower_C__pf711247040();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABasicTower_C__pf711247040::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABasicTower_C__pf711247040::execbpf__CustomEvent_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CustomEvent_0__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABasicTower_C__pf711247040::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf),NULL);
	}
	void ABasicTower_C__pf711247040::StaticRegisterNativesABasicTower_C__pf711247040()
	{
		UClass* Class = ABasicTower_C__pf711247040::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomEvent_0", &ABasicTower_C__pf711247040::execbpf__CustomEvent_0__pf },
			{ "UserConstructionScript", &ABasicTower_C__pf711247040::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "CustomEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicTower_C__pf711247040, nullptr, "CustomEvent_0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABasicTower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CustomEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABasicTower_C__pf711247040, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABasicTower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABasicTower_C__pf711247040_NoRegister()
	{
		return ABasicTower_C__pf711247040::StaticClass();
	}
	struct Z_Construct_UClass_ABasicTower_C__pf711247040_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__anotherbasictowers__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__anotherbasictowers__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l_____int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l_____int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b1l__CallFunc_get_towers_list_towers_res__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l_____int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b1l_____int_Loop_Counter_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATower_C__pf711247040,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__CustomEvent_0__pf, "CustomEvent_0" }, // 2946530711
		{ &Z_Construct_UFunction_ABasicTower_C__pf711247040_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1004125920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasicTower__pf711247040.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BasicTower_C" },
		{ "ReplaceConverted", "/Game/blueprints/Tower/BasicTower.BasicTower_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, bpv__Sphere__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__anotherbasictowers__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Anotherbasictowers" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "anotherbasictowers" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__anotherbasictowers__pf = { "anotherbasictowers", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, bpv__anotherbasictowers__pf), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__anotherbasictowers__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__anotherbasictowers__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "___int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Array_Index_Variable__pf = { "___int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l_____int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsEnemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf = { "K2Node_DynamicCast_AsEnemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_DynamicCast_AsEnemy_Base__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABasicTower_C__pf711247040*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasicTower_C__pf711247040), &Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf = { "K2Node_DynamicCast_AsMain_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf), Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABasicTower_C__pf711247040*)Obj)->b1l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasicTower_C__pf711247040), &Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_get_tower_manager_tower_manager_return" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf = { "CallFunc_get_tower_manager_tower_manager_return", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__CallFunc_get_tower_manager_tower_manager_return__pf), Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_Inner = { "b1l__CallFunc_get_towers_list_towers_res__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_get_towers_list_towers_res" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf = { "CallFunc_get_towers_list_towers_res", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__CallFunc_get_towers_list_towers_res__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBasic_Tower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf = { "K2Node_DynamicCast_AsBasic_Tower", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l__K2Node_DynamicCast_AsBasic_Tower__pf), Z_Construct_UClass_ABasicTower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ABasicTower_C__pf711247040*)Obj)->b1l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABasicTower_C__pf711247040), &Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicTower__pf711247040.h" },
		{ "OverrideNativeName", "___int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Loop_Counter_Variable__pf = { "___int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicTower_C__pf711247040, b1l_____int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Loop_Counter_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_bpv__anotherbasictowers__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_tower_manager_tower_manager_return__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_get_towers_list_towers_res__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsBasic_Tower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::NewProp_b1l_____int_Loop_Counter_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicTower_C__pf711247040>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::ClassParams = {
		&ABasicTower_C__pf711247040::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicTower_C__pf711247040()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/Tower/BasicTower"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BasicTower_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicTower_C__pf711247040_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABasicTower_C__pf711247040, TEXT("BasicTower_C"), 3242171659);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABasicTower_C__pf711247040>()
	{
		return ABasicTower_C__pf711247040::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicTower_C__pf711247040(Z_Construct_UClass_ABasicTower_C__pf711247040, &ABasicTower_C__pf711247040::StaticClass, TEXT("/Game/blueprints/Tower/BasicTower"), TEXT("BasicTower_C"), true, TEXT("/Game/blueprints/Tower/BasicTower"), TEXT("/Game/blueprints/Tower/BasicTower.BasicTower_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicTower_C__pf711247040);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
