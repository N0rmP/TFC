// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/blinking_lamp__pf1179723161.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeblinking_lamp__pf1179723161() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Ablinking_lamp_C__pf1179723161();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Ablinking_lamp_C__pf1179723161::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Ablinking_lamp_C__pf1179723161::execbpf__ExecuteUbergraph_blinking_lamp__pf_0)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_blinking_lamp__pf_0(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void Ablinking_lamp_C__pf1179723161::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		blinking_lamp_C__pf1179723161_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf),&Parms);
	}
	void Ablinking_lamp_C__pf1179723161::StaticRegisterNativesAblinking_lamp_C__pf1179723161()
	{
		UClass* Class = Ablinking_lamp_C__pf1179723161::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_blinking_lamp_0", &Ablinking_lamp_C__pf1179723161::execbpf__ExecuteUbergraph_blinking_lamp__pf_0 },
			{ "ReceiveTick", &Ablinking_lamp_C__pf1179723161::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics
	{
		struct blinking_lamp_C__pf1179723161_eventbpf__ExecuteUbergraph_blinking_lamp__pf_0_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(blinking_lamp_C__pf1179723161_eventbpf__ExecuteUbergraph_blinking_lamp__pf_0_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_blinking_lamp_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ablinking_lamp_C__pf1179723161, nullptr, "ExecuteUbergraph_blinking_lamp_0", nullptr, nullptr, sizeof(blinking_lamp_C__pf1179723161_eventbpf__ExecuteUbergraph_blinking_lamp__pf_0_Parms), Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0()
	{
		UObject* Outer = Z_Construct_UClass_Ablinking_lamp_C__pf1179723161();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_blinking_lamp_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(blinking_lamp_C__pf1179723161_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Ablinking_lamp_C__pf1179723161, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(blinking_lamp_C__pf1179723161_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_Ablinking_lamp_C__pf1179723161();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_NoRegister()
	{
		return Ablinking_lamp_C__pf1179723161::StaticClass();
	}
	struct Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PointLight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__PointLight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__lamp_mesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__lamp_mesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ExecuteUbergraph_blinking_lamp__pf_0, "ExecuteUbergraph_blinking_lamp_0" }, // 905293958
		{ &Z_Construct_UFunction_Ablinking_lamp_C__pf1179723161_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1206224573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "blinking_lamp__pf1179723161.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "blinking_lamp_C" },
		{ "ReplaceConverted", "/Game/resouerce/environment_objects/blinking_lamp.blinking_lamp_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__PointLight__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "OverrideNativeName", "PointLight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__PointLight__pf = { "PointLight", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablinking_lamp_C__pf1179723161, bpv__PointLight__pf), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__PointLight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__PointLight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__lamp_mesh__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "OverrideNativeName", "lamp_mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__lamp_mesh__pf = { "lamp_mesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablinking_lamp_C__pf1179723161, bpv__lamp_mesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__lamp_mesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__lamp_mesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/blinking_lamp__pf1179723161.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ablinking_lamp_C__pf1179723161, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__PointLight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_bpv__lamp_mesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ablinking_lamp_C__pf1179723161>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::ClassParams = {
		&Ablinking_lamp_C__pf1179723161::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ablinking_lamp_C__pf1179723161()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/resouerce/environment_objects/blinking_lamp"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("blinking_lamp_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ablinking_lamp_C__pf1179723161_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Ablinking_lamp_C__pf1179723161, TEXT("blinking_lamp_C"), 4101440252);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Ablinking_lamp_C__pf1179723161>()
	{
		return Ablinking_lamp_C__pf1179723161::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ablinking_lamp_C__pf1179723161(Z_Construct_UClass_Ablinking_lamp_C__pf1179723161, &Ablinking_lamp_C__pf1179723161::StaticClass, TEXT("/Game/resouerce/environment_objects/blinking_lamp"), TEXT("blinking_lamp_C"), true, TEXT("/Game/resouerce/environment_objects/blinking_lamp"), TEXT("/Game/resouerce/environment_objects/blinking_lamp.blinking_lamp_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ablinking_lamp_C__pf1179723161);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
