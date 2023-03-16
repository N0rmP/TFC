#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class Aelectricity_manager_C__pf3789721252;
class Aenemy_manager_C__pf3789721252;
class Atower_manager_C__pf3789721252;
class AActor;
class Aline_manager_C__pf3789721252;
class Aupgrade_Manager_C__pf3789721252;
class Aplayer_character_C__pf2509438801;
class USaveLoadManager_C__pf3789721252;
class UDataTable;
#include "Main_GameInstance__pf3789721252.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/Main_GameInstance.Main_GameInstance_C", OverrideNativeName="Main_GameInstance_C"))
class UMain_GameInstance_C__pf3789721252 : public UGameInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Elecricity Manager", Category="Default", MultiLine="true", OverrideNativeName="elecricity_manager"))
	Aelectricity_manager_C__pf3789721252* bpv__elecricity_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Manager", Category="Default", MultiLine="true", OverrideNativeName="enemy_manager"))
	Aenemy_manager_C__pf3789721252* bpv__enemy_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower Manager", Category="Default", MultiLine="true", OverrideNativeName="tower_manager"))
	Atower_manager_C__pf3789721252* bpv__tower_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Widget Manager", Category="Default", MultiLine="true", OverrideNativeName="widget_manager"))
	AActor* bpv__widget_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Line Manager", Category="Default", MultiLine="true", OverrideNativeName="line_manager"))
	Aline_manager_C__pf3789721252* bpv__line_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Upgrade Manager", Category="Default", MultiLine="true", OverrideNativeName="upgrade_manager"))
	Aupgrade_Manager_C__pf3789721252* bpv__upgrade_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Plr", Category="Default", MultiLine="true", OverrideNativeName="cur_plr"))
	Aplayer_character_C__pf2509438801* bpv__cur_plr__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Saveload Manager", Category="Default", MultiLine="true", OverrideNativeName="saveload_manager"))
	USaveLoadManager_C__pf3789721252* bpv__saveload_manager__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="EST Arr", Category="Default", MultiLine="true", OverrideNativeName="EST_arr"))
	TArray<UDataTable*> bpv__EST_arr__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_is_clear"))
	bool b0l__K2Node_CustomEvent_is_clear__pf;
	UMain_GameInstance_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Main_GameInstance_0"))
	void bpf__ExecuteUbergraph_Main_GameInstance__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="level_end"))
	virtual void bpf__level_end__pf(bool bpp__is_clear__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="level_initiate"))
	virtual void bpf__level_initiate__pf(Aplayer_character_C__pf2509438801* bpp__plr_of_this_lvl__pf, int32 bpp__cur_stage_num__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_electricity_manager"))
	virtual void bpf__get_electricity_manager__pf(/*out*/ Aelectricity_manager_C__pf3789721252*& bpp__electricity_manager_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_enemy_manager"))
	virtual void bpf__get_enemy_manager__pf(/*out*/ Aenemy_manager_C__pf3789721252*& bpp__enemy_manager_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_tower_manager"))
	virtual void bpf__get_tower_manager__pf(/*out*/ Atower_manager_C__pf3789721252*& bpp__tower_manager_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_widget_manager"))
	virtual void bpf__get_widget_manager__pf(/*out*/ AActor*& bpp__widget_manager_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_line_manager"))
	virtual void bpf__get_line_manager__pf(/*out*/ Aline_manager_C__pf3789721252*& bpp__line_manager_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="game_Initiate"))
	virtual void bpf__game_Initiate__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="load_Game"))
	virtual void bpf__load_Game__pf(/*out*/ USaveLoadManager_C__pf3789721252*& bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="save_Game"))
	virtual void bpf__save_Game__pf(/*out*/ bool& bpp__succeed__pf);
public:
};
