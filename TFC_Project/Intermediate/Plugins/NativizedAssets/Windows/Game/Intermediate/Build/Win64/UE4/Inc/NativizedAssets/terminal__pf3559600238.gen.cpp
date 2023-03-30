// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/terminal__pf3559600238.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeterminal__pf3559600238() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aterminal_C__pf3559600238_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aterminal_C__pf3559600238();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
// End Cross Module References
	void Aterminal_C__pf3559600238::StaticRegisterNativesAterminal_C__pf3559600238()
	{
	}
	UClass* Z_Construct_UClass_Aterminal_C__pf3559600238_NoRegister()
	{
		return Aterminal_C__pf3559600238::StaticClass();
	}
	struct Z_Construct_UClass_Aterminal_C__pf3559600238_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ScannedTower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ScannedTower__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "terminal__pf3559600238.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/terminal__pf3559600238.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "terminal_C" },
		{ "ReplaceConverted", "/Game/blueprints/player/tool/terminal.terminal_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::NewProp_bpv__ScannedTower__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Scanned Tower" },
		{ "ModuleRelativePath", "Public/terminal__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ScannedTower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::NewProp_bpv__ScannedTower__pf = { "ScannedTower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aterminal_C__pf3559600238, bpv__ScannedTower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::NewProp_bpv__ScannedTower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::NewProp_bpv__ScannedTower__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::NewProp_bpv__ScannedTower__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aterminal_C__pf3559600238>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::ClassParams = {
		&Aterminal_C__pf3559600238::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aterminal_C__pf3559600238()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/player/tool/terminal"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("terminal_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aterminal_C__pf3559600238_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aterminal_C__pf3559600238, TEXT("terminal_C"), 4213596283);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aterminal_C__pf3559600238>()
	{
		return Aterminal_C__pf3559600238::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aterminal_C__pf3559600238(Z_Construct_UClass_Aterminal_C__pf3559600238, &Aterminal_C__pf3559600238::StaticClass, TEXT("/Game/blueprints/player/tool/terminal"), TEXT("terminal_C"), true, TEXT("/Game/blueprints/player/tool/terminal"), TEXT("/Game/blueprints/player/tool/terminal.terminal_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aterminal_C__pf3559600238);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
