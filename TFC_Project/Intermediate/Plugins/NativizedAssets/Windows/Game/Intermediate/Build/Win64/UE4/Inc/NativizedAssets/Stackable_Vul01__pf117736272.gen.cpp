// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Stackable_Vul01__pf117736272.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackable_Vul01__pf117736272() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStackable_Vul01_C__pf117736272_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UStackable_Vul01_C__pf117736272();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272();
// End Cross Module References
	void UStackable_Vul01_C__pf117736272::StaticRegisterNativesUStackable_Vul01_C__pf117736272()
	{
	}
	UClass* Z_Construct_UClass_UStackable_Vul01_C__pf117736272_NoRegister()
	{
		return UStackable_Vul01_C__pf117736272::StaticClass();
	}
	struct Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVulnerableEffect_C__pf117736272,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Stackable_Vul01__pf117736272.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Stackable_Vul01__pf117736272.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Stackable_Vul01_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01.Stackable_Vul01_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStackable_Vul01_C__pf117736272>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::ClassParams = {
		&UStackable_Vul01_C__pf117736272::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStackable_Vul01_C__pf117736272()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Stackable_Vul01_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStackable_Vul01_C__pf117736272_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UStackable_Vul01_C__pf117736272, TEXT("Stackable_Vul01_C"), 1996341064);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UStackable_Vul01_C__pf117736272>()
	{
		return UStackable_Vul01_C__pf117736272::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStackable_Vul01_C__pf117736272(Z_Construct_UClass_UStackable_Vul01_C__pf117736272, &UStackable_Vul01_C__pf117736272::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01"), TEXT("Stackable_Vul01_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01"), TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01.Stackable_Vul01_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStackable_Vul01_C__pf117736272);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
