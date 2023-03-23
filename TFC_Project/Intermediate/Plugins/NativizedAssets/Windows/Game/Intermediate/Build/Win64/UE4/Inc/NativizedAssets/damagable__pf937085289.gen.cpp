// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/damagable__pf937085289.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedamagable__pf937085289() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Udamagable_C__pf937085289_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Udamagable_C__pf937085289();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__set_max_hp__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_max_hp__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__add_max_hp__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__add_max_hp__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__get_max_hp__pf)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__MaxxHpxRes__pfTT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_max_hp__pf(Z_Param_Out_bpp__MaxxHpxRes__pfTT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__set_owner__pf)
	{
		P_GET_OBJECT(Acreature_C__pf937085289,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_owner__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__add_cur_hp__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__add_cur_hp__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__set_cur_hp__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_cur_hp__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Udamagable_C__pf937085289::execbpf__get_cur_hp__pf)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bpp__cur_hp_res__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_cur_hp__pf(Z_Param_Out_bpp__cur_hp_res__pf);
		P_NATIVE_END;
	}
	void Udamagable_C__pf937085289::StaticRegisterNativesUdamagable_C__pf937085289()
	{
		UClass* Class = Udamagable_C__pf937085289::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "add_cur_hp", &Udamagable_C__pf937085289::execbpf__add_cur_hp__pf },
			{ "add_max_hp", &Udamagable_C__pf937085289::execbpf__add_max_hp__pf },
			{ "get_cur_hp", &Udamagable_C__pf937085289::execbpf__get_cur_hp__pf },
			{ "get_max_hp", &Udamagable_C__pf937085289::execbpf__get_max_hp__pf },
			{ "set_cur_hp", &Udamagable_C__pf937085289::execbpf__set_cur_hp__pf },
			{ "set_max_hp", &Udamagable_C__pf937085289::execbpf__set_max_hp__pf },
			{ "set_owner", &Udamagable_C__pf937085289::execbpf__set_owner__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__add_cur_hp__pf_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__add_cur_hp__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "add_cur_hp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "add_cur_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__add_cur_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "add_cur_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__add_max_hp__pf_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__add_max_hp__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "add_max_hp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "add_max_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__add_max_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "add_max_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__get_cur_hp__pf_Parms
		{
			int32 bpp__cur_hp_res__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__cur_hp_res__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::NewProp_bpp__cur_hp_res__pf = { "bpp__cur_hp_res__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__get_cur_hp__pf_Parms, bpp__cur_hp_res__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::NewProp_bpp__cur_hp_res__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "get_cur_hp" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "get_cur_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__get_cur_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_cur_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__get_max_hp__pf_Parms
		{
			int32 bpp__MaxxHpxRes__pfTT;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__MaxxHpxRes__pfTT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::NewProp_bpp__MaxxHpxRes__pfTT = { "bpp__MaxxHpxRes__pfTT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__get_max_hp__pf_Parms, bpp__MaxxHpxRes__pfTT), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::NewProp_bpp__MaxxHpxRes__pfTT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "get_max_hp" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "get_max_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__get_max_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_max_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__set_cur_hp__pf_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__set_cur_hp__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "set_cur_hp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "set_cur_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__set_cur_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_cur_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__set_max_hp__pf_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__set_max_hp__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "set_max_hp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "set_max_hp", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__set_max_hp__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_max_hp" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics
	{
		struct damagable_C__pf937085289_eventbpf__set_owner__pf_Parms
		{
			Acreature_C__pf937085289* bpp__val__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__val__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(damagable_C__pf937085289_eventbpf__set_owner__pf_Parms, bpp__val__pf), Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "OverrideNativeName", "set_owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Udamagable_C__pf937085289, nullptr, "set_owner", nullptr, nullptr, sizeof(damagable_C__pf937085289_eventbpf__set_owner__pf_Parms), Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf()
	{
		UObject* Outer = Z_Construct_UClass_Udamagable_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_owner" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Udamagable_C__pf937085289_NoRegister()
	{
		return Udamagable_C__pf937085289::StaticClass();
	}
	struct Z_Construct_UClass_Udamagable_C__pf937085289_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_hp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__cur_hp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__max_hp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__max_hp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__owner__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__owner__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Udamagable_C__pf937085289_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Udamagable_C__pf937085289_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_cur_hp__pf, "add_cur_hp" }, // 2840138588
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__add_max_hp__pf, "add_max_hp" }, // 3498242278
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_cur_hp__pf, "get_cur_hp" }, // 2891425696
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__get_max_hp__pf, "get_max_hp" }, // 203704198
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_cur_hp__pf, "set_cur_hp" }, // 3283605028
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_max_hp__pf, "set_max_hp" }, // 3961115213
		{ &Z_Construct_UFunction_Udamagable_C__pf937085289_bpf__set_owner__pf, "set_owner" }, // 122311403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Udamagable_C__pf937085289_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "damagable__pf937085289.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "damagable_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/damagable.damagable_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__cur_hp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Hp" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_hp" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__cur_hp__pf = { "cur_hp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Udamagable_C__pf937085289, bpv__cur_hp__pf), METADATA_PARAMS(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__cur_hp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__cur_hp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__max_hp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Max Hp" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "max_hp" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__max_hp__pf = { "max_hp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Udamagable_C__pf937085289, bpv__max_hp__pf), METADATA_PARAMS(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__max_hp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__max_hp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__owner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owner" },
		{ "ModuleRelativePath", "Public/damagable__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__owner__pf = { "owner", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Udamagable_C__pf937085289, bpv__owner__pf), Z_Construct_UClass_Acreature_C__pf937085289_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__owner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__owner__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Udamagable_C__pf937085289_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__cur_hp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__max_hp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Udamagable_C__pf937085289_Statics::NewProp_bpv__owner__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Udamagable_C__pf937085289_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Udamagable_C__pf937085289>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Udamagable_C__pf937085289_Statics::ClassParams = {
		&Udamagable_C__pf937085289::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Udamagable_C__pf937085289_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Udamagable_C__pf937085289_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Udamagable_C__pf937085289()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/damagable"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("damagable_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Udamagable_C__pf937085289_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Udamagable_C__pf937085289, TEXT("damagable_C"), 3140724756);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Udamagable_C__pf937085289>()
	{
		return Udamagable_C__pf937085289::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Udamagable_C__pf937085289(Z_Construct_UClass_Udamagable_C__pf937085289, &Udamagable_C__pf937085289::StaticClass, TEXT("/Game/blueprints/others/damagable"), TEXT("damagable_C"), true, TEXT("/Game/blueprints/others/damagable"), TEXT("/Game/blueprints/others/damagable.damagable_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Udamagable_C__pf937085289);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
