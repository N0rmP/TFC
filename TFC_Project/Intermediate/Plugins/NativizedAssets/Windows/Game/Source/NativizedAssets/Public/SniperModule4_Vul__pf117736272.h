#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "VulnerableEffect__pf117736272.h"
#include "SniperModule4_Vul__pf117736272.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/SniperModule4_Vul.SniperModule4_Vul_C", OverrideNativeName="SniperModule4_Vul_C"))
class USniperModule4_Vul_C__pf117736272 : public UVulnerableEffect_C__pf117736272
{
public:
	GENERATED_BODY()
	USniperModule4_Vul_C__pf117736272(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
