// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Robot_Upgrade3__pf712717951.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRobot_Upgrade3__pf712717951() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URobot_Upgrade3_C__pf712717951();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URobot_Upgrade_C__pf77128533();
// End Cross Module References
	void URobot_Upgrade3_C__pf712717951::StaticRegisterNativesURobot_Upgrade3_C__pf712717951()
	{
	}
	UClass* Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_NoRegister()
	{
		return URobot_Upgrade3_C__pf712717951::StaticClass();
	}
	struct Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URobot_Upgrade_C__pf77128533,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Robot_Upgrade3__pf712717951.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Robot_Upgrade3__pf712717951.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Robot_Upgrade3_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade3.Robot_Upgrade3_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URobot_Upgrade3_C__pf712717951>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::ClassParams = {
		&URobot_Upgrade3_C__pf712717951::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URobot_Upgrade3_C__pf712717951()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade3"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Robot_Upgrade3_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URobot_Upgrade3_C__pf712717951_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(URobot_Upgrade3_C__pf712717951, TEXT("Robot_Upgrade3_C"), 2777630892);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<URobot_Upgrade3_C__pf712717951>()
	{
		return URobot_Upgrade3_C__pf712717951::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URobot_Upgrade3_C__pf712717951(Z_Construct_UClass_URobot_Upgrade3_C__pf712717951, &URobot_Upgrade3_C__pf712717951::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade3"), TEXT("Robot_Upgrade3_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade3"), TEXT("/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade3.Robot_Upgrade3_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URobot_Upgrade3_C__pf712717951);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
