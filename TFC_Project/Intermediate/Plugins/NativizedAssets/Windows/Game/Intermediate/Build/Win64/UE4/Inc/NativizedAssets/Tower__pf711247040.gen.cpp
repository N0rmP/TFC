// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Tower__pf711247040.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower__pf711247040() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ATower_C__pf711247040();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__Apply_Module__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__index__pf);
		P_GET_UBOOL_REF(Z_Param_Out_bpp__applied__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Apply_Module__pf(Z_Param_bpp__index__pf,Z_Param_Out_bpp__applied__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__LookAt__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__LookAt__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__Attack__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Attack__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__PowerUpgrade__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PowerUpgrade__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__ModuleUpgrade__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__ModuleIndex__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ModuleUpgrade__pf(Z_Param_bpp__ModuleIndex__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__TowerJammed__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TowerJammed__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATower_C__pf711247040::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ATower_C__pf711247040::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ATower_C__pf711247040_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ATower_C__pf711247040::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		Tower_C__pf711247040_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ATower_C__pf711247040_bpf__ReceiveTick__pf),&Parms);
	}
	void ATower_C__pf711247040::StaticRegisterNativesATower_C__pf711247040()
	{
		UClass* Class = ATower_C__pf711247040::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Apply_Module", &ATower_C__pf711247040::execbpf__Apply_Module__pf },
			{ "Attack", &ATower_C__pf711247040::execbpf__Attack__pf },
			{ "BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature", &ATower_C__pf711247040::execbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf },
			{ "LookAt", &ATower_C__pf711247040::execbpf__LookAt__pf },
			{ "ModuleUpgrade", &ATower_C__pf711247040::execbpf__ModuleUpgrade__pf },
			{ "PowerUpgrade", &ATower_C__pf711247040::execbpf__PowerUpgrade__pf },
			{ "ReceiveBeginPlay", &ATower_C__pf711247040::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ATower_C__pf711247040::execbpf__ReceiveTick__pf },
			{ "TowerJammed", &ATower_C__pf711247040::execbpf__TowerJammed__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics
	{
		struct Tower_C__pf711247040_eventbpf__Apply_Module__pf_Parms
		{
			int32 bpp__index__pf;
			bool bpp__applied__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__index__pf;
		static void NewProp_bpp__applied__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__applied__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__index__pf = { "bpp__index__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__Apply_Module__pf_Parms, bpp__index__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__applied__pf_SetBit(void* Obj)
	{
		((Tower_C__pf711247040_eventbpf__Apply_Module__pf_Parms*)Obj)->bpp__applied__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__applied__pf = { "bpp__applied__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(Tower_C__pf711247040_eventbpf__Apply_Module__pf_Parms), &Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__applied__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__index__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::NewProp_bpp__applied__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "Apply_Module" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "Apply_Module", nullptr, nullptr, sizeof(Tower_C__pf711247040_eventbpf__Apply_Module__pf_Parms), Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Apply_Module" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "Attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Attack" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics
	{
		struct Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(Tower_C__pf711247040_eventbpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "LookAt" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "LookAt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "LookAt" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics
	{
		struct Tower_C__pf711247040_eventbpf__ModuleUpgrade__pf_Parms
		{
			int32 bpp__ModuleIndex__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__ModuleIndex__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::NewProp_bpp__ModuleIndex__pf = { "bpp__ModuleIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__ModuleUpgrade__pf_Parms, bpp__ModuleIndex__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::NewProp_bpp__ModuleIndex__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "ModuleUpgrade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "ModuleUpgrade", nullptr, nullptr, sizeof(Tower_C__pf711247040_eventbpf__ModuleUpgrade__pf_Parms), Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ModuleUpgrade" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "PowerUpgrade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "PowerUpgrade", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PowerUpgrade" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(Tower_C__pf711247040_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(Tower_C__pf711247040_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "TowerJammed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATower_C__pf711247040, nullptr, "TowerJammed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf()
	{
		UObject* Outer = Z_Construct_UClass_ATower_C__pf711247040();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TowerJammed" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATower_C__pf711247040_NoRegister()
	{
		return ATower_C__pf711247040::StaticClass();
	}
	struct Z_Construct_UClass_ATower_C__pf711247040_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Body__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Body__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaulsSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaulsSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Range__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Range__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShootingPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ShootingPoint__pf;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__ModuleList__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ModuleList__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__ModuleList__pf;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ModuleApplied__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ModuleApplied__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__ModuleApplied__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__EnemyInSight__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__EnemyInSight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__EnemyInSight__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ATK_DMG__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__ATK_DMG__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ATK_SPD__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ATK_SPD__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ATK_RANGE__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__ATK_RANGE__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AttackTimer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__AttackTimer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TowerPrice__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__TowerPrice__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Target__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Target__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PowerUp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PowerUp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PowerUpAmount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PowerUpAmount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PowerAmp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__PowerAmp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__PowerUpCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__PowerUpCount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SPD_AMP__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__SPD_AMP__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Jammed__pf_MetaData[];
#endif
		static void NewProp_bpv__Jammed__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__Jammed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__JamTimer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__JamTimer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SlowEff__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__SlowEff__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l_____bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l_____bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Array_Index_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__CallFunc_Array_Get_Item_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l_____int_Loop_Counter_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_C__pf711247040_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATower_C__pf711247040_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__Apply_Module__pf, "Apply_Module" }, // 2487385306
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__Attack__pf, "Attack" }, // 2598058464
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf, "BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature" }, // 2772505844
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__LookAt__pf, "LookAt" }, // 4243729275
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__ModuleUpgrade__pf, "ModuleUpgrade" }, // 3742684178
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__PowerUpgrade__pf, "PowerUpgrade" }, // 1771893028
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 522402711
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3784591003
		{ &Z_Construct_UFunction_ATower_C__pf711247040_bpf__TowerJammed__pf, "TowerJammed" }, // 1015482550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tower__pf711247040.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Tower_C" },
		{ "ReplaceConverted", "/Game/blueprints/Tower/Tower.Tower_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "Body" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Body__pf = { "Body", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__Body__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Body__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__DefaulsSceneRoot__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "DefaulsSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__DefaulsSceneRoot__pf = { "DefaulsSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__DefaulsSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__DefaulsSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__DefaulsSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Range__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "Range" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Range__pf = { "Range", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__Range__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Range__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Range__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ShootingPoint__pf_MetaData[] = {
		{ "Category", "\xeb\x94\x94\xed\x8f\xb4\xed\x8a\xb8" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "ShootingPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ShootingPoint__pf = { "ShootingPoint", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ShootingPoint__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ShootingPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ShootingPoint__pf_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf_Inner = { "bpv__ModuleList__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module List" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ModuleList" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf = { "ModuleList", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ModuleList__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf_Inner = { "bpv__ModuleApplied__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Module Applied" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ModuleApplied" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf = { "ModuleApplied", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ModuleApplied__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf_Inner = { "bpv__EnemyInSight__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Enemy in Sight" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "EnemyInSight" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf = { "EnemyInSight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__EnemyInSight__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_DMG__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "ATK DMG" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ATK_DMG" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_DMG__pf = { "ATK_DMG", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ATK_DMG__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_DMG__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_DMG__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_SPD__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "ATK SPD" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ATK_SPD" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_SPD__pf = { "ATK_SPD", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ATK_SPD__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_SPD__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_SPD__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_RANGE__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "ATK RANGE" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ATK_RANGE" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_RANGE__pf = { "ATK_RANGE", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__ATK_RANGE__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_RANGE__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_RANGE__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__AttackTimer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Attack Timer" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AttackTimer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__AttackTimer__pf = { "AttackTimer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__AttackTimer__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__AttackTimer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__AttackTimer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__TowerPrice__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tower Price" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "TowerPrice" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__TowerPrice__pf = { "TowerPrice", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__TowerPrice__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__TowerPrice__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__TowerPrice__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Target__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Target" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Target__pf = { "Target", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__Target__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Target__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Target__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Power Up" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PowerUp" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUp__pf = { "PowerUp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__PowerUp__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpAmount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Power Up Amount" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PowerUpAmount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpAmount__pf = { "PowerUpAmount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__PowerUpAmount__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpAmount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpAmount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerAmp__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Power Amp" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PowerAmp" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerAmp__pf = { "PowerAmp", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__PowerAmp__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerAmp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerAmp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Power Up Count" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "PowerUpCount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpCount__pf = { "PowerUpCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__PowerUpCount__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpCount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SPD_AMP__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "SPD AMP" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SPD_AMP" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SPD_AMP__pf = { "SPD_AMP", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__SPD_AMP__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SPD_AMP__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SPD_AMP__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Jammed" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Jammed" },
	};
#endif
	void Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf_SetBit(void* Obj)
	{
		((ATower_C__pf711247040*)Obj)->bpv__Jammed__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf = { "Jammed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATower_C__pf711247040), &Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__JamTimer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Jam Timer" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "JamTimer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__JamTimer__pf = { "JamTimer", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__JamTimer__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__JamTimer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__JamTimer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SlowEff__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Slow Eff" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SlowEff" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SlowEff__pf = { "SlowEff", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, bpv__SlowEff__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SlowEff__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SlowEff__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "___bool_Variable" },
	};
#endif
	void Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf_SetBit(void* Obj)
	{
		((ATower_C__pf711247040*)Obj)->b0l_____bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf = { "___bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATower_C__pf711247040), &Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "___int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Array_Index_Variable__pf = { "___int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l_____int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Array_Index_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsEnemy_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf = { "K2Node_DynamicCast_AsEnemy_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_DynamicCast_AsEnemy_Base__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ATower_C__pf711247040*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATower_C__pf711247040), &Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_ModuleIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf = { "K2Node_CustomEvent_ModuleIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_CustomEvent_ModuleIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner = { "b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_GetOverlappingActors_OverlappingActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf = { "CallFunc_GetOverlappingActors_OverlappingActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item_1" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf = { "CallFunc_Array_Get_Item_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__CallFunc_Array_Get_Item_1__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsEnemy_Base_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf = { "K2Node_DynamicCast_AsEnemy_Base_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf), Z_Construct_UClass_Aenemy_base_C__pf839595025_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ATower_C__pf711247040*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATower_C__pf711247040), &Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tower__pf711247040.h" },
		{ "OverrideNativeName", "___int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf = { "___int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATower_C__pf711247040, b0l_____int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATower_C__pf711247040_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Body__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__DefaulsSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Range__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ShootingPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleList__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ModuleApplied__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__EnemyInSight__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_DMG__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_SPD__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__ATK_RANGE__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__AttackTimer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__TowerPrice__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Target__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpAmount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerAmp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__PowerUpCount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SPD_AMP__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__Jammed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__JamTimer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_bpv__SlowEff__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_CustomEvent_ModuleIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__CallFunc_Array_Get_Item_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATower_C__pf711247040_Statics::NewProp_b0l_____int_Loop_Counter_Variable__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_C__pf711247040_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_C__pf711247040>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATower_C__pf711247040_Statics::ClassParams = {
		&ATower_C__pf711247040::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATower_C__pf711247040_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATower_C__pf711247040_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATower_C__pf711247040_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATower_C__pf711247040()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/Tower/Tower"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Tower_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATower_C__pf711247040_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ATower_C__pf711247040, TEXT("Tower_C"), 3757593357);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ATower_C__pf711247040>()
	{
		return ATower_C__pf711247040::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATower_C__pf711247040(Z_Construct_UClass_ATower_C__pf711247040, &ATower_C__pf711247040::StaticClass, TEXT("/Game/blueprints/Tower/Tower"), TEXT("Tower_C"), true, TEXT("/Game/blueprints/Tower/Tower"), TEXT("/Game/blueprints/Tower/Tower.Tower_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_C__pf711247040);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
