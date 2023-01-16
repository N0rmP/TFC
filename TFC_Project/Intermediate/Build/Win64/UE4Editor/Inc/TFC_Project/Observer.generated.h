// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TFC_PROJECT_Observer_generated_h
#error "Observer.generated.h already included, missing '#pragma once' in Observer.h"
#endif
#define TFC_PROJECT_Observer_generated_h

#define TFC_Project_Source_TFC_Project_Observer_h_12_SPARSE_DATA
#define TFC_Project_Source_TFC_Project_Observer_h_12_RPC_WRAPPERS
#define TFC_Project_Source_TFC_Project_Observer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TFC_Project_Source_TFC_Project_Observer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObserver(); \
	friend struct Z_Construct_UClass_AObserver_Statics; \
public: \
	DECLARE_CLASS(AObserver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(AObserver)


#define TFC_Project_Source_TFC_Project_Observer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAObserver(); \
	friend struct Z_Construct_UClass_AObserver_Statics; \
public: \
	DECLARE_CLASS(AObserver, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TFC_Project"), NO_API) \
	DECLARE_SERIALIZER(AObserver)


#define TFC_Project_Source_TFC_Project_Observer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObserver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserver(AObserver&&); \
	NO_API AObserver(const AObserver&); \
public:


#define TFC_Project_Source_TFC_Project_Observer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObserver(AObserver&&); \
	NO_API AObserver(const AObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObserver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObserver)


#define TFC_Project_Source_TFC_Project_Observer_h_12_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Source_TFC_Project_Observer_h_9_PROLOG
#define TFC_Project_Source_TFC_Project_Observer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_Observer_h_12_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_Observer_h_12_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_Observer_h_12_RPC_WRAPPERS \
	TFC_Project_Source_TFC_Project_Observer_h_12_INCLASS \
	TFC_Project_Source_TFC_Project_Observer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Source_TFC_Project_Observer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Source_TFC_Project_Observer_h_12_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Source_TFC_Project_Observer_h_12_SPARSE_DATA \
	TFC_Project_Source_TFC_Project_Observer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_Observer_h_12_INCLASS_NO_PURE_DECLS \
	TFC_Project_Source_TFC_Project_Observer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TFC_PROJECT_API UClass* StaticClass<class AObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Source_TFC_Project_Observer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
