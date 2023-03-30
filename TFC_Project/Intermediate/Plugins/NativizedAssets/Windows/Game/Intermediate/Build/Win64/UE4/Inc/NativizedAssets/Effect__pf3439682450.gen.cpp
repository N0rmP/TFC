// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Effect__pf3439682450.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffect__pf3439682450() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffect_C__pf3439682450_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffect_C__pf3439682450();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEffect_C__pf3439682450::execbpf__Set_Owner__pf)
	{
		P_GET_OBJECT(Acreature_C__pf937085289,Z_Param_bpp__Owner__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Set_Owner__pf(Z_Param_bpp__Owner__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffect_C__pf3439682450::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_UEffect_C__pf3439682450_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void UEffect_C__pf3439682450::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Effect_C__pf3439682450_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_UEffect_C__pf3439682450_bpf__ReceiveTick__pf),&Parms);
	}
	void UEffect_C__pf3439682450::StaticRegisterNativesUEffect_C__pf3439682450()
	{
		UClass* Class = UEffect_C__pf3439682450::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveTick", &UEffect_C__pf3439682450::execbpf__ReceiveTick__pf },
			{ "Set_Owner", &UEffect_C__pf3439682450::execbpf__Set_Owner__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Effect_C__pf3439682450_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame if tick is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame if tick is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffect_C__pf3439682450, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Effect_C__pf3439682450_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UEffect_C__pf3439682450();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics
	{
		struct Effect_C__pf3439682450_eventbpf__Set_Owner__pf_Parms
		{
			Acreature_C__pf937085289* bpp__Owner__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__Owner__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::NewProp_bpp__Owner__pf = { "bpp__Owner__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Effect_C__pf3439682450_eventbpf__Set_Owner__pf_Parms, bpp__Owner__pf), Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::NewProp_bpp__Owner__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "OverrideNativeName", "Set_Owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffect_C__pf3439682450, nullptr, "Set_Owner", nullptr, nullptr, sizeof(Effect_C__pf3439682450_eventbpf__Set_Owner__pf_Parms), Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf()
	{
		UObject* Outer = Z_Construct_UClass_UEffect_C__pf3439682450();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Set_Owner" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffect_C__pf3439682450_NoRegister()
	{
		return UEffect_C__pf3439682450::StaticClass();
	}
	struct Z_Construct_UClass_UEffect_C__pf3439682450_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Owner__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Owner__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Duration__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Duration__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Stack__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__Stack__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MaxStack__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__MaxStack__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Timer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Timer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isStackable__pf_MetaData[];
#endif
		static void NewProp_bpv__isStackable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isStackable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b1l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffect_C__pf3439682450_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnCollection_C__pf3716123054,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffect_C__pf3439682450_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3538449214
		{ &Z_Construct_UFunction_UEffect_C__pf3439682450_bpf__Set_Owner__pf, "Set_Owner" }, // 3924152073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Effect__pf3439682450.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Effect_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Effects/Effect.Effect_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Owner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owner" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Owner__pf = { "Owner", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, bpv__Owner__pf), Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Owner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Owner__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Duration__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Duration" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Duration" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Duration__pf = { "Duration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, bpv__Duration__pf), METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Duration__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Duration__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Stack__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Stack" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Stack" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Stack__pf = { "Stack", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, bpv__Stack__pf), METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Stack__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Stack__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__MaxStack__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Max Stack" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MaxStack" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__MaxStack__pf = { "MaxStack", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, bpv__MaxStack__pf), METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__MaxStack__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__MaxStack__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Timer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Timer" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Timer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Timer__pf = { "Timer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, bpv__Timer__pf), METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Timer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Timer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Stackable" },
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isStackable" },
	};
#endif
	void Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf_SetBit(void* Obj)
	{
		((UEffect_C__pf3439682450*)Obj)->bpv__isStackable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf = { "isStackable", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEffect_C__pf3439682450), &Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Effect__pf3439682450.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffect_C__pf3439682450, b1l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffect_C__pf3439682450_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Owner__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Duration__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Stack__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__MaxStack__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__Timer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_bpv__isStackable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffect_C__pf3439682450_Statics::NewProp_b1l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffect_C__pf3439682450_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffect_C__pf3439682450>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffect_C__pf3439682450_Statics::ClassParams = {
		&UEffect_C__pf3439682450::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffect_C__pf3439682450_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffect_C__pf3439682450_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffect_C__pf3439682450()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Effects/Effect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Effect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffect_C__pf3439682450_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UEffect_C__pf3439682450, TEXT("Effect_C"), 503052490);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UEffect_C__pf3439682450>()
	{
		return UEffect_C__pf3439682450::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffect_C__pf3439682450(Z_Construct_UClass_UEffect_C__pf3439682450, &UEffect_C__pf3439682450::StaticClass, TEXT("/Game/blueprints/OnCollections/Effects/Effect"), TEXT("Effect_C"), true, TEXT("/Game/blueprints/OnCollections/Effects/Effect"), TEXT("/Game/blueprints/OnCollections/Effects/Effect.Effect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffect_C__pf3439682450);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
