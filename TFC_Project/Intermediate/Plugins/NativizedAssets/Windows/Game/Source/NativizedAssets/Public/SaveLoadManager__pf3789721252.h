#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
class Aupgrade_Manager_C__pf3789721252;
class UWidget;
#include "SaveLoadManager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/SaveLoadManager.SaveLoadManager_C", OverrideNativeName="SaveLoadManager_C"))
class USaveLoadManager_C__pf3789721252 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot Name", Category="Default", MultiLine="true", OverrideNativeName="Slot_Name"))
	FString bpv__Slot_Name__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="User ID", Category="Default", MultiLine="true", OverrideNativeName="user_ID"))
	int32 bpv__user_ID__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	int32 bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Upgrade Manager", Category="Default", MultiLine="true", OverrideNativeName="upgrade_manager"))
	Aupgrade_Manager_C__pf3789721252* bpv__upgrade_manager__pf;
	USaveLoadManager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_SaveLoadManager"))
	void bpf__ExecuteUbergraph_SaveLoadManager__pf(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Init"))
	virtual void bpf__On_Init__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Save_Game"))
	virtual void bpf__Save_Game__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="save_Upgrades"))
	virtual void bpf__save_Upgrades__pf(UWidget* bpp__widget__pf);
public:
};
