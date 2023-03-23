// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Rifle_Upgrade2__pf1870350606.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle_Upgrade2__pf1870350606() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URifle_Upgrade_C__pf77128533();
// End Cross Module References
	void URifle_Upgrade2_C__pf1870350606::StaticRegisterNativesURifle_Upgrade2_C__pf1870350606()
	{
	}
	UClass* Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_NoRegister()
	{
		return URifle_Upgrade2_C__pf1870350606::StaticClass();
	}
	struct Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URifle_Upgrade_C__pf77128533,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rifle_Upgrade2__pf1870350606.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rifle_Upgrade2__pf1870350606.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Rifle_Upgrade2_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade2.Rifle_Upgrade2_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URifle_Upgrade2_C__pf1870350606>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::ClassParams = {
		&URifle_Upgrade2_C__pf1870350606::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade2"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Rifle_Upgrade2_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(URifle_Upgrade2_C__pf1870350606, TEXT("Rifle_Upgrade2_C"), 1915441448);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<URifle_Upgrade2_C__pf1870350606>()
	{
		return URifle_Upgrade2_C__pf1870350606::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URifle_Upgrade2_C__pf1870350606(Z_Construct_UClass_URifle_Upgrade2_C__pf1870350606, &URifle_Upgrade2_C__pf1870350606::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade2"), TEXT("Rifle_Upgrade2_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade2"), TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade2.Rifle_Upgrade2_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URifle_Upgrade2_C__pf1870350606);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
