// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BasicModule2__pf2556257598.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicModule2__pf2556257598() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBasicModule2_C__pf2556257598_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBasicModule2_C__pf2556257598();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UModule_C__pf2556257598();
// End Cross Module References
	DEFINE_FUNCTION(UBasicModule2_C__pf2556257598::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void UBasicModule2_C__pf2556257598::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void UBasicModule2_C__pf2556257598::StaticRegisterNativesUBasicModule2_C__pf2556257598()
	{
		UClass* Class = UBasicModule2_C__pf2556257598::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &UBasicModule2_C__pf2556257598::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** t * Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayt * or when the component is dynamically created if the Actor has already BegunPlay. t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/BasicModule2__pf2556257598.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlayor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBasicModule2_C__pf2556257598, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_UBasicModule2_C__pf2556257598();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasicModule2_C__pf2556257598_NoRegister()
	{
		return UBasicModule2_C__pf2556257598::StaticClass();
	}
	struct Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModule_C__pf2556257598,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBasicModule2_C__pf2556257598_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1003224173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BasicModule2__pf2556257598.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BasicModule2__pf2556257598.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BasicModule2_C" },
		{ "ReplaceConverted", "/Game/blueprints/OnCollections/Modules/BasicModule2.BasicModule2_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicModule2_C__pf2556257598>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::ClassParams = {
		&UBasicModule2_C__pf2556257598::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicModule2_C__pf2556257598()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/blueprints/OnCollections/Modules/BasicModule2"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BasicModule2_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBasicModule2_C__pf2556257598_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UBasicModule2_C__pf2556257598, TEXT("BasicModule2_C"), 2469956326);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UBasicModule2_C__pf2556257598>()
	{
		return UBasicModule2_C__pf2556257598::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicModule2_C__pf2556257598(Z_Construct_UClass_UBasicModule2_C__pf2556257598, &UBasicModule2_C__pf2556257598::StaticClass, TEXT("/Game/blueprints/OnCollections/Modules/BasicModule2"), TEXT("BasicModule2_C"), true, TEXT("/Game/blueprints/OnCollections/Modules/BasicModule2"), TEXT("/Game/blueprints/OnCollections/Modules/BasicModule2.BasicModule2_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicModule2_C__pf2556257598);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
