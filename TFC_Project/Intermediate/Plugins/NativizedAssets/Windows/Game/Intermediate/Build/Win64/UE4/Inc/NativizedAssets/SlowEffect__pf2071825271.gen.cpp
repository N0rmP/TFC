// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/SlowEffect__pf2071825271.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowEffect__pf2071825271() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlowEffect_C__pf2071825271_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlowEffect_C__pf2071825271();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffect_C__pf3439682450();
// End Cross Module References
	DEFINE_FUNCTION(USlowEffect_C__pf2071825271::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void USlowEffect_C__pf2071825271::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void USlowEffect_C__pf2071825271::StaticRegisterNativesUSlowEffect_C__pf2071825271()
	{
		UClass* Class = USlowEffect_C__pf2071825271::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &USlowEffect_C__pf2071825271::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** t * Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayt * or when the component is dynamically created if the Actor has already BegunPlay. t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/SlowEffect__pf2071825271.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlowEffect_C__pf2071825271, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_USlowEffect_C__pf2071825271();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USlowEffect_C__pf2071825271_NoRegister()
	{
		return USlowEffect_C__pf2071825271::StaticClass();
	}
	struct Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlowRate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SlowRate__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffect_C__pf3439682450,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlowEffect_C__pf2071825271_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 257459528
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SlowEffect__pf2071825271.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SlowEffect__pf2071825271.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "SlowEffect_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect.SlowEffect_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::NewProp_bpv__SlowRate__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slow Rate" },
		{ "ModuleRelativePath", "Public/SlowEffect__pf2071825271.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlowRate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::NewProp_bpv__SlowRate__pf = { "SlowRate", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlowEffect_C__pf2071825271, bpv__SlowRate__pf), METADATA_PARAMS(Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::NewProp_bpv__SlowRate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::NewProp_bpv__SlowRate__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::NewProp_bpv__SlowRate__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlowEffect_C__pf2071825271>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::ClassParams = {
		&USlowEffect_C__pf2071825271::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlowEffect_C__pf2071825271()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SlowEffect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlowEffect_C__pf2071825271_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USlowEffect_C__pf2071825271, TEXT("SlowEffect_C"), 2355007235);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USlowEffect_C__pf2071825271>()
	{
		return USlowEffect_C__pf2071825271::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlowEffect_C__pf2071825271(Z_Construct_UClass_USlowEffect_C__pf2071825271, &USlowEffect_C__pf2071825271::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect"), TEXT("SlowEffect_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect"), TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect.SlowEffect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlowEffect_C__pf2071825271);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
