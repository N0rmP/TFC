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
	TFC_PROJECT_API UFunction* Z_Construct_UFunction_UStageWidget_openStageinfo();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UStageWidget::StaticRegisterNativesUStageWidget()
	{
		UClass* Class = UStageWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "openStageinfo", &UStageWidget::execopenStageinfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStageWidget_openStageinfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStageWidget_openStageinfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStageWidget_openStageinfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStageWidget, nullptr, "openStageinfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStageWidget_openStageinfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageWidget_openStageinfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStageWidget_openStageinfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStageWidget_openStageinfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStageWidget_NoRegister()
	{
		return UStageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_Stage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button_Stage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TFC_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStageWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStageWidget_openStageinfo, "openStageinfo" }, // 669574593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StageWidget.h" },
		{ "ModuleRelativePath", "StageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageWidget_Statics::NewProp_Button_Stage_MetaData[] = {
		{ "Category", "StageWidget" },
		{ "Comment", "// \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StageWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStageWidget_Statics::NewProp_Button_Stage = { "Button_Stage", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStageWidget, Button_Stage), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStageWidget_Statics::NewProp_Button_Stage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageWidget_Statics::NewProp_Button_Stage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageWidget_Statics::NewProp_Button_Stage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStageWidget_Statics::ClassParams = {
		&UStageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageWidget_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UStageWidget, 1398644312);
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
