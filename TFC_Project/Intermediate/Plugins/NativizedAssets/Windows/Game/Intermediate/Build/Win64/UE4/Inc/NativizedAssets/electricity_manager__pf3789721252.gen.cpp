// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/electricity_manager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeelectricity_manager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Aelectricity_manager_C__pf3789721252::execbpf__add_electricity__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__is_possible__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__add_electricity__pf(Z_Param_bpp__val__pf,Z_Param_Out_bpp__is_possible__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aelectricity_manager_C__pf3789721252::execbpf__set_electricity__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_electricity__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aelectricity_manager_C__pf3789721252::execbpf__get_electricity__pf)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__cur_electricity_res__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_electricity__pf(Z_Param_Out_bpp__cur_electricity_res__pf);
		P_NATIVE_END;
	}
	void Aelectricity_manager_C__pf3789721252::StaticRegisterNativesAelectricity_manager_C__pf3789721252()
	{
		UClass* Class = Aelectricity_manager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add_electricity", &Aelectricity_manager_C__pf3789721252::execbpf__add_electricity__pf },
			{ "get_electricity", &Aelectricity_manager_C__pf3789721252::execbpf__get_electricity__pf },
			{ "set_electricity", &Aelectricity_manager_C__pf3789721252::execbpf__set_electricity__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics
	{
		struct electricity_manager_C__pf3789721252_eventbpf__add_electricity__pf_Parms
		{
			int32 bpp__val__pf;
			bool bpp__is_possible__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__val__pf;
		static void NewProp_bpp__is_possible__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__is_possible__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(electricity_manager_C__pf3789721252_eventbpf__add_electricity__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__is_possible__pf_SetBit(void* Obj)
	{
		((electricity_manager_C__pf3789721252_eventbpf__add_electricity__pf_Parms*)Obj)->bpp__is_possible__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__is_possible__pf = { "bpp__is_possible__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(electricity_manager_C__pf3789721252_eventbpf__add_electricity__pf_Parms), &Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__is_possible__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__val__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::NewProp_bpp__is_possible__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "OverrideNativeName", "add_electricity" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aelectricity_manager_C__pf3789721252, nullptr, "add_electricity", nullptr, nullptr, sizeof(electricity_manager_C__pf3789721252_eventbpf__add_electricity__pf_Parms), Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aelectricity_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "add_electricity" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics
	{
		struct electricity_manager_C__pf3789721252_eventbpf__get_electricity__pf_Parms
		{
			int32 bpp__cur_electricity_res__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__cur_electricity_res__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::NewProp_bpp__cur_electricity_res__pf = { "bpp__cur_electricity_res__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(electricity_manager_C__pf3789721252_eventbpf__get_electricity__pf_Parms, bpp__cur_electricity_res__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::NewProp_bpp__cur_electricity_res__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "OverrideNativeName", "get_electricity" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aelectricity_manager_C__pf3789721252, nullptr, "get_electricity", nullptr, nullptr, sizeof(electricity_manager_C__pf3789721252_eventbpf__get_electricity__pf_Parms), Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aelectricity_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_electricity" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics
	{
		struct electricity_manager_C__pf3789721252_eventbpf__set_electricity__pf_Parms
		{
			int32 bpp__val__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__val__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(electricity_manager_C__pf3789721252_eventbpf__set_electricity__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "OverrideNativeName", "set_electricity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aelectricity_manager_C__pf3789721252, nullptr, "set_electricity", nullptr, nullptr, sizeof(electricity_manager_C__pf3789721252_eventbpf__set_electricity__pf_Parms), Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aelectricity_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_electricity" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_NoRegister()
	{
		return Aelectricity_manager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_electricity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__cur_electricity__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__add_electricity__pf, "add_electricity" }, // 2278785711
		{ &Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__get_electricity__pf, "get_electricity" }, // 2214664763
		{ &Z_Construct_UFunction_Aelectricity_manager_C__pf3789721252_bpf__set_electricity__pf, "set_electricity" }, // 2937291098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "electricity_manager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "electricity_manager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/electricity_manager.electricity_manager_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aelectricity_manager_C__pf3789721252, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__cur_electricity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Electricity" },
		{ "ModuleRelativePath", "Public/electricity_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_electricity" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__cur_electricity__pf = { "cur_electricity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aelectricity_manager_C__pf3789721252, bpv__cur_electricity__pf), METADATA_PARAMS(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__cur_electricity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__cur_electricity__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::NewProp_bpv__cur_electricity__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aelectricity_manager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::ClassParams = {
		&Aelectricity_manager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aelectricity_manager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/electricity_manager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("electricity_manager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aelectricity_manager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aelectricity_manager_C__pf3789721252, TEXT("electricity_manager_C"), 3358193414);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aelectricity_manager_C__pf3789721252>()
	{
		return Aelectricity_manager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aelectricity_manager_C__pf3789721252(Z_Construct_UClass_Aelectricity_manager_C__pf3789721252, &Aelectricity_manager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/electricity_manager"), TEXT("electricity_manager_C"), true, TEXT("/Game/blueprints/others/Observer/electricity_manager"), TEXT("/Game/blueprints/others/Observer/electricity_manager.electricity_manager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aelectricity_manager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
