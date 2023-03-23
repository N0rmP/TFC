// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/Base_Upgrade__pf77128533.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase_Upgrade__pf77128533() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBase_Upgrade_C__pf77128533_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBase_Upgrade_C__pf77128533();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUpgrade_C__pf77128533();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBase_Upgrade_C__pf77128533::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void UBase_Upgrade_C__pf77128533::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void UBase_Upgrade_C__pf77128533::StaticRegisterNativesUBase_Upgrade_C__pf77128533()
	{
		UClass* Class = UBase_Upgrade_C__pf77128533::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &UBase_Upgrade_C__pf77128533::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** t * Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayt * or when the component is dynamically created if the Actor has already BegunPlay. t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/Base_Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBase_Upgrade_C__pf77128533, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBase_Upgrade_C__pf77128533();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBase_Upgrade_C__pf77128533_NoRegister()
	{
		return UBase_Upgrade_C__pf77128533::StaticClass();
	}
	struct Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b2l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b2l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b2l__K2Node_MakeArray_Array__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUpgrade_C__pf77128533,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBase_Upgrade_C__pf77128533_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3949887660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base_Upgrade__pf77128533.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Base_Upgrade__pf77128533.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "Base_Upgrade_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Upgrades/Base_Upgrade.Base_Upgrade_C" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf_Inner = { "b2l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/Base_Upgrade__pf77128533.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBase_Upgrade_C__pf77128533, b2l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::NewProp_b2l__K2Node_MakeArray_Array__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBase_Upgrade_C__pf77128533>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::ClassParams = {
		&UBase_Upgrade_C__pf77128533::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBase_Upgrade_C__pf77128533()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Upgrades/Base_Upgrade"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("Base_Upgrade_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBase_Upgrade_C__pf77128533_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBase_Upgrade_C__pf77128533, TEXT("Base_Upgrade_C"), 3623391386);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBase_Upgrade_C__pf77128533>()
	{
		return UBase_Upgrade_C__pf77128533::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBase_Upgrade_C__pf77128533(Z_Construct_UClass_UBase_Upgrade_C__pf77128533, &UBase_Upgrade_C__pf77128533::StaticClass, TEXT("/Game/blueprints/OnCollections/Upgrades/Base_Upgrade"), TEXT("Base_Upgrade_C"), true, TEXT("/Game/blueprints/OnCollections/Upgrades/Base_Upgrade"), TEXT("/Game/blueprints/OnCollections/Upgrades/Base_Upgrade.Base_Upgrade_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBase_Upgrade_C__pf77128533);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
