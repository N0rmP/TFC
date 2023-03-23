// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/player_controller__pf2509438801.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayer_controller__pf2509438801() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_controller_C__pf2509438801_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_controller_C__pf2509438801();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister();
// End Cross Module References
	void Aplayer_controller_C__pf2509438801::StaticRegisterNativesAplayer_controller_C__pf2509438801()
	{
	}
	UClass* Z_Construct_UClass_Aplayer_controller_C__pf2509438801_NoRegister()
	{
		return Aplayer_controller_C__pf2509438801::StaticClass();
	}
	struct Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Plr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Plr__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "player_controller__pf2509438801.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/player_controller__pf2509438801.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "player_controller_C" },
		{ "ReplaceConverted", "/Game/blueprints/player/player_controller.player_controller_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::NewProp_bpv__Plr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Plr" },
		{ "ModuleRelativePath", "Public/player_controller__pf2509438801.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Plr" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::NewProp_bpv__Plr__pf = { "Plr", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aplayer_controller_C__pf2509438801, bpv__Plr__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::NewProp_bpv__Plr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::NewProp_bpv__Plr__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::NewProp_bpv__Plr__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplayer_controller_C__pf2509438801>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::ClassParams = {
		&Aplayer_controller_C__pf2509438801::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplayer_controller_C__pf2509438801()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/player/player_controller"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("player_controller_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplayer_controller_C__pf2509438801_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aplayer_controller_C__pf2509438801, TEXT("player_controller_C"), 2396620702);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aplayer_controller_C__pf2509438801>()
	{
		return Aplayer_controller_C__pf2509438801::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplayer_controller_C__pf2509438801(Z_Construct_UClass_Aplayer_controller_C__pf2509438801, &Aplayer_controller_C__pf2509438801::StaticClass, TEXT("/Game/blueprints/player/player_controller"), TEXT("player_controller_C"), true, TEXT("/Game/blueprints/player/player_controller"), TEXT("/Game/blueprints/player/player_controller.player_controller_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplayer_controller_C__pf2509438801);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
