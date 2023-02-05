// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TFC_Project/StageInfoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageInfoWidget() {}
// Cross Module References
	TFC_PROJECT_API UClass* Z_Construct_UClass_UStageInfoWidget_NoRegister();
	TFC_PROJECT_API UClass* Z_Construct_UClass_UStageInfoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TFC_Project();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStageInfoWidget::execopenStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->openStage();
		P_NATIVE_END;
	}
	void UStageInfoWidget::StaticRegisterNativesUStageInfoWidget()
	{
		UClass* Class = UStageInfoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "openStage", &UStageInfoWidget::execopenStage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStageInfoWidget_openStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStageInfoWidget_openStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StageInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStageInfoWidget_openStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStageInfoWidget, nullptr, "openStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStageInfoWidget_openStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStageInfoWidget_openStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStageInfoWidget_openStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStageInfoWidget_openStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStageInfoWidget_NoRegister()
	{
		return UStageInfoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStageInfoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_button_stgStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_button_stgStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetlevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_targetlevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageInfoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TFC_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStageInfoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStageInfoWidget_openStage, "openStage" }, // 810269419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageInfoWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StageInfoWidget.h" },
		{ "ModuleRelativePath", "StageInfoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_button_stgStart_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StageInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_button_stgStart = { "button_stgStart", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStageInfoWidget, button_stgStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_button_stgStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_button_stgStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_targetlevelName_MetaData[] = {
		{ "ModuleRelativePath", "StageInfoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_targetlevelName = { "targetlevelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStageInfoWidget, targetlevelName), METADATA_PARAMS(Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_targetlevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_targetlevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageInfoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_button_stgStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageInfoWidget_Statics::NewProp_targetlevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageInfoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageInfoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStageInfoWidget_Statics::ClassParams = {
		&UStageInfoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStageInfoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageInfoWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStageInfoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageInfoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageInfoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStageInfoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStageInfoWidget, 1090148905);
	template<> TFC_PROJECT_API UClass* StaticClass<UStageInfoWidget>()
	{
		return UStageInfoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStageInfoWidget(Z_Construct_UClass_UStageInfoWidget, &UStageInfoWidget::StaticClass, TEXT("/Script/TFC_Project"), TEXT("UStageInfoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageInfoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
