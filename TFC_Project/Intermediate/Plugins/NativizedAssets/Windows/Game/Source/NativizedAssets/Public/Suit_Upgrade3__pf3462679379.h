#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Suit_Upgrade__pf77128533.h"
#include "Suit_Upgrade3__pf3462679379.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade3.Suit_Upgrade3_C", OverrideNativeName="Suit_Upgrade3_C"))
class USuit_Upgrade3_C__pf3462679379 : public USuit_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	USuit_Upgrade3_C__pf3462679379(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
public:
};
