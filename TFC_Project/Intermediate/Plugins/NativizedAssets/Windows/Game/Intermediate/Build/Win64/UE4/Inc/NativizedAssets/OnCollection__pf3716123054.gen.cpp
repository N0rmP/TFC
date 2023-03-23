// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/OnCollection__pf3716123054.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnCollection__pf3716123054() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Search__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Search__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Attack__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Attack__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Die__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Die__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Stacked__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Stacked__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_CreatureDie__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_CreatureDie__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Attacked__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Attacked__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnCollection_C__pf3716123054::execbpf__On_Added__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__On_Added__pf();
		P_NATIVE_END;
	}
	void UOnCollection_C__pf3716123054::StaticRegisterNativesUOnCollection_C__pf3716123054()
	{
		UClass* Class = UOnCollection_C__pf3716123054::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "On_Added", &UOnCollection_C__pf3716123054::execbpf__On_Added__pf },
			{ "On_Attack", &UOnCollection_C__pf3716123054::execbpf__On_Attack__pf },
			{ "On_Attacked", &UOnCollection_C__pf3716123054::execbpf__On_Attacked__pf },
			{ "On_CreatureDie", &UOnCollection_C__pf3716123054::execbpf__On_CreatureDie__pf },
			{ "On_Die", &UOnCollection_C__pf3716123054::execbpf__On_Die__pf },
			{ "On_Search", &UOnCollection_C__pf3716123054::execbpf__On_Search__pf },
			{ "On_Stacked", &UOnCollection_C__pf3716123054::execbpf__On_Stacked__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Added", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Added" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Attack" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Attacked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Attacked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Attacked" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_CreatureDie" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_CreatureDie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_CreatureDie" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Die" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Die" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Search" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Search", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Search" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "OverrideNativeName", "On_Stacked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnCollection_C__pf3716123054, nullptr, "On_Stacked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf()
	{
		UObject* Outer = Z_Construct_UClass_UOnCollection_C__pf3716123054();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "On_Stacked" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054_NoRegister()
	{
		return UOnCollection_C__pf3716123054::StaticClass();
	}
	struct Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Name__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Name__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tool_Tip_Text__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bpv__Tool_Tip_Text__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Added__pf, "On_Added" }, // 3260512304
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attack__pf, "On_Attack" }, // 396088597
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Attacked__pf, "On_Attacked" }, // 3581460942
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_CreatureDie__pf, "On_CreatureDie" }, // 1314174235
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Die__pf, "On_Die" }, // 2553147100
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Search__pf, "On_Search" }, // 4060749240
		{ &Z_Construct_UFunction_UOnCollection_C__pf3716123054_bpf__On_Stacked__pf, "On_Stacked" }, // 2859684090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnCollection__pf3716123054.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "OnCollection_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/OnCollection.OnCollection_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Name__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Name__pf = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnCollection_C__pf3716123054, bpv__Name__pf), METADATA_PARAMS(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Name__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Name__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Tool_Tip_Text__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tool Tip Text" },
		{ "ModuleRelativePath", "Public/OnCollection__pf3716123054.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tool_Tip_Text" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Tool_Tip_Text__pf = { "Tool_Tip_Text", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnCollection_C__pf3716123054, bpv__Tool_Tip_Text__pf), METADATA_PARAMS(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Tool_Tip_Text__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Tool_Tip_Text__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Name__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::NewProp_bpv__Tool_Tip_Text__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnCollection_C__pf3716123054>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::ClassParams = {
		&UOnCollection_C__pf3716123054::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnCollection_C__pf3716123054()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/OnCollection"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("OnCollection_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnCollection_C__pf3716123054_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UOnCollection_C__pf3716123054, TEXT("OnCollection_C"), 2866369878);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UOnCollection_C__pf3716123054>()
	{
		return UOnCollection_C__pf3716123054::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnCollection_C__pf3716123054(Z_Construct_UClass_UOnCollection_C__pf3716123054, &UOnCollection_C__pf3716123054::StaticClass, TEXT("/Game/blueprints/OnCollections/OnCollection"), TEXT("OnCollection_C"), true, TEXT("/Game/blueprints/OnCollections/OnCollection"), TEXT("/Game/blueprints/OnCollections/OnCollection.OnCollection_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnCollection_C__pf3716123054);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
