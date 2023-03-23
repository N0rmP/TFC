// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AdvancedSlowEffect__pf2071825271.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSlowEffect__pf2071825271() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USlowEffect_C__pf2071825271();
// End Cross Module References
	void UAdvancedSlowEffect_C__pf2071825271::StaticRegisterNativesUAdvancedSlowEffect_C__pf2071825271()
	{
	}
	UClass* Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_NoRegister()
	{
		return UAdvancedSlowEffect_C__pf2071825271::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlowEffect_C__pf2071825271,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AdvancedSlowEffect__pf2071825271.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AdvancedSlowEffect__pf2071825271.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AdvancedSlowEffect_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect.AdvancedSlowEffect_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedSlowEffect_C__pf2071825271>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::ClassParams = {
		&UAdvancedSlowEffect_C__pf2071825271::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AdvancedSlowEffect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UAdvancedSlowEffect_C__pf2071825271, TEXT("AdvancedSlowEffect_C"), 2992707900);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UAdvancedSlowEffect_C__pf2071825271>()
	{
		return UAdvancedSlowEffect_C__pf2071825271::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedSlowEffect_C__pf2071825271(Z_Construct_UClass_UAdvancedSlowEffect_C__pf2071825271, &UAdvancedSlowEffect_C__pf2071825271::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect"), TEXT("AdvancedSlowEffect_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect"), TEXT("/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect.AdvancedSlowEffect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedSlowEffect_C__pf2071825271);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
