#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Robot_Upgrade__pf77128533.h"
class AActor;
#include "Robot_Upgrade1__pf712717951.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade1.Robot_Upgrade1_C", OverrideNativeName="Robot_Upgrade1_C"))
class URobot_Upgrade1_C__pf712717951 : public URobot_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b3l__K2Node_Event_OtherActor__pf;
	URobot_Upgrade1_C__pf712717951(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Robot_Upgrade1__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf) override;
	virtual void bpf__On_Added__pf() override;
public:
};
