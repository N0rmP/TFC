// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BasicModule1__pf2556257598.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicModule1__pf2556257598() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBasicModule1_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBasicModule1_C__pf2556257598();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UModule_C__pf2556257598();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBasicModule1_C__pf2556257598::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasicModule1_C__pf2556257598::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBasicModule1_C__pf2556257598::execbpf__ReceiveActorBeginOverlap_1__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap_1__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void UBasicModule1_C__pf2556257598::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void UBasicModule1_C__pf2556257598::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BasicModule1_C__pf2556257598_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf),&Parms);
	}
	void UBasicModule1_C__pf2556257598::StaticRegisterNativesUBasicModule1_C__pf2556257598()
	{
		UClass* Class = UBasicModule1_C__pf2556257598::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap_1", &UBasicModule1_C__pf2556257598::execbpf__ReceiveActorBeginOverlap_1__pf },
			{ "ReceiveBeginPlay", &UBasicModule1_C__pf2556257598::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &UBasicModule1_C__pf2556257598::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics
	{
		struct BasicModule1_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BasicModule1_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicModule1_C__pf2556257598, nullptr, "ReceiveActorBeginOverlap_1", nullptr, nullptr, sizeof(BasicModule1_C__pf2556257598_eventbpf__ReceiveActorBeginOverlap_1__pf_Parms), Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBasicModule1_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** t * Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayt * or when the component is dynamically created if the Actor has already BegunPlay. t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicModule1_C__pf2556257598, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBasicModule1_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BasicModule1_C__pf2556257598_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame if tick is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame if tick is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicModule1_C__pf2556257598, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BasicModule1_C__pf2556257598_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBasicModule1_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasicModule1_C__pf2556257598_NoRegister()
	{
		return UBasicModule1_C__pf2556257598::StaticClass();
	}
	struct Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b2l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__K2Node_Event_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b2l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b2l__CallFunc_find_towers_target_towers_return__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModule_C__pf2556257598,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveActorBeginOverlap_1__pf, "ReceiveActorBeginOverlap_1" }, // 83123721
		{ &Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1228271816
		{ &Z_Construct_UFunction_UBasicModule1_C__pf2556257598_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3969478316
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasicModule1__pf2556257598.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BasicModule1_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Modules/BasicModule1.BasicModule1_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicModule1_C__pf2556257598, b2l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicModule1_C__pf2556257598, b2l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMain_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf = { "K2Node_DynamicCast_AsMain_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicModule1_C__pf2556257598, b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf), Z_Construct_UClass_UMain_GameInstance_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UBasicModule1_C__pf2556257598*)Obj)->b2l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBasicModule1_C__pf2556257598), &Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "CallFunc_get_tower_manager_tower_manager_return" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf = { "CallFunc_get_tower_manager_tower_manager_return", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicModule1_C__pf2556257598, b2l__CallFunc_get_tower_manager_tower_manager_return__pf), Z_Construct_UClass_Atower_manager_C__pf3789721252_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_Inner = { "b2l__CallFunc_find_towers_target_towers_return__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATower_C__pf711247040_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BasicModule1__pf2556257598.h" },
		{ "OverrideNativeName", "CallFunc_find_towers_target_towers_return" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf = { "CallFunc_find_towers_target_towers_return", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBasicModule1_C__pf2556257598, b2l__CallFunc_find_towers_target_towers_return__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_get_tower_manager_tower_manager_return__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::NewProp_b2l__CallFunc_find_towers_target_towers_return__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicModule1_C__pf2556257598>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::ClassParams = {
		&UBasicModule1_C__pf2556257598::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicModule1_C__pf2556257598()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Modules/BasicModule1"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BasicModule1_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasicModule1_C__pf2556257598_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBasicModule1_C__pf2556257598, TEXT("BasicModule1_C"), 3274027994);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBasicModule1_C__pf2556257598>()
	{
		return UBasicModule1_C__pf2556257598::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicModule1_C__pf2556257598(Z_Construct_UClass_UBasicModule1_C__pf2556257598, &UBasicModule1_C__pf2556257598::StaticClass, TEXT("/Game/blueprints/OnCollections/Modules/BasicModule1"), TEXT("BasicModule1_C"), true, TEXT("/Game/blueprints/OnCollections/Modules/BasicModule1"), TEXT("/Game/blueprints/OnCollections/Modules/BasicModule1.BasicModule1_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicModule1_C__pf2556257598);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
