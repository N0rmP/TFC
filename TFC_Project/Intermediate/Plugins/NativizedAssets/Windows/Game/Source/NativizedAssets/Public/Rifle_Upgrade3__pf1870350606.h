#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Rifle_Upgrade__pf77128533.h"
#include "Rifle_Upgrade3__pf1870350606.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade3.Rifle_Upgrade3_C", OverrideNativeName="Rifle_Upgrade3_C"))
class URifle_Upgrade3_C__pf1870350606 : public URifle_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	URifle_Upgrade3_C__pf1870350606(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
public:
};
