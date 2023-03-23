// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AoETower__pf711247040.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAoETower__pf711247040() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAoETower_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAoETower_C__pf711247040();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoeModule1_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoEModule2_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoEModule3_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoEModule4_C__pf2556257598_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAoETower_C__pf711247040::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAoETower_C__pf711247040::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf),NULL);
	}
	void AAoETower_C__pf711247040::StaticRegisterNativesAAoETower_C__pf711247040()
	{
		UClass* Class = AAoETower_C__pf711247040::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UserConstructionScript", &AAoETower_C__pf711247040::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAoETower_C__pf711247040, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAoETower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAoETower_C__pf711247040_NoRegister()
	{
		return AAoETower_C__pf711247040::StaticClass();
	}
	struct Z_Construct_UClass_AAoETower_C__pf711247040_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Module1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Module1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Module2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Module2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Module3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Module3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Module4__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Module4__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAoETower_C__pf711247040_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATower_C__pf711247040,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAoETower_C__pf711247040_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAoETower_C__pf711247040_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 3348820536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AoETower__pf711247040.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AoETower_C" },
		{ "ReplaceConverted", "/Game/blueprints/Tower/AoETower.AoETower_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, bpv__Sphere__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module 1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Module1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module1__pf = { "Module1", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, bpv__Module1__pf), Z_Construct_UClass_UAoeModule1_C__pf2556257598_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module2__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module 2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Module2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module2__pf = { "Module2", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, bpv__Module2__pf), Z_Construct_UClass_UAoEModule2_C__pf2556257598_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module3__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module 3" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Module3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module3__pf = { "Module3", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, bpv__Module3__pf), Z_Construct_UClass_UAoEModule3_C__pf2556257598_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module4__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module 4" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Module4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module4__pf = { "Module4", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, bpv__Module4__pf), Z_Construct_UClass_UAoEModule4_C__pf2556257598_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsEnemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf = { "K2Node_DynamicCast_AsEnemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_DynamicCast_AsEnemy_Base__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AAoETower_C__pf711247040*)Obj)->b1l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAoETower_C__pf711247040), &Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = { "b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoETower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_GetOverlappingActors_OverlappingActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf = { "CallFunc_GetOverlappingActors_OverlappingActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoETower_C__pf711247040, b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAoETower_C__pf711247040_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_bpv__Module4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_AsEnemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoETower_C__pf711247040_Statics::NewProp_b1l__CallFunc_GetOverlappingActors_OverlappingActors__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAoETower_C__pf711247040_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAoETower_C__pf711247040>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAoETower_C__pf711247040_Statics::ClassParams = {
		&AAoETower_C__pf711247040::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAoETower_C__pf711247040_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAoETower_C__pf711247040_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAoETower_C__pf711247040()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/Tower/AoETower"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AoETower_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAoETower_C__pf711247040_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AAoETower_C__pf711247040, TEXT("AoETower_C"), 2390358665);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AAoETower_C__pf711247040>()
	{
		return AAoETower_C__pf711247040::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAoETower_C__pf711247040(Z_Construct_UClass_AAoETower_C__pf711247040, &AAoETower_C__pf711247040::StaticClass, TEXT("/Game/blueprints/Tower/AoETower"), TEXT("AoETower_C"), true, TEXT("/Game/blueprints/Tower/AoETower"), TEXT("/Game/blueprints/Tower/AoETower.AoETower_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAoETower_C__pf711247040);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
