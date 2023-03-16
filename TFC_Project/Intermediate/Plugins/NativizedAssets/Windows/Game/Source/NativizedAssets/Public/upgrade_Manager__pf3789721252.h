#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class UBase_Upgrade_C__pf77128533;
class UClass;
class UUpgrade_C__pf77128533;
#include "upgrade_Manager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/upgrade_Manager.upgrade_Manager_C", OverrideNativeName="upgrade_Manager_C"))
class Aupgrade_Manager_C__pf3789721252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Root Upgrade", Category="Default", MultiLine="true", OverrideNativeName="root_Upgrade"))
	UClass* bpv__root_Upgrade__pf;
	Aupgrade_Manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_upgrade_Manager__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_Upgrade_Tree"))
	virtual void bpf__get_Upgrade_Tree__pf(/*out*/ UBase_Upgrade_C__pf77128533*& bpp__tree__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_Upgraded"))
	virtual void bpf__get_Upgraded__pf(/*out*/ TArray<UClass*>& bpp__upgraded__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Upgrade"))
	virtual void bpf__Upgrade__pf(UUpgrade_C__pf77128533* bpp__Upgrade__pf, /*out*/ bool& bpp__succeed__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Init Upgrades"))
	virtual void bpf__InitxUpgrades__pfT(UClass* bpp__upgrade__pf);
public:
};
