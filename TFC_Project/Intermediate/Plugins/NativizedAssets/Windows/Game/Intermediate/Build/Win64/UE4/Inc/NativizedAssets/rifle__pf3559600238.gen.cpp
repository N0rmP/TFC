// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/rifle__pf3559600238.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderifle__pf3559600238() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Arifle_C__pf3559600238();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__reload__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__reload__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__sniper_delay_done__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__sniper_delay_done__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__sniper_fire__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__sniper_fire__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__automatic_fire__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__automatic_fire__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__fire__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__damage__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__fire__pf(Z_Param_bpp__damage__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Arifle_C__pf3559600238::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void Arifle_C__pf3559600238::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf),NULL);
	}
	void Arifle_C__pf3559600238::StaticRegisterNativesArifle_C__pf3559600238()
	{
		UClass* Class = Arifle_C__pf3559600238::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "automatic_fire", &Arifle_C__pf3559600238::execbpf__automatic_fire__pf },
			{ "fire", &Arifle_C__pf3559600238::execbpf__fire__pf },
			{ "reload", &Arifle_C__pf3559600238::execbpf__reload__pf },
			{ "sniper_delay_done", &Arifle_C__pf3559600238::execbpf__sniper_delay_done__pf },
			{ "sniper_fire", &Arifle_C__pf3559600238::execbpf__sniper_fire__pf },
			{ "UserConstructionScript", &Arifle_C__pf3559600238::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "automatic_fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "automatic_fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "automatic_fire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics
	{
		struct rifle_C__pf3559600238_eventbpf__fire__pf_Parms
		{
			int32 bpp__damage__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__damage__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::NewProp_bpp__damage__pf = { "bpp__damage__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(rifle_C__pf3559600238_eventbpf__fire__pf_Parms, bpp__damage__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::NewProp_bpp__damage__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "fire", nullptr, nullptr, sizeof(rifle_C__pf3559600238_eventbpf__fire__pf_Parms), Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "fire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "reload" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "reload" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "sniper_delay_done" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "sniper_delay_done", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "sniper_delay_done" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "sniper_fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "sniper_fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "sniper_fire" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Arifle_C__pf3559600238, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_Arifle_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Arifle_C__pf3559600238_NoRegister()
	{
		return Arifle_C__pf3559600238::StaticClass();
	}
	struct Z_Construct_UClass_Arifle_C__pf3559600238_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__max_ammo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__max_ammo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_ammo__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__cur_ammo__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__damage_per_bullet__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__damage_per_bullet__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__automatic_fire_delay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__automatic_fire_delay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__automatic_fire_handle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__automatic_fire_handle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__zoom_FOV_angle__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__zoom_FOV_angle__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__is_aiming__pf_MetaData[];
#endif
		static void NewProp_bpv__is_aiming__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__is_aiming__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__is_sniper_firable__pf_MetaData[];
#endif
		static void NewProp_bpv__is_sniper_firable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__is_sniper_firable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__sniper_fire_delay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__sniper_fire_delay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__reload_time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__reload_time__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Arifle_C__pf3559600238_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Arifle_C__pf3559600238_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__automatic_fire__pf, "automatic_fire" }, // 2642219771
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__fire__pf, "fire" }, // 4241273548
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__reload__pf, "reload" }, // 4057050424
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_delay_done__pf, "sniper_delay_done" }, // 2514563192
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__sniper_fire__pf, "sniper_fire" }, // 2827602735
		{ &Z_Construct_UFunction_Arifle_C__pf3559600238_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 1527341593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "rifle__pf3559600238.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "rifle_C" },
		{ "ReplaceConverted", "/Game/blueprints/player/tool/rifle.rifle_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__max_ammo__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Max Ammo" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "max_ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__max_ammo__pf = { "max_ammo", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__max_ammo__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__max_ammo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__max_ammo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__cur_ammo__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Ammo" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_ammo" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__cur_ammo__pf = { "cur_ammo", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__cur_ammo__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__cur_ammo__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__cur_ammo__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__damage_per_bullet__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Damage Per Bullet" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "damage_per_bullet" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__damage_per_bullet__pf = { "damage_per_bullet", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__damage_per_bullet__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__damage_per_bullet__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__damage_per_bullet__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_delay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Automatic Fire Delay" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "automatic_fire_delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_delay__pf = { "automatic_fire_delay", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__automatic_fire_delay__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_delay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_delay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_handle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Automatic Fire Handle" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "automatic_fire_handle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_handle__pf = { "automatic_fire_handle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__automatic_fire_handle__pf), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_handle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_handle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__zoom_FOV_angle__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Zoom FOV Angle" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "zoom_FOV_angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__zoom_FOV_angle__pf = { "zoom_FOV_angle", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__zoom_FOV_angle__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__zoom_FOV_angle__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__zoom_FOV_angle__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Aiming" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "is_aiming" },
	};
#endif
	void Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf_SetBit(void* Obj)
	{
		((Arifle_C__pf3559600238*)Obj)->bpv__is_aiming__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf = { "is_aiming", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Arifle_C__pf3559600238), &Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Sniper Firable" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "is_sniper_firable" },
	};
#endif
	void Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf_SetBit(void* Obj)
	{
		((Arifle_C__pf3559600238*)Obj)->bpv__is_sniper_firable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf = { "is_sniper_firable", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Arifle_C__pf3559600238), &Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__sniper_fire_delay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Sniper Fire Delay" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "sniper_fire_delay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__sniper_fire_delay__pf = { "sniper_fire_delay", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__sniper_fire_delay__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__sniper_fire_delay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__sniper_fire_delay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__reload_time__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Reload Time" },
		{ "ModuleRelativePath", "Public/rifle__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "reload_time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__reload_time__pf = { "reload_time", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Arifle_C__pf3559600238, bpv__reload_time__pf), METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__reload_time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__reload_time__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Arifle_C__pf3559600238_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__max_ammo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__cur_ammo__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__damage_per_bullet__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_delay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__automatic_fire_handle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__zoom_FOV_angle__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_aiming__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__is_sniper_firable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__sniper_fire_delay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Arifle_C__pf3559600238_Statics::NewProp_bpv__reload_time__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Arifle_C__pf3559600238_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Arifle_C__pf3559600238>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Arifle_C__pf3559600238_Statics::ClassParams = {
		&Arifle_C__pf3559600238::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Arifle_C__pf3559600238_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Arifle_C__pf3559600238_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Arifle_C__pf3559600238()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/player/tool/rifle"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("rifle_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Arifle_C__pf3559600238_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Arifle_C__pf3559600238, TEXT("rifle_C"), 4289627166);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Arifle_C__pf3559600238>()
	{
		return Arifle_C__pf3559600238::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Arifle_C__pf3559600238(Z_Construct_UClass_Arifle_C__pf3559600238, &Arifle_C__pf3559600238::StaticClass, TEXT("/Game/blueprints/player/tool/rifle"), TEXT("rifle_C"), true, TEXT("/Game/blueprints/player/tool/rifle"), TEXT("/Game/blueprints/player/tool/rifle.rifle_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Arifle_C__pf3559600238);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
