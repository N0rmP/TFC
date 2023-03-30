// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/wdg_Hud__pf3053510930.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodewdg_Hud__pf3053510930() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Uwdg_Hud_C__pf3053510930();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Uwdg_Hud_C__pf3053510930::execbpf__GetText_1__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->bpf__GetText_1__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uwdg_Hud_C__pf3053510930::execbpf__SetxHud__pfT)
	{
		P_GET_OBJECT(Aelectricity_manager_C__pf3789721252,Z_Param_bpp__NewParam__pf);
		P_GET_OBJECT(Aplayer_character_C__pf2509438801,Z_Param_bpp__NewParam1__pf);
		P_GET_OBJECT(Aenemy_manager_C__pf3789721252,Z_Param_bpp__EnemyxManagerxReturn__pfTT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetxHud__pfT(Z_Param_bpp__NewParam__pf,Z_Param_bpp__NewParam1__pf,Z_Param_bpp__EnemyxManagerxReturn__pfTT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uwdg_Hud_C__pf3053510930::execbpf__Construct__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Construct__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Uwdg_Hud_C__pf3053510930::execbpf__Tick__pf)
	{
		P_GET_STRUCT(FGeometry,Z_Param_bpp__MyGeometry__pf);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__InDeltaTime__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Tick__pf(Z_Param_bpp__MyGeometry__pf,Z_Param_bpp__InDeltaTime__pf);
		P_NATIVE_END;
	}
	static FName NAME_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf = FName(TEXT("Construct"));
	void Uwdg_Hud_C__pf3053510930::eventbpf__Construct__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf),NULL);
	}
	static FName NAME_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf = FName(TEXT("Tick"));
	void Uwdg_Hud_C__pf3053510930::eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
	{
		wdg_Hud_C__pf3053510930_eventbpf__Tick__pf_Parms Parms;
		Parms.bpp__MyGeometry__pf=bpp__MyGeometry__pf;
		Parms.bpp__InDeltaTime__pf=bpp__InDeltaTime__pf;
		ProcessEvent(FindFunctionChecked(NAME_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf),&Parms);
	}
	void Uwdg_Hud_C__pf3053510930::StaticRegisterNativesUwdg_Hud_C__pf3053510930()
	{
		UClass* Class = Uwdg_Hud_C__pf3053510930::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Construct", &Uwdg_Hud_C__pf3053510930::execbpf__Construct__pf },
			{ "GetText_1", &Uwdg_Hud_C__pf3053510930::execbpf__GetText_1__pf },
			{ "Set Hud", &Uwdg_Hud_C__pf3053510930::execbpf__SetxHud__pfT },
			{ "Tick", &Uwdg_Hud_C__pf3053510930::execbpf__Tick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Called after the underlying slate widget is constructed.  Depending on how the slate object is usedt * this event may be called multiple times due to adding and removing from the hierarchy.t * If you need a true called-once-when-created event, use OnInitialized.t */" },
		{ "CppFromBpEvent", "" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Construct" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uwdg_Hud_C__pf3053510930, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf()
	{
		UObject* Outer = Z_Construct_UClass_Uwdg_Hud_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Construct" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics
	{
		struct wdg_Hud_C__pf3053510930_eventbpf__GetText_1__pf_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__GetText_1__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "GetText_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uwdg_Hud_C__pf3053510930, nullptr, "GetText_1", nullptr, nullptr, sizeof(wdg_Hud_C__pf3053510930_eventbpf__GetText_1__pf_Parms), Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_Uwdg_Hud_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetText_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics
	{
		struct wdg_Hud_C__pf3053510930_eventbpf__SetxHud__pfT_Parms
		{
			Aelectricity_manager_C__pf3789721252* bpp__NewParam__pf;
			Aplayer_character_C__pf2509438801* bpp__NewParam1__pf;
			Aenemy_manager_C__pf3789721252* bpp__EnemyxManagerxReturn__pfTT;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NewParam__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NewParam1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__EnemyxManagerxReturn__pfTT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__NewParam__pf = { "bpp__NewParam__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__SetxHud__pfT_Parms, bpp__NewParam__pf), Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__NewParam1__pf = { "bpp__NewParam1__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__SetxHud__pfT_Parms, bpp__NewParam1__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__EnemyxManagerxReturn__pfTT = { "bpp__EnemyxManagerxReturn__pfTT", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__SetxHud__pfT_Parms, bpp__EnemyxManagerxReturn__pfTT), Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__NewParam__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__NewParam1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::NewProp_bpp__EnemyxManagerxReturn__pfTT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Set Hud" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uwdg_Hud_C__pf3053510930, nullptr, "Set Hud", nullptr, nullptr, sizeof(wdg_Hud_C__pf3053510930_eventbpf__SetxHud__pfT_Parms), Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT()
	{
		UObject* Outer = Z_Construct_UClass_Uwdg_Hud_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Set Hud" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__MyGeometry__pf;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf = { "bpp__MyGeometry__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__Tick__pf_Parms, bpp__MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf = { "bpp__InDeltaTime__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(wdg_Hud_C__pf3053510930_eventbpf__Tick__pf_Parms, bpp__InDeltaTime__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::NewProp_bpp__MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::NewProp_bpp__InDeltaTime__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**t * Ticks this widget.  Override in derived classes, but always call the parent implementation.t *t * @param  MyGeometry The space allotted for this widgett * @param  InDeltaTime  Real time passed since last tickt */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Tick" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Uwdg_Hud_C__pf3053510930, nullptr, "Tick", nullptr, nullptr, sizeof(wdg_Hud_C__pf3053510930_eventbpf__Tick__pf_Parms), Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf()
	{
		UObject* Outer = Z_Construct_UClass_Uwdg_Hud_C__pf3053510930();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Tick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_NoRegister()
	{
		return Uwdg_Hud_C__pf3053510930::StaticClass();
	}
	struct Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Aim_img__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Aim_img__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Image_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Image_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_5__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_5__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_95__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_95__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_96__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_96__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TextBlock_395__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TextBlock_395__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__energy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__energy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__hud_plr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__hud_plr__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AsxRifle__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AsxRifle__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnemyxManagerxReturn__pfTT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EnemyxManagerxReturn__pfTT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_MyGeometry__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_InDeltaTime__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Construct__pf, "Construct" }, // 3504740672
		{ &Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__GetText_1__pf, "GetText_1" }, // 965787239
		{ &Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__SetxHud__pfT, "Set Hud" }, // 2435682535
		{ &Z_Construct_UFunction_Uwdg_Hud_C__pf3053510930_bpf__Tick__pf, "Tick" }, // 2098669042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "wdg_Hud__pf3053510930.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "wdg_Hud_C" },
		{ "ReplaceConverted", "/Game/blueprints/UI/wdg_Hud.wdg_Hud_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Aim_img__pf_MetaData[] = {
		{ "Category", "wdg_Hud" },
		{ "DisplayName", "Aim_img" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Aim_img" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Aim_img__pf = { "Aim_img", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__Aim_img__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Aim_img__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Aim_img__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image__pf_MetaData[] = {
		{ "Category", "wdg_Hud" },
		{ "DisplayName", "Image" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Image" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image__pf = { "Image", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__Image__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image_1__pf_MetaData[] = {
		{ "Category", "wdg_Hud" },
		{ "DisplayName", "Image_1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "Image_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image_1__pf = { "Image_1", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__Image_1__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_2__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_2__pf = { "TextBlock_2", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__TextBlock_2__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_5__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_5" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_5__pf = { "TextBlock_5", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__TextBlock_5__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_5__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_95__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_95" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_95" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_95__pf = { "TextBlock_95", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__TextBlock_95__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_95__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_95__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_96__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_96" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_96" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_96__pf = { "TextBlock_96", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__TextBlock_96__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_96__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_96__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_395__pf_MetaData[] = {
		{ "DisplayName", "TextBlock_395" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "TextBlock_395" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_395__pf = { "TextBlock_395", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__TextBlock_395__pf), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_395__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_395__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__energy__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Energy" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "energy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__energy__pf = { "energy", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__energy__pf), Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__energy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__energy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__hud_plr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hud Plr" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "hud_plr" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__hud_plr__pf = { "hud_plr", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__hud_plr__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__hud_plr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__hud_plr__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__AsxRifle__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "As Rifle" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "As Rifle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__AsxRifle__pfT = { "As Rifle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__AsxRifle__pfT), Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__AsxRifle__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__AsxRifle__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__EnemyxManagerxReturn__pfTT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy Manager Return" },
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Enemy Manager Return" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__EnemyxManagerxReturn__pfTT = { "Enemy Manager Return", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, bpv__EnemyxManagerxReturn__pfTT), Z_Construct_UClass_Aenemy_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__EnemyxManagerxReturn__pfTT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__EnemyxManagerxReturn__pfTT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_Event_MyGeometry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf = { "K2Node_Event_MyGeometry", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, b0l__K2Node_Event_MyGeometry__pf), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/wdg_Hud__pf3053510930.h" },
		{ "OverrideNativeName", "K2Node_Event_InDeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf = { "K2Node_Event_InDeltaTime", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Uwdg_Hud_C__pf3053510930, b0l__K2Node_Event_InDeltaTime__pf), METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Aim_img__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__Image_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_5__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_95__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_96__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__TextBlock_395__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__energy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__hud_plr__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__AsxRifle__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_bpv__EnemyxManagerxReturn__pfTT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_MyGeometry__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::NewProp_b0l__K2Node_Event_InDeltaTime__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Uwdg_Hud_C__pf3053510930>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::ClassParams = {
		&Uwdg_Hud_C__pf3053510930::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Uwdg_Hud_C__pf3053510930()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/UI/wdg_Hud"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("wdg_Hud_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Uwdg_Hud_C__pf3053510930_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Uwdg_Hud_C__pf3053510930, TEXT("wdg_Hud_C"), 1891478805);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Uwdg_Hud_C__pf3053510930>()
	{
		return Uwdg_Hud_C__pf3053510930::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Uwdg_Hud_C__pf3053510930(Z_Construct_UClass_Uwdg_Hud_C__pf3053510930, &Uwdg_Hud_C__pf3053510930::StaticClass, TEXT("/Game/blueprints/UI/wdg_Hud"), TEXT("wdg_Hud_C"), true, TEXT("/Game/blueprints/UI/wdg_Hud"), TEXT("/Game/blueprints/UI/wdg_Hud.wdg_Hud_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uwdg_Hud_C__pf3053510930);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
