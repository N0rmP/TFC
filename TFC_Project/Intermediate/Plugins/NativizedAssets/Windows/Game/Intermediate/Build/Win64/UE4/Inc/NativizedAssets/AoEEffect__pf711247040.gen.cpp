// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AoEEffect__pf711247040.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAoEEffect__pf711247040() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAoEEffect_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAoEEffect_C__pf711247040();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAoETower_C__pf711247040_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAoEEffect_C__pf711247040::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAoEEffect_C__pf711247040::execbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__HitComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_STRUCT(FVector,Z_Param_bpp__NormalImpulse__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__Hit__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(Z_Param_bpp__HitComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__NormalImpulse__pf,Z_Param_Out_bpp__Hit__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAoEEffect_C__pf711247040::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	static FName NAME_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AAoEEffect_C__pf711247040::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		AoEEffect_C__pf711247040_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void AAoEEffect_C__pf711247040::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf),NULL);
	}
	void AAoEEffect_C__pf711247040::StaticRegisterNativesAAoEEffect_C__pf711247040()
	{
		UClass* Class = AAoEEffect_C__pf711247040::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature", &AAoEEffect_C__pf711247040::execbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf },
			{ "ReceiveTick", &AAoEEffect_C__pf711247040::execbpf__ReceiveTick__pf },
			{ "UserConstructionScript", &AAoEEffect_C__pf711247040::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics
	{
		struct AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__HitComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			FVector bpp__NormalImpulse__pf;
			FHitResult bpp__Hit__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__HitComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__Hit__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Hit__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf = { "bpp__HitComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf = { "bpp__NormalImpulse__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const = { "bpp__Hit__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms, bpp__Hit__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::NewProp_bpp__Hit__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAoEEffect_C__pf711247040, nullptr, "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature", nullptr, nullptr, sizeof(AoEEffect_C__pf711247040_eventbpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAoEEffect_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AoEEffect_C__pf711247040_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAoEEffect_C__pf711247040, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(AoEEffect_C__pf711247040_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAoEEffect_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAoEEffect_C__pf711247040, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAoEEffect_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAoEEffect_C__pf711247040_NoRegister()
	{
		return AAoEEffect_C__pf711247040::StaticClass();
	}
	struct Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Collision__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Collision__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Effect__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Effect__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__lifespan__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__lifespan__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__lifetime__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__lifetime__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AlreadyHit__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AlreadyHit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__AlreadyHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tower__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tower__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf, "BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature" }, // 3965513730
		{ &Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__ReceiveTick__pf, "ReceiveTick" }, // 845031976
		{ &Z_Construct_UFunction_AAoEEffect_C__pf711247040_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 701851568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AoEEffect__pf711247040.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AoEEffect_C" },
		{ "ReplaceConverted", "/Game/blueprints/Tower/AoEEffect.AoEEffect_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Collision__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "Collision" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Collision__pf = { "Collision", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__Collision__pf), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Collision__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Collision__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Effect__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "Effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Effect__pf = { "Effect", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__Effect__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Effect__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Effect__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifespan__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Lifespan" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "lifespan" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifespan__pf = { "lifespan", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__lifespan__pf), METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifespan__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifespan__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifetime__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Lifetime" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "lifetime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifetime__pf = { "lifetime", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__lifetime__pf), METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifetime__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifetime__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf_Inner = { "bpv__AlreadyHit__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Already Hit" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AlreadyHit" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf = { "AlreadyHit", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__AlreadyHit__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tower" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tower" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Tower__pf = { "Tower", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, bpv__Tower__pf), Z_Construct_UClass_AAoETower_C__pf711247040_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Tower__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf = { "K2Node_ComponentBoundEvent_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_ComponentBoundEvent_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_NormalImpulse" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = { "K2Node_ComponentBoundEvent_NormalImpulse", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_Hit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf = { "K2Node_ComponentBoundEvent_Hit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_ComponentBoundEvent_Hit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsEnemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf = { "K2Node_DynamicCast_AsEnemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_DynamicCast_AsEnemy_Base__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AAoEEffect_C__pf711247040*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAoEEffect_C__pf711247040), &Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AoEEffect__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAoEEffect_C__pf711247040, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Collision__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Effect__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifespan__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__lifetime__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__AlreadyHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_bpv__Tower__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_Hit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAoEEffect_C__pf711247040>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::ClassParams = {
		&AAoEEffect_C__pf711247040::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAoEEffect_C__pf711247040()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/Tower/AoEEffect"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AoEEffect_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAoEEffect_C__pf711247040_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AAoEEffect_C__pf711247040, TEXT("AoEEffect_C"), 1005370976);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AAoEEffect_C__pf711247040>()
	{
		return AAoEEffect_C__pf711247040::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAoEEffect_C__pf711247040(Z_Construct_UClass_AAoEEffect_C__pf711247040, &AAoEEffect_C__pf711247040::StaticClass, TEXT("/Game/blueprints/Tower/AoEEffect"), TEXT("AoEEffect_C"), true, TEXT("/Game/blueprints/Tower/AoEEffect"), TEXT("/Game/blueprints/Tower/AoEEffect.AoEEffect_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAoEEffect_C__pf711247040);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
