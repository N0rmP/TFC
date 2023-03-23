// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/creature__pf937085289.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecreature__pf937085289() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Acreature_C__pf937085289();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UEffect_C__pf3439682450_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Udamagable_C__pf937085289_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Acreature_C__pf937085289::execbpf__Remove_Effect__pf)
	{
		P_GET_OBJECT(UEffect_C__pf3439682450,Z_Param_bpp__effect__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Remove_Effect__pf(Z_Param_bpp__effect__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Acreature_C__pf937085289::execbpf__Add_Effect__pf)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__effect__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Add_Effect__pf(Z_Param_bpp__effect__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Acreature_C__pf937085289::execbpf__take_damage__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__val__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__attacker__pf);
		P_GET_PROPERTY(FNameProperty,Z_Param_bpp__hit_bone_name__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__take_damage__pf(Z_Param_bpp__val__pf,Z_Param_bpp__attacker__pf,Z_Param_bpp__hit_bone_name__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Acreature_C__pf937085289::execbpf__die__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__die__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Acreature_C__pf937085289::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	static FName NAME_Acreature_C__pf937085289_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void Acreature_C__pf937085289::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Acreature_C__pf937085289_bpf__UserConstructionScript__pf),NULL);
	}
	void Acreature_C__pf937085289::StaticRegisterNativesAcreature_C__pf937085289()
	{
		UClass* Class = Acreature_C__pf937085289::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_Effect", &Acreature_C__pf937085289::execbpf__Add_Effect__pf },
			{ "die", &Acreature_C__pf937085289::execbpf__die__pf },
			{ "Remove_Effect", &Acreature_C__pf937085289::execbpf__Remove_Effect__pf },
			{ "take_damage", &Acreature_C__pf937085289::execbpf__take_damage__pf },
			{ "UserConstructionScript", &Acreature_C__pf937085289::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics
	{
		struct creature_C__pf937085289_eventbpf__Add_Effect__pf_Parms
		{
			UClass* bpp__effect__pf;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__effect__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::NewProp_bpp__effect__pf = { "bpp__effect__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(creature_C__pf937085289_eventbpf__Add_Effect__pf_Parms, bpp__effect__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::NewProp_bpp__effect__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "Add_Effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acreature_C__pf937085289, nullptr, "Add_Effect", nullptr, nullptr, sizeof(creature_C__pf937085289_eventbpf__Add_Effect__pf_Parms), Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf()
	{
		UObject* Outer = Z_Construct_UClass_Acreature_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Add_Effect" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "die" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acreature_C__pf937085289, nullptr, "die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf()
	{
		UObject* Outer = Z_Construct_UClass_Acreature_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "die" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics
	{
		struct creature_C__pf937085289_eventbpf__Remove_Effect__pf_Parms
		{
			UEffect_C__pf3439682450* bpp__effect__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__effect__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__effect__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::NewProp_bpp__effect__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::NewProp_bpp__effect__pf = { "bpp__effect__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(creature_C__pf937085289_eventbpf__Remove_Effect__pf_Parms, bpp__effect__pf), Z_Construct_UClass_UEffect_C__pf3439682450_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::NewProp_bpp__effect__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::NewProp_bpp__effect__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::NewProp_bpp__effect__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "Remove_Effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acreature_C__pf937085289, nullptr, "Remove_Effect", nullptr, nullptr, sizeof(creature_C__pf937085289_eventbpf__Remove_Effect__pf_Parms), Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf()
	{
		UObject* Outer = Z_Construct_UClass_Acreature_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Remove_Effect" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics
	{
		struct creature_C__pf937085289_eventbpf__take_damage__pf_Parms
		{
			int32 bpp__val__pf;
			AActor* bpp__attacker__pf;
			FName bpp__hit_bone_name__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__val__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__attacker__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpp__hit_bone_name__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(creature_C__pf937085289_eventbpf__take_damage__pf_Parms, bpp__val__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__attacker__pf = { "bpp__attacker__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(creature_C__pf937085289_eventbpf__take_damage__pf_Parms, bpp__attacker__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__hit_bone_name__pf = { "bpp__hit_bone_name__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(creature_C__pf937085289_eventbpf__take_damage__pf_Parms, bpp__hit_bone_name__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__val__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__attacker__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::NewProp_bpp__hit_bone_name__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "take_damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acreature_C__pf937085289, nullptr, "take_damage", nullptr, nullptr, sizeof(creature_C__pf937085289_eventbpf__take_damage__pf_Parms), Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf()
	{
		UObject* Outer = Z_Construct_UClass_Acreature_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "take_damage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acreature_C__pf937085289, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_Acreature_C__pf937085289();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Acreature_C__pf937085289_NoRegister()
	{
		return Acreature_C__pf937085289::StaticClass();
	}
	struct Z_Construct_UClass_Acreature_C__pf937085289_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__damagable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__damagable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpeedAmp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SpeedAmp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Vulnerablility__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Vulnerablility__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Final_Vulnerability__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Final_Vulnerability__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__LastAttacker__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__LastAttacker__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acreature_C__pf937085289_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Acreature_C__pf937085289_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Add_Effect__pf, "Add_Effect" }, // 3560307785
		{ &Z_Construct_UFunction_Acreature_C__pf937085289_bpf__die__pf, "die" }, // 4232480083
		{ &Z_Construct_UFunction_Acreature_C__pf937085289_bpf__Remove_Effect__pf, "Remove_Effect" }, // 560518811
		{ &Z_Construct_UFunction_Acreature_C__pf937085289_bpf__take_damage__pf, "take_damage" }, // 1085916017
		{ &Z_Construct_UFunction_Acreature_C__pf937085289_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 875765609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "creature__pf937085289.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "creature_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/creature.creature_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__damagable__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "OverrideNativeName", "damagable" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__damagable__pf = { "damagable", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acreature_C__pf937085289, bpv__damagable__pf), Z_Construct_UClass_Udamagable_C__pf937085289_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__damagable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__damagable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__SpeedAmp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed Amp" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SpeedAmp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__SpeedAmp__pf = { "SpeedAmp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acreature_C__pf937085289, bpv__SpeedAmp__pf), METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__SpeedAmp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__SpeedAmp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Vulnerablility__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Vulnerablility" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Vulnerablility" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Vulnerablility__pf = { "Vulnerablility", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acreature_C__pf937085289, bpv__Vulnerablility__pf), METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Vulnerablility__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Vulnerablility__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Final_Vulnerability__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Final Vulnerability" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Final_Vulnerability" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Final_Vulnerability__pf = { "Final_Vulnerability", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acreature_C__pf937085289, bpv__Final_Vulnerability__pf), METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Final_Vulnerability__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Final_Vulnerability__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__LastAttacker__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Last Attacker" },
		{ "ModuleRelativePath", "Public/creature__pf937085289.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "LastAttacker" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__LastAttacker__pf = { "LastAttacker", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acreature_C__pf937085289, bpv__LastAttacker__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__LastAttacker__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__LastAttacker__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Acreature_C__pf937085289_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__damagable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__SpeedAmp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Vulnerablility__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__Final_Vulnerability__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acreature_C__pf937085289_Statics::NewProp_bpv__LastAttacker__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acreature_C__pf937085289_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acreature_C__pf937085289>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acreature_C__pf937085289_Statics::ClassParams = {
		&Acreature_C__pf937085289::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Acreature_C__pf937085289_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acreature_C__pf937085289_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acreature_C__pf937085289_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acreature_C__pf937085289()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/creature"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("creature_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acreature_C__pf937085289_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Acreature_C__pf937085289, TEXT("creature_C"), 2807503631);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Acreature_C__pf937085289>()
	{
		return Acreature_C__pf937085289::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acreature_C__pf937085289(Z_Construct_UClass_Acreature_C__pf937085289, &Acreature_C__pf937085289::StaticClass, TEXT("/Game/blueprints/others/creature"), TEXT("creature_C"), true, TEXT("/Game/blueprints/others/creature"), TEXT("/Game/blueprints/others/creature.creature_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acreature_C__pf937085289);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
