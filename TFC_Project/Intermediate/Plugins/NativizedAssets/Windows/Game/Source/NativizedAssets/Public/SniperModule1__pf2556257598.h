#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Module__pf2556257598.h"
class AActor;
#include "SniperModule1__pf2556257598.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Modules/SniperModule1.SniperModule1_C", OverrideNativeName="SniperModule1_C"))
class USniperModule1_C__pf2556257598 : public UModule_C__pf2556257598
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b2l__K2Node_Event_OtherActor__pf;
	USniperModule1_C__pf2556257598(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SniperModule1__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReceiveActorBeginOverlap_1"))
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf);
public:
};
