// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/line_manager__pf3789721252.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeline_manager__pf3789721252() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aline_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aline_manager_C__pf3789721252();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(Aline_manager_C__pf3789721252::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aline_manager_C__pf3789721252::execbpf__create_new_line__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__create_new_line__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aline_manager_C__pf3789721252::execbpf__place_line__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__coor_1__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__coor_2__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__place_line__pf(Z_Param_bpp__coor_1__pf,Z_Param_bpp__coor_2__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aline_manager_C__pf3789721252::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void Aline_manager_C__pf3789721252::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void Aline_manager_C__pf3789721252::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		line_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf),&Parms);
	}
	void Aline_manager_C__pf3789721252::StaticRegisterNativesAline_manager_C__pf3789721252()
	{
		UClass* Class = Aline_manager_C__pf3789721252::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "create_new_line", &Aline_manager_C__pf3789721252::execbpf__create_new_line__pf },
			{ "place_line", &Aline_manager_C__pf3789721252::execbpf__place_line__pf },
			{ "ReceiveBeginPlay", &Aline_manager_C__pf3789721252::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &Aline_manager_C__pf3789721252::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "create_new_line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aline_manager_C__pf3789721252, nullptr, "create_new_line", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aline_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "create_new_line" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics
	{
		struct line_manager_C__pf3789721252_eventbpf__place_line__pf_Parms
		{
			FVector bpp__coor_1__pf;
			FVector bpp__coor_2__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__coor_1__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__coor_2__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::NewProp_bpp__coor_1__pf = { "bpp__coor_1__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(line_manager_C__pf3789721252_eventbpf__place_line__pf_Parms, bpp__coor_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::NewProp_bpp__coor_2__pf = { "bpp__coor_2__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(line_manager_C__pf3789721252_eventbpf__place_line__pf_Parms, bpp__coor_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::NewProp_bpp__coor_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::NewProp_bpp__coor_2__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "place_line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aline_manager_C__pf3789721252, nullptr, "place_line", nullptr, nullptr, sizeof(line_manager_C__pf3789721252_eventbpf__place_line__pf_Parms), Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aline_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "place_line" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aline_manager_C__pf3789721252, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aline_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(line_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aline_manager_C__pf3789721252, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(line_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_Aline_manager_C__pf3789721252();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aline_manager_C__pf3789721252_NoRegister()
	{
		return Aline_manager_C__pf3789721252::StaticClass();
	}
	struct Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__line_manager_root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__line_manager_root__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Spline_DMI_map__pf_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Spline_DMI_map__pf_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Spline_DMI_map__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_bpv__Spline_DMI_map__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__available_line_arr__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__available_line_arr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__available_line_arr__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__cur_line_arr__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__cur_line_arr__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__cur_line_arr__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Loop_Counter_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_coor_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_CustomEvent_coor_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_coor_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_CustomEvent_coor_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Map_Find_Value__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Map_Find_Value__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____struct_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l_____struct_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Map_Find_Value_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Map_Find_Value_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__create_new_line__pf, "create_new_line" }, // 2595802990
		{ &Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__place_line__pf, "place_line" }, // 915118823
		{ &Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3688737729
		{ &Z_Construct_UFunction_Aline_manager_C__pf3789721252_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2157966693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "line_manager__pf3789721252.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "line_manager_C" },
		{ "ReplaceConverted", "/Game/blueprints/others/Observer/line_manager.line_manager_C,/Game/blueprints/others/Observer/temp.temp_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__line_manager_root__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "line_manager_root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__line_manager_root__pf = { "line_manager_root", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, bpv__line_manager_root__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__line_manager_root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__line_manager_root__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_ValueProp = { "bpv__Spline_DMI_map__pf", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_Key_KeyProp = { "bpv__Spline_DMI_map__pf_Key", nullptr, (EPropertyFlags)0x0000000000080001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spline DMI Map" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Spline_DMI_map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf = { "Spline_DMI_map", nullptr, (EPropertyFlags)0x0010008000010005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, bpv__Spline_DMI_map__pf), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf_Inner = { "bpv__available_line_arr__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Available Line Arr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "available_line_arr" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf = { "available_line_arr", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, bpv__available_line_arr__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf_Inner = { "bpv__cur_line_arr__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Cur Line Arr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "cur_line_arr" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf = { "cur_line_arr", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, bpv__cur_line_arr__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf = { "___int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l_____int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Array_Index_Variable__pf = { "___int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l_____int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf = { "___int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l_____int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_coor_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_1__pf = { "K2Node_CustomEvent_coor_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__K2Node_CustomEvent_coor_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_coor_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_2__pf = { "K2Node_CustomEvent_coor_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__K2Node_CustomEvent_coor_2__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Map_Find_Value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value__pf = { "CallFunc_Map_Find_Value", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_Map_Find_Value__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____struct_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "___struct_Variable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____struct_Variable__pf = { "___struct_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l_____struct_Variable__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____struct_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____struct_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_AddComponent_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf = { "CallFunc_AddComponent_ReturnValue", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_AddComponent_ReturnValue__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_Map_Find_Value_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value_1__pf = { "CallFunc_Map_Find_Value_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_Map_Find_Value_1__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_CreateDynamicMaterialInstance_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = { "CallFunc_CreateDynamicMaterialInstance_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/line_manager__pf3789721252.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aline_manager_C__pf3789721252, b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__line_manager_root__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__Spline_DMI_map__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__available_line_arr__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_bpv__cur_line_arr__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____int_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__K2Node_CustomEvent_coor_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l_____struct_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_AddComponent_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_Map_Find_Value_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aline_manager_C__pf3789721252>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::ClassParams = {
		&Aline_manager_C__pf3789721252::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aline_manager_C__pf3789721252()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/others/Observer/line_manager"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("line_manager_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aline_manager_C__pf3789721252_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(Aline_manager_C__pf3789721252, TEXT("line_manager_C"), 1027465104);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<Aline_manager_C__pf3789721252>()
	{
		return Aline_manager_C__pf3789721252::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aline_manager_C__pf3789721252(Z_Construct_UClass_Aline_manager_C__pf3789721252, &Aline_manager_C__pf3789721252::StaticClass, TEXT("/Game/blueprints/others/Observer/line_manager"), TEXT("line_manager_C"), true, TEXT("/Game/blueprints/others/Observer/line_manager"), TEXT("/Game/blueprints/others/Observer/line_manager.line_manager_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aline_manager_C__pf3789721252);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
