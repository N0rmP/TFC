// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TFC_PROJECT_StageInfoWidget_generated_h
#error "StageInfoWidget.generated.h already included, missing '#pragma once' in StageInfoWidget.h"
#endif
#define TFC_PROJECT_StageInfoWidget_generated_h

#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_SPARSE_DATA
#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execopenStage);


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execopenStage);


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageInfoWidget(); \
	friend struct Z_Construct_UClass_UStageInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UStageInfoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(UStageInfoWidget)


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStageInfoWidget(); \
	friend struct Z_Construct_UClass_UStageInfoWidget_Statics; \
public: \
	DECLARE_CLASS(UStageInfoWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(UStageInfoWidget)


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageInfoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageInfoWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageInfoWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageInfoWidget(UStageInfoWidget&&); \
	NO_API UStageInfoWidget(const UStageInfoWidget&); \
public:


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageInfoWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageInfoWidget(UStageInfoWidget&&); \
	NO_API UStageInfoWidget(const UStageInfoWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageInfoWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageInfoWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageInfoWidget)


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__button_stgStart() { return STRUCT_OFFSET(UStageInfoWidget, button_stgStart); }


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_12_PROLOG
#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_RPC_WRAPPERS \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_INCLASS \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_INCLASS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_StageInfoWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TFC_PROJECT_API UClass* StaticClass<class UStageInfoWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Source_TFC_Project_StageInfoWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
