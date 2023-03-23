// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Suit_Upgrade3__pf3462679379.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuit_Upgrade3__pf3462679379() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USuit_Upgrade_C__pf77128533();
// End Cross Module References
	void USuit_Upgrade3_C__pf3462679379::StaticRegisterNativesUSuit_Upgrade3_C__pf3462679379()
	{
	}
	UClass* Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_NoRegister()
	{
		return USuit_Upgrade3_C__pf3462679379::StaticClass();
	}
	struct Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USuit_Upgrade_C__pf77128533,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Suit_Upgrade3__pf3462679379.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Suit_Upgrade3__pf3462679379.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Suit_Upgrade3_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3.Suit_Upgrade3_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USuit_Upgrade3_C__pf3462679379>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::ClassParams = {
		&USuit_Upgrade3_C__pf3462679379::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Suit_Upgrade3_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USuit_Upgrade3_C__pf3462679379, TEXT("Suit_Upgrade3_C"), 232329255);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USuit_Upgrade3_C__pf3462679379>()
	{
		return USuit_Upgrade3_C__pf3462679379::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuit_Upgrade3_C__pf3462679379(Z_Construct_UClass_USuit_Upgrade3_C__pf3462679379, &USuit_Upgrade3_C__pf3462679379::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3"), TEXT("Suit_Upgrade3_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3"), TEXT("/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3.Suit_Upgrade3_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuit_Upgrade3_C__pf3462679379);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
