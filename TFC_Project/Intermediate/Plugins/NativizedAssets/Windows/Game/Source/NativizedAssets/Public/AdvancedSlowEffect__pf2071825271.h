#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "SlowEffect__pf2071825271.h"
#include "AdvancedSlowEffect__pf2071825271.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/SlowEffect/AdvancedSlowEffect.AdvancedSlowEffect_C", OverrideNativeName="AdvancedSlowEffect_C"))
class UAdvancedSlowEffect_C__pf2071825271 : public USlowEffect_C__pf2071825271
{
public:
	GENERATED_BODY()
	UAdvancedSlowEffect_C__pf2071825271(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Stacked__pf() override;
	virtual void bpf__On_Die__pf() override;
public:
};
