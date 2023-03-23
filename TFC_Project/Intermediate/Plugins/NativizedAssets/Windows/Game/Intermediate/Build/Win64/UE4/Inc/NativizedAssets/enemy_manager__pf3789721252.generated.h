// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class Aenemy_base_C__pf839595025;
class UObject;
class UDataTable;
#ifdef NATIVIZEDASSETS_enemy_manager__pf3789721252_generated_h
#error "enemy_manager__pf3789721252.generated.h already included, missing '#pragma once' in enemy_manager__pf3789721252.h"
#endif
#define NATIVIZEDASSETS_enemy_manager__pf3789721252_generated_h

#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_SPARSE_DATA
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__set_time_until_next_wave__pf); \
	DECLARE_FUNCTION(execbpf__get_time_until_next_wave__pf); \
	DECLARE_FUNCTION(execbpf__remove_enemy__pf); \
	DECLARE_FUNCTION(execbpf__get_enemies__pf); \
	DECLARE_FUNCTION(execbpf__comparator_by_health__pf); \
	DECLARE_FUNCTION(execbpf__sort_enemy_by_health__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__add_enemies__pf); \
	DECLARE_FUNCTION(execbpf__remove_enemies_by_reference__pf); \
	DECLARE_FUNCTION(execbpf__clear_enemies__pf); \
	DECLARE_FUNCTION(execbpf__spawn_one_row__pf); \
	DECLARE_FUNCTION(execbpf__initiate_enemy_manager__pf); \
	DECLARE_FUNCTION(execbpf__while_wave_stop__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_enemy_manager__pf_0);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__set_time_until_next_wave__pf); \
	DECLARE_FUNCTION(execbpf__get_time_until_next_wave__pf); \
	DECLARE_FUNCTION(execbpf__remove_enemy__pf); \
	DECLARE_FUNCTION(execbpf__get_enemies__pf); \
	DECLARE_FUNCTION(execbpf__comparator_by_health__pf); \
	DECLARE_FUNCTION(execbpf__sort_enemy_by_health__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__add_enemies__pf); \
	DECLARE_FUNCTION(execbpf__remove_enemies_by_reference__pf); \
	DECLARE_FUNCTION(execbpf__clear_enemies__pf); \
	DECLARE_FUNCTION(execbpf__spawn_one_row__pf); \
	DECLARE_FUNCTION(execbpf__initiate_enemy_manager__pf); \
	DECLARE_FUNCTION(execbpf__while_wave_stop__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_enemy_manager__pf_0);


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_EVENT_PARMS \
	struct enemy_manager_C__pf3789721252_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAenemy_manager_C__pf3789721252(); \
	friend struct Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics; \
public: \
	DECLARE_CLASS(Aenemy_manager_C__pf3789721252, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/others/Observer/enemy_manager"), NO_API) \
	DECLARE_SERIALIZER(Aenemy_manager_C__pf3789721252)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAenemy_manager_C__pf3789721252(); \
	friend struct Z_Construct_UClass_Aenemy_manager_C__pf3789721252_Statics; \
public: \
	DECLARE_CLASS(Aenemy_manager_C__pf3789721252, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/blueprints/others/Observer/enemy_manager"), NO_API) \
	DECLARE_SERIALIZER(Aenemy_manager_C__pf3789721252)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aenemy_manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aenemy_manager_C__pf3789721252) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aenemy_manager_C__pf3789721252); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aenemy_manager_C__pf3789721252); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aenemy_manager_C__pf3789721252(Aenemy_manager_C__pf3789721252&&); \
	NO_API Aenemy_manager_C__pf3789721252(const Aenemy_manager_C__pf3789721252&); \
public:


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aenemy_manager_C__pf3789721252(Aenemy_manager_C__pf3789721252&&); \
	NO_API Aenemy_manager_C__pf3789721252(const Aenemy_manager_C__pf3789721252&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aenemy_manager_C__pf3789721252); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aenemy_manager_C__pf3789721252); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aenemy_manager_C__pf3789721252)


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_PRIVATE_PROPERTY_OFFSET
#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_12_PROLOG \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_EVENT_PARMS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_RPC_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_INCLASS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_PRIVATE_PROPERTY_OFFSET \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_SPARSE_DATA \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_CALLBACK_WRAPPERS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_INCLASS_NO_PURE_DECLS \
	TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class Aenemy_manager_C__pf3789721252>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TFC_Project_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_enemy_manager__pf3789721252_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
