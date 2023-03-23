// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_enemy_base__pf839595025_generated_h
#error "enemy_base__pf839595025.generated.h already included, missing '#pragma once' in enemy_base__pf839595025.h"
#endif
#define NATIVIZEDASSETS_enemy_base__pf839595025_generated_h

#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_16_DELEGATE \
struct enemy_base_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms \
{ \
	TEnumAsByte<EPathFollowingResult::Type> bpp__MovementResult__pf; \
}; \
static inline void F__OAISimpleDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type bpp__MovementResult__pf) \
{ \
	enemy_base_C__pf839595025_event__OAISimpleDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__MovementResult__pf=bpp__MovementResult__pf; \
	__OAISimpleDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_SPARSE_DATA
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__WeakPointBreak__pf); \
	DECLARE_FUNCTION(execbpf__HitWeakPoint__pf); \
	DECLARE_FUNCTION(execbpf__CheckSlowRate__pf); \
	DECLARE_FUNCTION(execbpf__enemy_attack__pf); \
	DECLARE_FUNCTION(execbpf__get_Target__pf); \
	DECLARE_FUNCTION(execbpf__enemy_init__pf); \
	DECLARE_FUNCTION(execbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf); \
	DECLARE_FUNCTION(execbpf__MoveToTarget__pf); \
	DECLARE_FUNCTION(execbpf__Stop__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_enemy_base__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__WeakPointBreak__pf); \
	DECLARE_FUNCTION(execbpf__HitWeakPoint__pf); \
	DECLARE_FUNCTION(execbpf__CheckSlowRate__pf); \
	DECLARE_FUNCTION(execbpf__enemy_attack__pf); \
	DECLARE_FUNCTION(execbpf__get_Target__pf); \
	DECLARE_FUNCTION(execbpf__enemy_init__pf); \
	DECLARE_FUNCTION(execbpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf); \
	DECLARE_FUNCTION(execbpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf); \
	DECLARE_FUNCTION(execbpf__MoveToTarget__pf); \
	DECLARE_FUNCTION(execbpf__Stop__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_enemy_base__pf_1);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_EVENT_PARMS \
	struct enemy_base_C__pf839595025_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAenemy_base_C__pf839595025(); \
	friend struct Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics; \
public: \
	DECLARE_CLASS(Aenemy_base_C__pf839595025, Acreature_C__pf937085289, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/enemy_base"), NO_API) \
	DECLARE_SERIALIZER(Aenemy_base_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAenemy_base_C__pf839595025(); \
	friend struct Z_Construct_UClass_Aenemy_base_C__pf839595025_Statics; \
public: \
	DECLARE_CLASS(Aenemy_base_C__pf839595025, Acreature_C__pf937085289, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/monster/enemy_base"), NO_API) \
	DECLARE_SERIALIZER(Aenemy_base_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aenemy_base_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aenemy_base_C__pf839595025) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aenemy_base_C__pf839595025); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aenemy_base_C__pf839595025); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aenemy_base_C__pf839595025(Aenemy_base_C__pf839595025&&); \
	NO_API Aenemy_base_C__pf839595025(const Aenemy_base_C__pf839595025&); \
public:


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aenemy_base_C__pf839595025(Aenemy_base_C__pf839595025&&); \
	NO_API Aenemy_base_C__pf839595025(const Aenemy_base_C__pf839595025&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aenemy_base_C__pf839595025); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aenemy_base_C__pf839595025); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aenemy_base_C__pf839595025)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_10_PROLOG \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_EVENT_PARMS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_RPC_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_INCLASS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_INCLASS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class Aenemy_base_C__pf839595025>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_base__pf839595025_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
