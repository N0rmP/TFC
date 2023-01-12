// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFC_Project/StageWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageWidget() {}
// Cross Module References
	TFC_PROJECT_API UClass* Z_Construct_UClass_UStageWidget_NoRegister();
	TFC_PROJECT_API UClass* Z_Construct_UClass_UStageWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TFC_Project();
// End Cross Module References
	void UStageWidget::StaticRegisterNativesUStageWidget()
	{
	}
	UClass* Z_Construct_UClass_UStageWidget_NoRegister()
	{
		return UStageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TFC_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StageWidget.h" },
		{ "ModuleRelativePath", "StageWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStageWidget_Statics::ClassParams = {
		&UStageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStageWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStageWidget, 2951149625);
	template<> TFC_PROJECT_API UClass* StaticClass<UStageWidget>()
	{
		return UStageWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStageWidget(Z_Construct_UClass_UStageWidget, &UStageWidget::StaticClass, TEXT("/Script/TFC_Project"), TEXT("UStageWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
