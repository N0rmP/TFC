// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ThirdPerson_AnimBP_armguard__pf4051366165.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPerson_AnimBP_armguard__pf4051366165() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateMachine();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Amidsize_enemy_C__pf839595025_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__AnimGraph__pf)
	{
		P_GET_STRUCT_REF(FPoseLink,Z_Param_Out_bpp__AnimGraph__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__AnimGraph__pf(Z_Param_Out_bpp__AnimGraph__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__BlueprintUpdateAnimation__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaTimeX__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BlueprintUpdateAnimation__pf(Z_Param_bpp__DeltaTimeX__pf);
		P_NATIVE_END;
	}
	static FName NAME_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf = FName(TEXT("BlueprintUpdateAnimation"));
	void UThirdPerson_AnimBP_armguard_C__pf4051366165::eventbpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
	{
		ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__BlueprintUpdateAnimation__pf_Parms Parms;
		Parms.bpp__DeltaTimeX__pf=bpp__DeltaTimeX__pf;
		ProcessEvent(FindFunctionChecked(NAME_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf),&Parms);
	}
	void UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticRegisterNativesUThirdPerson_AnimBP_armguard_C__pf4051366165()
	{
		UClass* Class = UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimGraph", &UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__AnimGraph__pf },
			{ "BlueprintUpdateAnimation", &UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__BlueprintUpdateAnimation__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678", &UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37", &UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf },
			{ "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329", &UThirdPerson_AnimBP_armguard_C__pf4051366165::execbpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics
	{
		struct ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__AnimGraph__pf_Parms
		{
			FPoseLink bpp__AnimGraph__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__AnimGraph__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf = { "bpp__AnimGraph__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__AnimGraph__pf_Parms, bpp__AnimGraph__pf), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::NewProp_bpp__AnimGraph__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::Function_MetaDataParams[] = {
		{ "AnimBlueprintFunction", "true" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraph" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, nullptr, "AnimGraph", nullptr, nullptr, sizeof(ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__AnimGraph__pf_Parms), Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf()
	{
		UObject* Outer = Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "AnimGraph" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaTimeX__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf = { "bpp__DeltaTimeX__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__BlueprintUpdateAnimation__pf_Parms, bpp__DeltaTimeX__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::NewProp_bpp__DeltaTimeX__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executed when the Animation is updated */" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "BlueprintUpdateAnimation" },
		{ "ToolTip", "Executed when the Animation is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, nullptr, "BlueprintUpdateAnimation", nullptr, nullptr, sizeof(ThirdPerson_AnimBP_armguard_C__pf4051366165_eventbpf__BlueprintUpdateAnimation__pf_Parms), Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf()
	{
		UObject* Outer = Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BlueprintUpdateAnimation" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf()
	{
		UObject* Outer = Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf()
	{
		UObject* Outer = Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, nullptr, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf()
	{
		UObject* Outer = Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_NoRegister()
	{
		return UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticClass();
	}
	struct Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_Root__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_Root__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_TransitionResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__AnimGraphNode_StateMachine__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsInAirx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__IsInAirx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsInAirx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Speed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__Speed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isguard__pf_MetaData[];
#endif
		static void NewProp_bpv__isguard__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isguard__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaTimeX__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__AnimGraph__pf, "AnimGraph" }, // 17153793
		{ &Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__BlueprintUpdateAnimation__pf, "BlueprintUpdateAnimation" }, // 1001249381
		{ &Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678" }, // 549242819
		{ &Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37" }, // 1154105850
		{ &Z_Construct_UFunction_UThirdPerson_AnimBP_armguard_C__pf4051366165_bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf, "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329" }, // 2154981725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "ThirdPerson_AnimBP_armguard_C" },
		{ "ReplaceConverted", "/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard.ThirdPerson_AnimBP_armguard_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_Root" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_Root__pf = { "AnimGraphNode_Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_Root__pf), Z_Construct_UScriptStruct_FAnimNode_Root, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_Root__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_TransitionResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf = { "AnimGraphNode_TransitionResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_TransitionResult__pf), Z_Construct_UScriptStruct_FAnimNode_TransitionResult, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_BlendSpacePlayer_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf = { "AnimGraphNode_BlendSpacePlayer_1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_BlendSpacePlayer_1__pf), Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf = { "AnimGraphNode_StateResult_1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_StateResult_1__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_BlendSpacePlayer" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf = { "AnimGraphNode_BlendSpacePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_BlendSpacePlayer__pf), Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf = { "AnimGraphNode_StateResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_StateResult__pf), Z_Construct_UScriptStruct_FAnimNode_StateResult, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "AnimGraphNode_StateMachine" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf = { "AnimGraphNode_StateMachine", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__AnimGraphNode_StateMachine__pf), Z_Construct_UScriptStruct_FAnimNode_StateMachine, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is in Air?" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "IsInAir?" },
	};
#endif
	void Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy_SetBit(void* Obj)
	{
		((UThirdPerson_AnimBP_armguard_C__pf4051366165*)Obj)->bpv__IsInAirx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy = { "IsInAir?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPerson_AnimBP_armguard_C__pf4051366165), &Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__Speed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Speed" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "Speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__Speed__pf = { "Speed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, bpv__Speed__pf), METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__Speed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__Speed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Isguard" },
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isguard" },
	};
#endif
	void Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf_SetBit(void* Obj)
	{
		((UThirdPerson_AnimBP_armguard_C__pf4051366165*)Obj)->bpv__isguard__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf = { "isguard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPerson_AnimBP_armguard_C__pf4051366165), &Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaTimeX" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf = { "K2Node_Event_DeltaTimeX", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, b0l__K2Node_Event_DeltaTimeX__pf), METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsMidsize_Enemy" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf = { "K2Node_DynamicCast_AsMidsize_Enemy", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UThirdPerson_AnimBP_armguard_C__pf4051366165, b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf), Z_Construct_UClass_Amidsize_enemy_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ThirdPerson_AnimBP_armguard__pf4051366165.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((UThirdPerson_AnimBP_armguard_C__pf4051366165*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UThirdPerson_AnimBP_armguard_C__pf4051366165), &Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_Root__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_TransitionResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_BlendSpacePlayer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__AnimGraphNode_StateMachine__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__IsInAirx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__Speed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_bpv__isguard__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_Event_DeltaTimeX__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThirdPerson_AnimBP_armguard_C__pf4051366165>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::ClassParams = {
		&UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ThirdPerson_AnimBP_armguard_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UThirdPerson_AnimBP_armguard_C__pf4051366165, TEXT("ThirdPerson_AnimBP_armguard_C"), 1179049711);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UThirdPerson_AnimBP_armguard_C__pf4051366165>()
	{
		return UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165(Z_Construct_UClass_UThirdPerson_AnimBP_armguard_C__pf4051366165, &UThirdPerson_AnimBP_armguard_C__pf4051366165::StaticClass, TEXT("/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard"), TEXT("ThirdPerson_AnimBP_armguard_C"), true, TEXT("/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard"), TEXT("/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard.ThirdPerson_AnimBP_armguard_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThirdPerson_AnimBP_armguard_C__pf4051366165);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
