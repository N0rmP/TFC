#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Effect__pf3439682450.h"
#include "VulnerableEffect__pf117736272.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/Vulnerable-Effects/VulnerableEffect.VulnerableEffect_C", OverrideNativeName="VulnerableEffect_C"))
class UVulnerableEffect_C__pf117736272 : public UEffect_C__pf3439682450
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vulnerability", Category="Default", MultiLine="true", OverrideNativeName="Vulnerability"))
	float bpv__Vulnerability__pf;
	UVulnerableEffect_C__pf117736272(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Stacked__pf() override;
	virtual void bpf__On_Die__pf() override;
public:
};
