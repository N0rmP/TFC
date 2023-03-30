// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_fly_enemy__pf839595025_generated_h
#error "fly_enemy__pf839595025.generated.h already included, missing '#pragma once' in fly_enemy__pf839595025.h"
#endif
#define NATIVIZEDASSETS_fly_enemy__pf839595025_generated_h

#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_19_DELEGATE \
struct fly_enemy_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf; \
}; \
static inline void F__OAISimpleDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type bpp__MovementResult__pf) \
{ \
	fly_enemy_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__MovementResult__pf=bpp__MovementResult__pf; \
	__OAISimpleDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_SPARSE_DATA
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_fly_enemy__pf_0);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__OnFail_B58E1F2F47F2AD115669DB9BB61D392B__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_B58E1F2F47F2AD115669DB9BB61D392B__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_fly_enemy__pf_0);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_EVENT_PARMS
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfly_enemy_C__pf839595025(); \
	friend struct Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics; \
public: \
	DECLARE_CLASS(Afly_enemy_C__pf839595025, Aenemy_base_C__pf839595025, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/fly_enemy"), NO_API) \
	DECLARE_SERIALIZER(Afly_enemy_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAfly_enemy_C__pf839595025(); \
	friend struct Z_Construct_UClass_Afly_enemy_C__pf839595025_Statics; \
public: \
	DECLARE_CLASS(Afly_enemy_C__pf839595025, Aenemy_base_C__pf839595025, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/fly_enemy"), NO_API) \
	DECLARE_SERIALIZER(Afly_enemy_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Afly_enemy_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afly_enemy_C__pf839595025) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afly_enemy_C__pf839595025); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afly_enemy_C__pf839595025); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afly_enemy_C__pf839595025(Afly_enemy_C__pf839595025&&); \
	NO_API Afly_enemy_C__pf839595025(const Afly_enemy_C__pf839595025&); \
public:


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Afly_enemy_C__pf839595025(Afly_enemy_C__pf839595025&&); \
	NO_API Afly_enemy_C__pf839595025(const Afly_enemy_C__pf839595025&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Afly_enemy_C__pf839595025); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Afly_enemy_C__pf839595025); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Afly_enemy_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_13_PROLOG \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_EVENT_PARMS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_RPC_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_INCLASS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_INCLASS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class Afly_enemy_C__pf839595025>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_fly_enemy__pf839595025_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
