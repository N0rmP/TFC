// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_testEnemy2__pf4098986762_generated_h
#error "testEnemy2__pf4098986762.generated.h already included, missing '#pragma once' in testEnemy2__pf4098986762.h"
#endif
#define NATIVIZEDASSETS_testEnemy2__pf4098986762_generated_h

#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_16_DELEGATE \
struct testEnemy2_C__pf4098986762_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf; \
}; \
static inline void F__OAISimpleDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type bpp__MovementResult__pf) \
{ \
	testEnemy2_C__pf4098986762_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__MovementResult__pf=bpp__MovementResult__pf; \
	__OAISimpleDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_SPARSE_DATA
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__OnFail_6BBE9FA84B1728C5EB21B6B11FB46821__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_6BBE9FA84B1728C5EB21B6B11FB46821__pf); \
	DECLARE_FUNCTION(execbpf__Stop__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__MoveToTarget__pf); \
	DECLARE_FUNCTION(execbpf__Attack__pf); \
	DECLARE_FUNCTION(execbpf__GetTarget__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_2); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__OnFail_6BBE9FA84B1728C5EB21B6B11FB46821__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_6BBE9FA84B1728C5EB21B6B11FB46821__pf); \
	DECLARE_FUNCTION(execbpf__Stop__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__MoveToTarget__pf); \
	DECLARE_FUNCTION(execbpf__Attack__pf); \
	DECLARE_FUNCTION(execbpf__GetTarget__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_2); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_testEnemy2__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_EVENT_PARMS \
	struct testEnemy2_C__pf4098986762_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAtestEnemy2_C__pf4098986762(); \
	friend struct Z_Construct_UClass_AtestEnemy2_C__pf4098986762_Statics; \
public: \
	DECLARE_CLASS(AtestEnemy2_C__pf4098986762, Acreature_C__pf937085289, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/test/testEnemy2"), NO_API) \
	DECLARE_SERIALIZER(AtestEnemy2_C__pf4098986762)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAtestEnemy2_C__pf4098986762(); \
	friend struct Z_Construct_UClass_AtestEnemy2_C__pf4098986762_Statics; \
public: \
	DECLARE_CLASS(AtestEnemy2_C__pf4098986762, Acreature_C__pf937085289, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/test/testEnemy2"), NO_API) \
	DECLARE_SERIALIZER(AtestEnemy2_C__pf4098986762)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AtestEnemy2_C__pf4098986762(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestEnemy2_C__pf4098986762) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestEnemy2_C__pf4098986762); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestEnemy2_C__pf4098986762); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestEnemy2_C__pf4098986762(AtestEnemy2_C__pf4098986762&&); \
	NO_API AtestEnemy2_C__pf4098986762(const AtestEnemy2_C__pf4098986762&); \
public:


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AtestEnemy2_C__pf4098986762(AtestEnemy2_C__pf4098986762&&); \
	NO_API AtestEnemy2_C__pf4098986762(const AtestEnemy2_C__pf4098986762&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AtestEnemy2_C__pf4098986762); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AtestEnemy2_C__pf4098986762); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AtestEnemy2_C__pf4098986762)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_10_PROLOG \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_EVENT_PARMS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_RPC_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_INCLASS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_INCLASS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AtestEnemy2_C__pf4098986762>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_testEnemy2__pf4098986762_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
