#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Suit_Upgrade__pf77128533.h"
class Aplayer_character_C__pf2509438801;
class AActor;
#include "Suit_Upgrade1__pf3462679379.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Suit-upgrades/Suit_Upgrade1.Suit_Upgrade1_C", OverrideNativeName="Suit_Upgrade1_C"))
class USuit_Upgrade1_C__pf3462679379 : public USuit_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suit 0", Category="Default", MultiLine="true", OverrideNativeName="suit_0"))
	Aplayer_character_C__pf2509438801* bpv__suit_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b3l__K2Node_Event_OtherActor__pf;
	USuit_Upgrade1_C__pf3462679379(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Suit_Upgrade1__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf) override;
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Attacked__pf() override;
public:
};
