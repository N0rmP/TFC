// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFC_Project/TFCHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTFCHUD() {}
// Cross Module References
	TFC_PROJECT_API UClass* Z_Construct_UClass_ATFCHUD_NoRegister();
	TFC_PROJECT_API UClass* Z_Construct_UClass_ATFCHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TFC_Project();
// End Cross Module References
	void ATFCHUD::StaticRegisterNativesATFCHUD()
	{
	}
	UClass* Z_Construct_UClass_ATFCHUD_NoRegister()
	{
		return ATFCHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATFCHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATFCHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TFC_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATFCHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TFCHUD.h" },
		{ "ModuleRelativePath", "TFCHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATFCHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATFCHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATFCHUD_Statics::ClassParams = {
		&ATFCHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATFCHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATFCHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATFCHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATFCHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATFCHUD, 118214895);
	template<> TFC_PROJECT_API UClass* StaticClass<ATFCHUD>()
	{
		return ATFCHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATFCHUD(Z_Construct_UClass_ATFCHUD, &ATFCHUD::StaticClass, TEXT("/Script/TFC_Project"), TEXT("ATFCHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATFCHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
