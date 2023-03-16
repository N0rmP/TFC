#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enemy_spawn_table__pf3303916713.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class Aenemy_base_C__pf839595025;
class Aenemy_spawner_C__pf839595025;
class UDataTable;
class UMain_GameInstance_C__pf3789721252;
class UObject;
#include "enemy_manager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/enemy_manager.enemy_manager_C", OverrideNativeName="enemy_manager_C"))
class Aenemy_manager_C__pf3789721252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemies", Category="Default", MultiLine="true", OverrideNativeName="enemies"))
	TArray<Aenemy_base_C__pf839595025*> bpv__enemies__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Spawners", Category="Default", MultiLine="true", OverrideNativeName="enemy_spawners"))
	TArray<Aenemy_spawner_C__pf839595025*> bpv__enemy_spawners__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur EST", Category="Default", MultiLine="true", OverrideNativeName="cur_EST"))
	UDataTable* bpv__cur_EST__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="EST Rows", Category="Default", MultiLine="true", OverrideNativeName="EST_rows"))
	TArray<FName> bpv__EST_rows__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur EST Index", Category="Default", MultiLine="true", OverrideNativeName="cur_EST_index"))
	int32 bpv__cur_EST_index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Until Next Wave", Category="Default", MultiLine="true", OverrideNativeName="time_until_next_wave"))
	float bpv__time_until_next_wave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Last Enemy Spawned", Category="Default", MultiLine="true", OverrideNativeName="is_last_enemy_spawned"))
	bool bpv__is_last_enemy_spawned__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_tar_1"))
	Aenemy_base_C__pf839595025* b0l__K2Node_CustomEvent_tar_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_tar"))
	Aenemy_base_C__pf839595025* b0l__K2Node_CustomEvent_tar__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable"))
	int32 b0l_____int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<Aenemy_spawner_C__pf839595025*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_cur_EST_param"))
	UDataTable* b0l__K2Node_CustomEvent_cur_EST_param__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable_1"))
	int32 b0l_____int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FName b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowFromName_OutRow"))
	Fenemy_spawn_table__pf3303916713 b0l__CallFunc_GetDataTableRowFromName_OutRow__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	Aenemy_spawner_C__pf839595025* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawn_enemy_spawned_enemy"))
	Aenemy_base_C__pf839595025* b0l__CallFunc_spawn_enemy_spawned_enemy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_spawn_enemy_success"))
	bool b0l__CallFunc_spawn_enemy_success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_delta_second"))
	float b0l__K2Node_CustomEvent_delta_second__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Game_Instance"))
	UMain_GameInstance_C__pf3789721252* b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetDataTableRowNames_OutRowNames"))
	TArray<FName> b0l__CallFunc_GetDataTableRowNames_OutRowNames__pf;
	Aenemy_manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_enemy_manager_0"))
	void bpf__ExecuteUbergraph_enemy_manager__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_enemy_manager__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="while_wave_stop"))
	virtual void bpf__while_wave_stop__pf(float bpp__deltaxsecond__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="initiate_enemy_manager"))
	virtual void bpf__initiate_enemy_manager__pf(UDataTable* bpp__cur_EST_param__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawn_one_row"))
	virtual void bpf__spawn_one_row__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="clear_enemies"))
	virtual void bpf__clear_enemies__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="remove_enemies_by_reference"))
	virtual void bpf__remove_enemies_by_reference__pf(Aenemy_base_C__pf839595025* bpp__tar__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="add_enemies"))
	virtual void bpf__add_enemies__pf(Aenemy_base_C__pf839595025* bpp__tar__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="sort_enemy_by_health"))
	virtual void bpf__sort_enemy_by_health__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="comparator_by_health"))
	virtual void bpf__comparator_by_health__pf(UObject* bpp__ObjectA__pf, UObject* bpp__ObjectB__pf, /*out*/ bool& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_enemies"))
	virtual void bpf__get_enemies__pf(/*out*/ TArray<Aenemy_base_C__pf839595025*>& bpp__enemies_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="remove_enemy"))
	virtual void bpf__remove_enemy__pf(Aenemy_base_C__pf839595025* bpp__tar__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_time_until_next_wave"))
	virtual void bpf__get_time_until_next_wave__pf(/*out*/ float& bpp__time_until_next_wave_ret__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_time_until_next_wave"))
	virtual void bpf__set_time_until_next_wave__pf(float bpp__val__pf);
public:
};
