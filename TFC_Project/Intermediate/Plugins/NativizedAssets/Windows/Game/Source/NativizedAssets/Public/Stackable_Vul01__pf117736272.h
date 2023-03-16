#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "VulnerableEffect__pf117736272.h"
#include "Stackable_Vul01__pf117736272.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/Stackable_Vul01.Stackable_Vul01_C", OverrideNativeName="Stackable_Vul01_C"))
class UStackable_Vul01_C__pf117736272 : public UVulnerableEffect_C__pf117736272
{
public:
	GENERATED_BODY()
	UStackable_Vul01_C__pf117736272(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
