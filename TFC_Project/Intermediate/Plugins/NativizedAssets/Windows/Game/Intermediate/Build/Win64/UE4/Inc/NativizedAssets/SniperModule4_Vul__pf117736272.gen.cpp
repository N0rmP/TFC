// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/SniperModule4_Vul__pf117736272.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSniperModule4_Vul__pf117736272() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_USniperModule4_Vul_C__pf117736272();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UVulnerableEffect_C__pf117736272();
// End Cross Module References
	void USniperModule4_Vul_C__pf117736272::StaticRegisterNativesUSniperModule4_Vul_C__pf117736272()
	{
	}
	UClass* Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_NoRegister()
	{
		return USniperModule4_Vul_C__pf117736272::StaticClass();
	}
	struct Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVulnerableEffect_C__pf117736272,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SniperModule4_Vul__pf117736272.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SniperModule4_Vul__pf117736272.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "SniperModule4_Vul_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul.SniperModule4_Vul_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USniperModule4_Vul_C__pf117736272>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::ClassParams = {
		&USniperModule4_Vul_C__pf117736272::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USniperModule4_Vul_C__pf117736272()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("SniperModule4_Vul_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USniperModule4_Vul_C__pf117736272_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(USniperModule4_Vul_C__pf117736272, TEXT("SniperModule4_Vul_C"), 3356419607);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<USniperModule4_Vul_C__pf117736272>()
	{
		return USniperModule4_Vul_C__pf117736272::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USniperModule4_Vul_C__pf117736272(Z_Construct_UClass_USniperModule4_Vul_C__pf117736272, &USniperModule4_Vul_C__pf117736272::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul"), TEXT("SniperModule4_Vul_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul"), TEXT("/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul.SniperModule4_Vul_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USniperModule4_Vul_C__pf117736272);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
