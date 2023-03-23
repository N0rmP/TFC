// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Rifle_Upgrade__pf77128533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle_Upgrade__pf77128533() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URifle_Upgrade_C__pf77128533_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_URifle_Upgrade_C__pf77128533();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUpgrade_C__pf77128533();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URifle_Upgrade_C__pf77128533::execbpf__Set_Owner__pf)
	{
		P_GET_OBJECT(Arifle_C__pf3559600238,Z_Param_bpp__rifle__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Set_Owner__pf(Z_Param_bpp__rifle__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URifle_Upgrade_C__pf77128533::execbpf__ReceiveActorBeginOverlap_1__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap_1__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	void URifle_Upgrade_C__pf77128533::StaticRegisterNativesURifle_Upgrade_C__pf77128533()
	{
		UClass* Class = URifle_Upgrade_C__pf77128533::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap_1", &URifle_Upgrade_C__pf77128533::execbpf__ReceiveActorBeginOverlap_1__pf },
			{ "Set_Owner", &URifle_Upgrade_C__pf77128533::execbpf__Set_Owner__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics
	{
		struct Rifle_Upgrade_C__pf77128533_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms
		{
			AActor* bpp__OtherActor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Rifle_Upgrade_C__pf77128533_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Rifle_Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URifle_Upgrade_C__pf77128533, nullptr, "ReceiveActorBeginOverlap_1", nullptr, nullptr, sizeof(Rifle_Upgrade_C__pf77128533_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms), Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_URifle_Upgrade_C__pf77128533();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics
	{
		struct Rifle_Upgrade_C__pf77128533_eventbpf__Set_Owner__pf_Parms
		{
			Arifle_C__pf3559600238* bpp__rifle__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__rifle__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::NewProp_bpp__rifle__pf = { "bpp__rifle__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Rifle_Upgrade_C__pf77128533_eventbpf__Set_Owner__pf_Parms, bpp__rifle__pf), Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::NewProp_bpp__rifle__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Rifle_Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "Set_Owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URifle_Upgrade_C__pf77128533, nullptr, "Set_Owner", nullptr, nullptr, sizeof(Rifle_Upgrade_C__pf77128533_eventbpf__Set_Owner__pf_Parms), Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf()
	{
		UObject* Outer = Z_Construct_UClass_URifle_Upgrade_C__pf77128533();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Set_Owner" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URifle_Upgrade_C__pf77128533_NoRegister()
	{
		return URifle_Upgrade_C__pf77128533::StaticClass();
	}
	struct Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__rifle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__rifle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__K2Node_Event_OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUpgrade_C__pf77128533,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__ReceiveActorBeginOverlap_1__pf, "ReceiveActorBeginOverlap_1" }, // 2334107117
		{ &Z_Construct_UFunction_URifle_Upgrade_C__pf77128533_bpf__Set_Owner__pf, "Set_Owner" }, // 3564371699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Rifle_Upgrade__pf77128533.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rifle_Upgrade__pf77128533.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Rifle_Upgrade_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade.Rifle_Upgrade_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_bpv__rifle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rifle" },
		{ "ModuleRelativePath", "Public/Rifle_Upgrade__pf77128533.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "rifle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_bpv__rifle__pf = { "rifle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URifle_Upgrade_C__pf77128533, bpv__rifle__pf), Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_bpv__rifle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_bpv__rifle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rifle_Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URifle_Upgrade_C__pf77128533, b2l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_bpv__rifle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URifle_Upgrade_C__pf77128533>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::ClassParams = {
		&URifle_Upgrade_C__pf77128533::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URifle_Upgrade_C__pf77128533()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Rifle_Upgrade_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URifle_Upgrade_C__pf77128533_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(URifle_Upgrade_C__pf77128533, TEXT("Rifle_Upgrade_C"), 2771731873);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<URifle_Upgrade_C__pf77128533>()
	{
		return URifle_Upgrade_C__pf77128533::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URifle_Upgrade_C__pf77128533(Z_Construct_UClass_URifle_Upgrade_C__pf77128533, &URifle_Upgrade_C__pf77128533::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade"), TEXT("Rifle_Upgrade_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade"), TEXT("/Game/blueprints/OnCollections/Upgrades/Rifle_Upgrade.Rifle_Upgrade_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URifle_Upgrade_C__pf77128533);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
