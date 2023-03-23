// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_Robot1__pf1579232813_generated_h
#error "Robot1__pf1579232813.generated.h already included, missing '#pragma once' in Robot1__pf1579232813.h"
#endif
#define NATIVIZEDASSETS_Robot1__pf1579232813_generated_h

#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_20_DELEGATE \
struct Robot1_C__pf1579232813_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf; \
}; \
static inline void F__OAISimpleDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type bpp__MovementResult__pf) \
{ \
	Robot1_C__pf1579232813_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__MovementResult__pf=bpp__MovementResult__pf; \
	__OAISimpleDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_SPARSE_DATA
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__check_too_far__pf); \
	DECLARE_FUNCTION(execbpf__OnFail_3FEF97804D1BB895D496B896B8A71FA6__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_3FEF97804D1BB895D496B896B8A71FA6__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__movexto__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Robot1__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__check_too_far__pf); \
	DECLARE_FUNCTION(execbpf__OnFail_3FEF97804D1BB895D496B896B8A71FA6__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_3FEF97804D1BB895D496B896B8A71FA6__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__movexto__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_Robot1__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_EVENT_PARMS \
	struct Robot1_C__pf1579232813_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARobot1_C__pf1579232813(); \
	friend struct Z_Construct_UClass_ARobot1_C__pf1579232813_Statics; \
public: \
	DECLARE_CLASS(ARobot1_C__pf1579232813, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/Robot/Robot1"), NO_API) \
	DECLARE_SERIALIZER(ARobot1_C__pf1579232813)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARobot1_C__pf1579232813(); \
	friend struct Z_Construct_UClass_ARobot1_C__pf1579232813_Statics; \
public: \
	DECLARE_CLASS(ARobot1_C__pf1579232813, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/Robot/Robot1"), NO_API) \
	DECLARE_SERIALIZER(ARobot1_C__pf1579232813)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARobot1_C__pf1579232813(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobot1_C__pf1579232813) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot1_C__pf1579232813); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot1_C__pf1579232813); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot1_C__pf1579232813(ARobot1_C__pf1579232813&&); \
	NO_API ARobot1_C__pf1579232813(const ARobot1_C__pf1579232813&); \
public:


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARobot1_C__pf1579232813(ARobot1_C__pf1579232813&&); \
	NO_API ARobot1_C__pf1579232813(const ARobot1_C__pf1579232813&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARobot1_C__pf1579232813); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARobot1_C__pf1579232813); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARobot1_C__pf1579232813)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_14_PROLOG \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_EVENT_PARMS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_RPC_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_INCLASS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_INCLASS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ARobot1_C__pf1579232813>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Robot1__pf1579232813_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
