// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TFC_PROJECT_StageWidget_generated_h
#error "StageWidget.generated.h already included, missing '#pragma once' in StageWidget.h"
#endif
#define TFC_PROJECT_StageWidget_generated_h

#define TFC_Project_Source_TFC_Project_StageWidget_h_15_SPARSE_DATA
#define TFC_Project_Source_TFC_Project_StageWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execopenStageinfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->openStageinfo(); \
		P_NATIVE_END; \
	}


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execopenStageinfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->openStageinfo(); \
		P_NATIVE_END; \
	}


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageWidget(); \
	friend struct Z_Construct_UClass_UStageWidget_Statics; \
public: \
	DECLARE_CLASS(UStageWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(UStageWidget)


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStageWidget(); \
	friend struct Z_Construct_UClass_UStageWidget_Statics; \
public: \
	DECLARE_CLASS(UStageWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(UStageWidget)


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageWidget(UStageWidget&&); \
	NO_API UStageWidget(const UStageWidget&); \
public:


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageWidget(UStageWidget&&); \
	NO_API UStageWidget(const UStageWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageWidget)


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button_Stage() { return STRUCT_OFFSET(UStageWidget, Button_Stage); }


#define TFC_Project_Source_TFC_Project_StageWidget_h_12_PROLOG
#define TFC_Project_Source_TFC_Project_StageWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_RPC_WRAPPERS \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_INCLASS \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Source_TFC_Project_StageWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_INCLASS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_StageWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TFC_PROJECT_API UClass* StaticClass<class UStageWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Source_TFC_Project_StageWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
