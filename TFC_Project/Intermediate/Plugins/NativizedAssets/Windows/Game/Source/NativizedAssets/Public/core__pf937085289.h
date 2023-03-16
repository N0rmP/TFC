#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "creature__pf937085289.h"
class UStaticMeshComponent;
#include "core__pf937085289.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/core.core_C", OverrideNativeName="core_C"))
class Acore_C__pf937085289 : public Acreature_C__pf937085289
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Core"))
	UStaticMeshComponent* bpv__Core__pf;
	Acore_C__pf937085289(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__die__pf() override;
public:
};
