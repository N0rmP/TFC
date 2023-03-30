// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/temp_over__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetemp_over__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Utemp_over_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Utemp_over_C__pf3789721252();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	void Utemp_over_C__pf3789721252::StaticRegisterNativesUtemp_over_C__pf3789721252()
	{
	}
	UClass* Z_Construct_UClass_Utemp_over_C__pf3789721252_NoRegister()
	{
		return Utemp_over_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "temp_over__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/temp_over__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "temp_over_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/temp_over.temp_over_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Utemp_over_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::ClassParams = {
		&Utemp_over_C__pf3789721252::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Utemp_over_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/temp_over"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("temp_over_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Utemp_over_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Utemp_over_C__pf3789721252, TEXT("temp_over_C"), 2319656460);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Utemp_over_C__pf3789721252>()
	{
		return Utemp_over_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Utemp_over_C__pf3789721252(Z_Construct_UClass_Utemp_over_C__pf3789721252, &Utemp_over_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/temp_over"), TEXT("temp_over_C"), true, TEXT("/Game/blueprints/others/Observer/temp_over"), TEXT("/Game/blueprints/others/Observer/temp_over.temp_over_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Utemp_over_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
