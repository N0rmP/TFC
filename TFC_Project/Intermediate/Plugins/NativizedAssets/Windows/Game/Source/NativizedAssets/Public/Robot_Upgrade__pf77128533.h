#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Upgrade__pf77128533.h"
class ARobot1_C__pf1579232813;
class AActor;
#include "Robot_Upgrade__pf77128533.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Robot_Upgrade.Robot_Upgrade_C", OverrideNativeName="Robot_Upgrade_C"))
class URobot_Upgrade_C__pf77128533 : public UUpgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Robot", Category="Default", MultiLine="true", OverrideNativeName="Robot"))
	ARobot1_C__pf1579232813* bpv__Robot__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b2l__K2Node_Event_OtherActor__pf;
	URobot_Upgrade_C__pf77128533(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Robot_Upgrade__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReceiveActorBeginOverlap_1"))
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf);
	virtual void bpf__On_Added__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set_Owner"))
	virtual void bpf__Set_Owner__pf(ARobot1_C__pf1579232813* bpp__robot__pf);
public:
};
