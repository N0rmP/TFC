// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFC_Project/Observer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObserver() {}
// Cross Module References
	TFC_PROJECT_API UClass* Z_Construct_UClass_AObserver_NoRegister();
	TFC_PROJECT_API UClass* Z_Construct_UClass_AObserver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TFC_Project();
// End Cross Module References
	void AObserver::StaticRegisterNativesAObserver()
	{
	}
	UClass* Z_Construct_UClass_AObserver_NoRegister()
	{
		return AObserver::StaticClass();
	}
	struct Z_Construct_UClass_AObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TFC_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Observer.h" },
		{ "ModuleRelativePath", "Observer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObserver_Statics::ClassParams = {
		&AObserver::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObserver, 1021646686);
	template<> TFC_PROJECT_API UClass* StaticClass<AObserver>()
	{
		return AObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObserver(Z_Construct_UClass_AObserver, &AObserver::StaticClass, TEXT("/Script/TFC_Project"), TEXT("AObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
