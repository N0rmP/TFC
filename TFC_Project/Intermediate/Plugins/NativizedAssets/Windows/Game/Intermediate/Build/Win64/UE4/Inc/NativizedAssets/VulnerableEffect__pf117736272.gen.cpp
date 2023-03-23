// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/VulnerableEffect__pf117736272.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVulnerableEffect__pf117736272() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffect_C__pf3439682450();
// End Cross Module References
	void UVulnerableEffect_C__pf117736272::StaticRegisterNativesUVulnerableEffect_C__pf117736272()
	{
	}
	UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272_NoRegister()
	{
		return UVulnerableEffect_C__pf117736272::StaticClass();
	}
	struct Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Vulnerability__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Vulnerability__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffect_C__pf3439682450,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VulnerableEffect__pf117736272.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VulnerableEffect__pf117736272.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "VulnerableEffect_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect.VulnerableEffect_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::NewProp_bpv__Vulnerability__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Vulnerability" },
		{ "ModuleRelativePath", "Public/VulnerableEffect__pf117736272.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Vulnerability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::NewProp_bpv__Vulnerability__pf = { "Vulnerability", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVulnerableEffect_C__pf117736272, bpv__Vulnerability__pf), METADATA_PARAMS(Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::NewProp_bpv__Vulnerability__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::NewProp_bpv__Vulnerability__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::NewProp_bpv__Vulnerability__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVulnerableEffect_C__pf117736272>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::ClassParams = {
		&UVulnerableEffect_C__pf117736272::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("VulnerableEffect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVulnerableEffect_C__pf117736272_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UVulnerableEffect_C__pf117736272, TEXT("VulnerableEffect_C"), 1054235648);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UVulnerableEffect_C__pf117736272>()
	{
		return UVulnerableEffect_C__pf117736272::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVulnerableEffect_C__pf117736272(Z_Construct_UClass_UVulnerableEffect_C__pf117736272, &UVulnerableEffect_C__pf117736272::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect"), TEXT("VulnerableEffect_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect"), TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect.VulnerableEffect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVulnerableEffect_C__pf117736272);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
