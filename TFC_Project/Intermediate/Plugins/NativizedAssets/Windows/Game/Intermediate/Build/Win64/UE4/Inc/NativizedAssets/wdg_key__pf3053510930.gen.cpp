// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/wdg_key__pf3053510930.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodewdg_key__pf3053510930() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Uwdg_key_C__pf3053510930_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Uwdg_key_C__pf3053510930();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void Uwdg_key_C__pf3053510930::StaticRegisterNativesUwdg_key_C__pf3053510930()
	{
	}
	UClass* Z_Construct_UClass_Uwdg_key_C__pf3053510930_NoRegister()
	{
		return Uwdg_key_C__pf3053510930::StaticClass();
	}
	struct Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "wdg_key__pf3053510930.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/wdg_key__pf3053510930.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "wdg_key_C" },
		{ "ReplaceConverted", "/Game/blueprints/UI/wdg_key.wdg_key_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uwdg_key_C__pf3053510930>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::ClassParams = {
		&Uwdg_key_C__pf3053510930::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Uwdg_key_C__pf3053510930()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/UI/wdg_key"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("wdg_key_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Uwdg_key_C__pf3053510930_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Uwdg_key_C__pf3053510930, TEXT("wdg_key_C"), 3924702103);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Uwdg_key_C__pf3053510930>()
	{
		return Uwdg_key_C__pf3053510930::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Uwdg_key_C__pf3053510930(Z_Construct_UClass_Uwdg_key_C__pf3053510930, &Uwdg_key_C__pf3053510930::StaticClass, TEXT("/Game/blueprints/UI/wdg_key"), TEXT("wdg_key_C"), true, TEXT("/Game/blueprints/UI/wdg_key"), TEXT("/Game/blueprints/UI/wdg_key.wdg_key_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uwdg_key_C__pf3053510930);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
