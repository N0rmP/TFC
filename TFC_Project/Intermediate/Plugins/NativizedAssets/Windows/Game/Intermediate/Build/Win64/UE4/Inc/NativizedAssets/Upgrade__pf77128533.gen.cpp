// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Upgrade__pf77128533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgrade__pf77128533() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUpgrade_C__pf77128533_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUpgrade_C__pf77128533();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUpgrade_C__pf77128533::execbpf__Upgrade_This__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__succeed__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Upgrade_This__pf(Z_Param_Out_bpp__succeed__pf);
		P_NATIVE_END;
	}
	void UUpgrade_C__pf77128533::StaticRegisterNativesUUpgrade_C__pf77128533()
	{
		UClass* Class = UUpgrade_C__pf77128533::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Upgrade_This", &UUpgrade_C__pf77128533::execbpf__Upgrade_This__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics
	{
		struct Upgrade_C__pf77128533_eventbpf__Upgrade_This__pf_Parms
		{
			bool bpp__succeed__pf;
		};
		static void NewProp_bpp__succeed__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__succeed__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::NewProp_bpp__succeed__pf_SetBit(void* Obj)
	{
		((Upgrade_C__pf77128533_eventbpf__Upgrade_This__pf_Parms*)Obj)->bpp__succeed__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::NewProp_bpp__succeed__pf = { "bpp__succeed__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Upgrade_C__pf77128533_eventbpf__Upgrade_This__pf_Parms), &Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::NewProp_bpp__succeed__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::NewProp_bpp__succeed__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "Upgrade_This" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpgrade_C__pf77128533, nullptr, "Upgrade_This", nullptr, nullptr, sizeof(Upgrade_C__pf77128533_eventbpf__Upgrade_This__pf_Parms), Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf()
	{
		UObject* Outer = Z_Construct_UClass_UUpgrade_C__pf77128533();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Upgrade_This" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUpgrade_C__pf77128533_NoRegister()
	{
		return UUpgrade_C__pf77128533::StaticClass();
	}
	struct Z_Construct_UClass_UUpgrade_C__pf77128533_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Cost__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Cost__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__Next_Upgrades__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Next_Upgrades__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__Next_Upgrades__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__prev_Upgrade__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__prev_Upgrade__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__upgrade_Tier__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__upgrade_Tier__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__upgraded__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__upgraded__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnCollection_C__pf3716123054,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpgrade_C__pf77128533_bpf__Upgrade_This__pf, "Upgrade_This" }, // 3902008377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Upgrade__pf77128533.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Upgrade_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Upgrade.Upgrade_C,/Game/blueprints/OnCollections/Upgrades/Upgrade2.Upgrade2_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Cost__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cost" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Cost" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Cost__pf = { "Cost", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade_C__pf77128533, bpv__Cost__pf), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Cost__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Cost__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf_Inner = { "bpv__Next_Upgrades__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Next Upgrades" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Next_Upgrades" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf = { "Next_Upgrades", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade_C__pf77128533, bpv__Next_Upgrades__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__prev_Upgrade__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Prev Upgrade" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "prev_Upgrade" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__prev_Upgrade__pf = { "prev_Upgrade", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade_C__pf77128533, bpv__prev_Upgrade__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__prev_Upgrade__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__prev_Upgrade__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgrade_Tier__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Upgrade Tier" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "upgrade_Tier" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgrade_Tier__pf = { "upgrade_Tier", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade_C__pf77128533, bpv__upgrade_Tier__pf), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgrade_Tier__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgrade_Tier__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgraded__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Upgraded" },
		{ "ModuleRelativePath", "Public/Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "upgraded" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgraded__pf = { "upgraded", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUpgrade_C__pf77128533, bpv__upgraded__pf), METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgraded__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgraded__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Cost__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__Next_Upgrades__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__prev_Upgrade__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgrade_Tier__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::NewProp_bpv__upgraded__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpgrade_C__pf77128533>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::ClassParams = {
		&UUpgrade_C__pf77128533::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpgrade_C__pf77128533()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Upgrade"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Upgrade_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpgrade_C__pf77128533_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UUpgrade_C__pf77128533, TEXT("Upgrade_C"), 26497091);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UUpgrade_C__pf77128533>()
	{
		return UUpgrade_C__pf77128533::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpgrade_C__pf77128533(Z_Construct_UClass_UUpgrade_C__pf77128533, &UUpgrade_C__pf77128533::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Upgrade"), TEXT("Upgrade_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Upgrade"), TEXT("/Game/blueprints/OnCollections/Upgrades/Upgrade.Upgrade_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpgrade_C__pf77128533);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
