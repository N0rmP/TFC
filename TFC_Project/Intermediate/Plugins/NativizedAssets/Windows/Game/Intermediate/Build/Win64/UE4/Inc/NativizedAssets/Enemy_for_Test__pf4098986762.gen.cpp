// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Enemy_for_Test__pf4098986762.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_for_Test__pf4098986762() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy_for_Test_C__pf4098986762::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AEnemy_for_Test_C__pf4098986762::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AEnemy_for_Test_C__pf4098986762::StaticRegisterNativesAEnemy_for_Test_C__pf4098986762()
	{
		UClass* Class = AEnemy_for_Test_C__pf4098986762::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AEnemy_for_Test_C__pf4098986762::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Enemy_for_Test__pf4098986762.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_NoRegister()
	{
		return AEnemy_for_Test_C__pf4098986762::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Cube__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Cube__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b2l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemy_base_C__pf839595025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_for_Test_C__pf4098986762_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2176016164
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy_for_Test__pf4098986762.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Enemy_for_Test__pf4098986762.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Enemy_for_Test_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/test/Enemy_for_Test.Enemy_for_Test_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_bpv__Cube__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy_for_Test__pf4098986762.h" },
		{ "OverrideNativeName", "Cube" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_bpv__Cube__pf = { "Cube", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_for_Test_C__pf4098986762, bpv__Cube__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_bpv__Cube__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_bpv__Cube__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy_for_Test__pf4098986762.h" },
		{ "OverrideNativeName", "CallFunc_get_cur_hp_cur_hp_res" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf = { "CallFunc_get_cur_hp_cur_hp_res", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_for_Test_C__pf4098986762, b2l__CallFunc_get_cur_hp_cur_hp_res__pf), METADATA_PARAMS(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy_for_Test__pf4098986762.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_for_Test_C__pf4098986762, b2l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_bpv__Cube__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__CallFunc_get_cur_hp_cur_hp_res__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_for_Test_C__pf4098986762>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::ClassParams = {
		&AEnemy_for_Test_C__pf4098986762::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/test/Enemy_for_Test"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Enemy_for_Test_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AEnemy_for_Test_C__pf4098986762, TEXT("Enemy_for_Test_C"), 2156039226);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AEnemy_for_Test_C__pf4098986762>()
	{
		return AEnemy_for_Test_C__pf4098986762::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_for_Test_C__pf4098986762(Z_Construct_UClass_AEnemy_for_Test_C__pf4098986762, &AEnemy_for_Test_C__pf4098986762::StaticClass, TEXT("/Game/blueprints/monster/test/Enemy_for_Test"), TEXT("Enemy_for_Test_C"), true, TEXT("/Game/blueprints/monster/test/Enemy_for_Test"), TEXT("/Game/blueprints/monster/test/Enemy_for_Test.Enemy_for_Test_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_for_Test_C__pf4098986762);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
