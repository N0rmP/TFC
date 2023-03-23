// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Module__pf2556257598.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModule__pf2556257598() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UModule_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UModule_C__pf2556257598();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UModule_C__pf2556257598::execbpf__SetOwner__pf)
	{
		P_GET_OBJECT(ATower_C__pf711247040,Z_Param_bpp__tower__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetOwner__pf(Z_Param_bpp__tower__pf);
		P_NATIVE_END;
	}
	void UModule_C__pf2556257598::StaticRegisterNativesUModule_C__pf2556257598()
	{
		UClass* Class = UModule_C__pf2556257598::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetOwner", &UModule_C__pf2556257598::execbpf__SetOwner__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics
	{
		struct Module_C__pf2556257598_eventbpf__SetOwner__pf_Parms
		{
			ATower_C__pf711247040* bpp__tower__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__tower__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::NewProp_bpp__tower__pf = { "bpp__tower__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Module_C__pf2556257598_eventbpf__SetOwner__pf_Parms, bpp__tower__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::NewProp_bpp__tower__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Module__pf2556257598.h" },
		{ "OverrideNativeName", "SetOwner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModule_C__pf2556257598, nullptr, "SetOwner", nullptr, nullptr, sizeof(Module_C__pf2556257598_eventbpf__SetOwner__pf_Parms), Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf()
	{
		UObject* Outer = Z_Construct_UClass_UModule_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetOwner" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModule_C__pf2556257598_NoRegister()
	{
		return UModule_C__pf2556257598::StaticClass();
	}
	struct Z_Construct_UClass_UModule_C__pf2556257598_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModule_C__pf2556257598_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnCollection_C__pf3716123054,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModule_C__pf2556257598_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModule_C__pf2556257598_bpf__SetOwner__pf, "SetOwner" }, // 209630430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModule_C__pf2556257598_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Module__pf2556257598.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Module__pf2556257598.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Module_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Modules/Module.Module_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModule_C__pf2556257598_Statics::NewProp_bpv__Owner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owner" },
		{ "ModuleRelativePath", "Public/Module__pf2556257598.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModule_C__pf2556257598_Statics::NewProp_bpv__Owner__pf = { "Owner", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModule_C__pf2556257598, bpv__Owner__pf), Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModule_C__pf2556257598_Statics::NewProp_bpv__Owner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModule_C__pf2556257598_Statics::NewProp_bpv__Owner__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModule_C__pf2556257598_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModule_C__pf2556257598_Statics::NewProp_bpv__Owner__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModule_C__pf2556257598_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModule_C__pf2556257598>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModule_C__pf2556257598_Statics::ClassParams = {
		&UModule_C__pf2556257598::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModule_C__pf2556257598_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModule_C__pf2556257598_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModule_C__pf2556257598_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModule_C__pf2556257598_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModule_C__pf2556257598()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Modules/Module"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Module_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModule_C__pf2556257598_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UModule_C__pf2556257598, TEXT("Module_C"), 1847583974);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UModule_C__pf2556257598>()
	{
		return UModule_C__pf2556257598::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModule_C__pf2556257598(Z_Construct_UClass_UModule_C__pf2556257598, &UModule_C__pf2556257598::StaticClass, TEXT("/Game/blueprints/OnCollections/Modules/Module"), TEXT("Module_C"), true, TEXT("/Game/blueprints/OnCollections/Modules/Module"), TEXT("/Game/blueprints/OnCollections/Modules/Module.Module_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModule_C__pf2556257598);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
