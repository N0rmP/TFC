#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UStaticMeshComponent;
class ATower_C__pf711247040;
class UMain_GameInstance_C__pf3789721252;
class Atower_manager_C__pf3789721252;
#include "TowerBase__pf711247040.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/Tower/TowerBase.TowerBase_C", OverrideNativeName="TowerBase_C"))
class ATowerBase_C__pf711247040 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="SpawnPoint"))
	USceneComponent* bpv__SpawnPoint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Body"))
	UStaticMeshComponent* bpv__Body__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower", Category="Default", MultiLine="true", OverrideNativeName="Tower"))
	ATower_C__pf711247040* bpv__Tower__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Index"))
	int32 b0l__K2Node_CustomEvent_Index__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Game_Instance"))
	UMain_GameInstance_C__pf3789721252* b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_tower_manager_tower_manager_return"))
	Atower_manager_C__pf3789721252* b0l__CallFunc_get_tower_manager_tower_manager_return__pf;
	ATowerBase_C__pf711247040(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_TowerBase__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_TowerBase_1"))
	void bpf__ExecuteUbergraph_TowerBase__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="BuildTower"))
	virtual void bpf__BuildTower__pf(int32 bpp__Index__pf);
public:
};
