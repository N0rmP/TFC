// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/core__pf937085289.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecore__pf937085289() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acore_C__pf937085289_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acore_C__pf937085289();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Acore_C__pf937085289::StaticRegisterNativesAcore_C__pf937085289()
	{
	}
	UClass* Z_Construct_UClass_Acore_C__pf937085289_NoRegister()
	{
		return Acore_C__pf937085289::StaticClass();
	}
	struct Z_Construct_UClass_Acore_C__pf937085289_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Core__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Core__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acore_C__pf937085289_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Acreature_C__pf937085289,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acore_C__pf937085289_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "core__pf937085289.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/core__pf937085289.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "core_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/core.core_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acore_C__pf937085289_Statics::NewProp_bpv__Core__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/core__pf937085289.h" },
		{ "OverrideNativeName", "Core" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acore_C__pf937085289_Statics::NewProp_bpv__Core__pf = { "Core", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acore_C__pf937085289, bpv__Core__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acore_C__pf937085289_Statics::NewProp_bpv__Core__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acore_C__pf937085289_Statics::NewProp_bpv__Core__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Acore_C__pf937085289_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acore_C__pf937085289_Statics::NewProp_bpv__Core__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acore_C__pf937085289_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acore_C__pf937085289>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acore_C__pf937085289_Statics::ClassParams = {
		&Acore_C__pf937085289::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Acore_C__pf937085289_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Acore_C__pf937085289_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acore_C__pf937085289_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acore_C__pf937085289_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acore_C__pf937085289()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/core"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("core_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acore_C__pf937085289_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Acore_C__pf937085289, TEXT("core_C"), 490432248);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Acore_C__pf937085289>()
	{
		return Acore_C__pf937085289::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acore_C__pf937085289(Z_Construct_UClass_Acore_C__pf937085289, &Acore_C__pf937085289::StaticClass, TEXT("/Game/blueprints/others/core"), TEXT("core_C"), true, TEXT("/Game/blueprints/others/core"), TEXT("/Game/blueprints/others/core.core_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acore_C__pf937085289);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
