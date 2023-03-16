#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Robot_Upgrade__pf77128533.h"
#include "Robot_Upgrade2_2__pf712717951.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Robot-upgrades/Robot_Upgrade2_2.Robot_Upgrade2_2_C", OverrideNativeName="Robot_Upgrade2_2_C"))
class URobot_Upgrade2_2_C__pf712717951 : public URobot_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	URobot_Upgrade2_2_C__pf712717951(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
public:
};
