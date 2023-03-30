// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AoEModule3__pf2556257598.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAoEModule3__pf2556257598() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoEModule3_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAoEModule3_C__pf2556257598();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UModule_C__pf2556257598();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAoEModule3_C__pf2556257598::execbpf__ReceiveActorBeginOverlap_1__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap_1__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	void UAoEModule3_C__pf2556257598::StaticRegisterNativesUAoEModule3_C__pf2556257598()
	{
		UClass* Class = UAoEModule3_C__pf2556257598::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap_1", &UAoEModule3_C__pf2556257598::execbpf__ReceiveActorBeginOverlap_1__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics
	{
		struct AoEModule3_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEModule3_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AoEModule3__pf2556257598.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAoEModule3_C__pf2556257598, nullptr, "ReceiveActorBeginOverlap_1", nullptr, nullptr, sizeof(AoEModule3_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms), Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_UAoEModule3_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAoEModule3_C__pf2556257598_NoRegister()
	{
		return UAoEModule3_C__pf2556257598::StaticClass();
	}
	struct Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__K2Node_Event_OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModule_C__pf2556257598,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAoEModule3_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf, "ReceiveActorBeginOverlap_1" }, // 665459459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AoEModule3__pf2556257598.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AoEModule3__pf2556257598.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AoEModule3_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Modules/AoEModule3.AoEModule3_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEModule3__pf2556257598.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAoEModule3_C__pf2556257598, b2l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAoEModule3_C__pf2556257598>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::ClassParams = {
		&UAoEModule3_C__pf2556257598::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAoEModule3_C__pf2556257598()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Modules/AoEModule3"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AoEModule3_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAoEModule3_C__pf2556257598_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UAoEModule3_C__pf2556257598, TEXT("AoEModule3_C"), 2354492256);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UAoEModule3_C__pf2556257598>()
	{
		return UAoEModule3_C__pf2556257598::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAoEModule3_C__pf2556257598(Z_Construct_UClass_UAoEModule3_C__pf2556257598, &UAoEModule3_C__pf2556257598::StaticClass, TEXT("/Game/blueprints/OnCollections/Modules/AoEModule3"), TEXT("AoEModule3_C"), true, TEXT("/Game/blueprints/OnCollections/Modules/AoEModule3"), TEXT("/Game/blueprints/OnCollections/Modules/AoEModule3.AoEModule3_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAoEModule3_C__pf2556257598);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
