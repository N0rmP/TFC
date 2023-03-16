#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Suit_Upgrade__pf77128533.h"
#include "Suit_Upgrade2_1__pf3462679379.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade2_1.Suit_Upgrade2_1_C", OverrideNativeName="Suit_Upgrade2_1_C"))
class USuit_Upgrade2_1_C__pf3462679379 : public USuit_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	USuit_Upgrade2_1_C__pf3462679379(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
public:
};
