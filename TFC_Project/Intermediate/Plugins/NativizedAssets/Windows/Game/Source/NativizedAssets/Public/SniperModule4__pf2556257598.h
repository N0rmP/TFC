#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Module__pf2556257598.h"
class AActor;
#include "SniperModule4__pf2556257598.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Modules/SniperModule4.SniperModule4_C", OverrideNativeName="SniperModule4_C"))
class USniperModule4_C__pf2556257598 : public UModule_C__pf2556257598
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b2l__K2Node_Event_OtherActor__pf;
	USniperModule4_C__pf2556257598(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SniperModule4__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReceiveActorBeginOverlap_1"))
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf);
public:
};
