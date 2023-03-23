// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/abst_tool__pf3559600238.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeabst_tool__pf3559600238() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__get_owners_linetracing__pf)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__lintraced_actor__pf);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_bpp__linetraced_hit_bone__pf);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__linetraced_location__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__get_owners_linetracing__pf(Z_Param_Out_bpp__lintraced_actor__pf,Z_Param_Out_bpp__linetraced_hit_bone__pf,Z_Param_Out_bpp__linetraced_location__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__set_tool_owner__pf)
	{
		P_GET_OBJECT(Aplayer_character_C__pf2509438801,Z_Param_bpp__val__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__set_tool_owner__pf(Z_Param_bpp__val__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__R_button__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__R_button__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__right_click_off__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__right_click_off__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__right_click_on__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__right_click_on__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__left_click_off__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__left_click_off__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aabst_tool_C__pf3559600238::execbpf__left_click_on__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__left_click_on__pf();
		P_NATIVE_END;
	}
	void Aabst_tool_C__pf3559600238::StaticRegisterNativesAabst_tool_C__pf3559600238()
	{
		UClass* Class = Aabst_tool_C__pf3559600238::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "get_owners_linetracing", &Aabst_tool_C__pf3559600238::execbpf__get_owners_linetracing__pf },
			{ "left_click_off", &Aabst_tool_C__pf3559600238::execbpf__left_click_off__pf },
			{ "left_click_on", &Aabst_tool_C__pf3559600238::execbpf__left_click_on__pf },
			{ "R_button", &Aabst_tool_C__pf3559600238::execbpf__R_button__pf },
			{ "right_click_off", &Aabst_tool_C__pf3559600238::execbpf__right_click_off__pf },
			{ "right_click_on", &Aabst_tool_C__pf3559600238::execbpf__right_click_on__pf },
			{ "set_tool_owner", &Aabst_tool_C__pf3559600238::execbpf__set_tool_owner__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics
	{
		struct abst_tool_C__pf3559600238_eventbpf__get_owners_linetracing__pf_Parms
		{
			AActor* bpp__lintraced_actor__pf;
			FName bpp__linetraced_hit_bone__pf;
			FVector bpp__linetraced_location__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__lintraced_actor__pf;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bpp__linetraced_hit_bone__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__linetraced_location__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__lintraced_actor__pf = { "bpp__lintraced_actor__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(abst_tool_C__pf3559600238_eventbpf__get_owners_linetracing__pf_Parms, bpp__lintraced_actor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__linetraced_hit_bone__pf = { "bpp__linetraced_hit_bone__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient, 1, STRUCT_OFFSET(abst_tool_C__pf3559600238_eventbpf__get_owners_linetracing__pf_Parms, bpp__linetraced_hit_bone__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__linetraced_location__pf = { "bpp__linetraced_location__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(abst_tool_C__pf3559600238_eventbpf__get_owners_linetracing__pf_Parms, bpp__linetraced_location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__lintraced_actor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__linetraced_hit_bone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::NewProp_bpp__linetraced_location__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "get_owners_linetracing" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "get_owners_linetracing", nullptr, nullptr, sizeof(abst_tool_C__pf3559600238_eventbpf__get_owners_linetracing__pf_Parms), Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "get_owners_linetracing" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "left_click_off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "left_click_off", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "left_click_off" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "left_click_on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "left_click_on", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "left_click_on" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "R_button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "R_button", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "R_button" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "right_click_off" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "right_click_off", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "right_click_off" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "right_click_on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "right_click_on", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "right_click_on" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics
	{
		struct abst_tool_C__pf3559600238_eventbpf__set_tool_owner__pf_Parms
		{
			Aplayer_character_C__pf2509438801* bpp__val__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__val__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::NewProp_bpp__val__pf = { "bpp__val__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(abst_tool_C__pf3559600238_eventbpf__set_tool_owner__pf_Parms, bpp__val__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::NewProp_bpp__val__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "set_tool_owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aabst_tool_C__pf3559600238, nullptr, "set_tool_owner", nullptr, nullptr, sizeof(abst_tool_C__pf3559600238_eventbpf__set_tool_owner__pf_Parms), Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aabst_tool_C__pf3559600238();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "set_tool_owner" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238_NoRegister()
	{
		return Aabst_tool_C__pf3559600238::StaticClass();
	}
	struct Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__tool_mesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__tool_mesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__tool_owner__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__tool_owner__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__get_owners_linetracing__pf, "get_owners_linetracing" }, // 1138139139
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_off__pf, "left_click_off" }, // 848693539
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__left_click_on__pf, "left_click_on" }, // 2850495806
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__R_button__pf, "R_button" }, // 2075806621
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_off__pf, "right_click_off" }, // 619874454
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__right_click_on__pf, "right_click_on" }, // 4268830562
		{ &Z_Construct_UFunction_Aabst_tool_C__pf3559600238_bpf__set_tool_owner__pf, "set_tool_owner" }, // 4069432820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "abst_tool__pf3559600238.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "abst_tool_C" },
		{ "ReplaceConverted", "/Game/blueprints/player/tool/abst_tool.abst_tool_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_mesh__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "tool_mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_mesh__pf = { "tool_mesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aabst_tool_C__pf3559600238, bpv__tool_mesh__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_mesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_mesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aabst_tool_C__pf3559600238, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_owner__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tool Owner" },
		{ "ModuleRelativePath", "Public/abst_tool__pf3559600238.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "tool_owner" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_owner__pf = { "tool_owner", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aabst_tool_C__pf3559600238, bpv__tool_owner__pf), Z_Construct_UClass_Aplayer_character_C__pf2509438801_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_owner__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_owner__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_mesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::NewProp_bpv__tool_owner__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aabst_tool_C__pf3559600238>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::ClassParams = {
		&Aabst_tool_C__pf3559600238::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aabst_tool_C__pf3559600238()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/player/tool/abst_tool"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("abst_tool_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aabst_tool_C__pf3559600238_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aabst_tool_C__pf3559600238, TEXT("abst_tool_C"), 415816692);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aabst_tool_C__pf3559600238>()
	{
		return Aabst_tool_C__pf3559600238::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aabst_tool_C__pf3559600238(Z_Construct_UClass_Aabst_tool_C__pf3559600238, &Aabst_tool_C__pf3559600238::StaticClass, TEXT("/Game/blueprints/player/tool/abst_tool"), TEXT("abst_tool_C"), true, TEXT("/Game/blueprints/player/tool/abst_tool"), TEXT("/Game/blueprints/player/tool/abst_tool.abst_tool_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aabst_tool_C__pf3559600238);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
