// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/normal_enemy__pf839595025.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodenormal_enemy__pf839595025() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Anormal_enemy_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Anormal_enemy_C__pf839595025();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025();
// End Cross Module References
	DEFINE_FUNCTION(Anormal_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Anormal_enemy_C__pf839595025::execbpf__ExecuteUbergraph_normal_enemy__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_normal_enemy__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void Anormal_enemy_C__pf839595025::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void Anormal_enemy_C__pf839595025::StaticRegisterNativesAnormal_enemy_C__pf839595025()
	{
		UClass* Class = Anormal_enemy_C__pf839595025::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_normal_enemy_0", &Anormal_enemy_C__pf839595025::execbpf__ExecuteUbergraph_normal_enemy__pf_0 },
			{ "ReceiveBeginPlay", &Anormal_enemy_C__pf839595025::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics
	{
		struct normal_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_normal_enemy__pf_0_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(normal_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_normal_enemy__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_normal_enemy_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Anormal_enemy_C__pf839595025, nullptr, "ExecuteUbergraph_normal_enemy_0", nullptr, nullptr, sizeof(normal_enemy_C__pf839595025_eventbpf__ExecuteUbergraph_normal_enemy__pf_0_Parms), Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_Anormal_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_normal_enemy_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Anormal_enemy_C__pf839595025, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_Anormal_enemy_C__pf839595025();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Anormal_enemy_C__pf839595025_NoRegister()
	{
		return Anormal_enemy_C__pf839595025::StaticClass();
	}
	struct Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__stun__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__stun__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b2l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData[];
#endif
		static void NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__CallFunc_enemy_attack_hit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aenemy_base_C__pf839595025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ExecuteUbergraph_normal_enemy__pf_0, "ExecuteUbergraph_normal_enemy_0" }, // 81490938
		{ &Z_Construct_UFunction_Anormal_enemy_C__pf839595025_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 620382801
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "normal_enemy__pf839595025.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "normal_enemy_C" },
		{ "ReplaceConverted", "/Game/blueprints/monster/normal_enemy.normal_enemy_C,/Game/blueprints/monster/enemy1.enemy1_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stun" },
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "stun" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf = { "stun", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Anormal_enemy_C__pf839595025, bpv__stun__pf), METADATA_PARAMS(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Anormal_enemy_C__pf839595025, b2l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/normal_enemy__pf839595025.h" },
		{ "OverrideNativeName", "CallFunc_enemy_attack_hit" },
	};
#endif
	void Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit(void* Obj)
	{
		((Anormal_enemy_C__pf839595025*)Obj)->b2l__CallFunc_enemy_attack_hit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf = { "CallFunc_enemy_attack_hit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Anormal_enemy_C__pf839595025), &Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_bpv__stun__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::NewProp_b2l__CallFunc_enemy_attack_hit__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Anormal_enemy_C__pf839595025>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::ClassParams = {
		&Anormal_enemy_C__pf839595025::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Anormal_enemy_C__pf839595025()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/monster/normal_enemy"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("normal_enemy_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Anormal_enemy_C__pf839595025_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Anormal_enemy_C__pf839595025, TEXT("normal_enemy_C"), 1581705203);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Anormal_enemy_C__pf839595025>()
	{
		return Anormal_enemy_C__pf839595025::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Anormal_enemy_C__pf839595025(Z_Construct_UClass_Anormal_enemy_C__pf839595025, &Anormal_enemy_C__pf839595025::StaticClass, TEXT("/Game/blueprints/monster/normal_enemy"), TEXT("normal_enemy_C"), true, TEXT("/Game/blueprints/monster/normal_enemy"), TEXT("/Game/blueprints/monster/normal_enemy.normal_enemy_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Anormal_enemy_C__pf839595025);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
