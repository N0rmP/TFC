#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Upgrade__pf77128533.h"
class Aplayer_character_C__pf2509438801;
class AActor;
#include "Suit_Upgrade__pf77128533.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Suit_Upgrade.Suit_Upgrade_C", OverrideNativeName="Suit_Upgrade_C"))
class USuit_Upgrade_C__pf77128533 : public UUpgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Suit", Category="Default", MultiLine="true", OverrideNativeName="suit"))
	Aplayer_character_C__pf2509438801* bpv__suit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b2l__K2Node_Event_OtherActor__pf;
	USuit_Upgrade_C__pf77128533(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Suit_Upgrade__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReceiveActorBeginOverlap_1"))
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf);
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Attacked__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set_Owner"))
	virtual void bpf__Set_Owner__pf(Aplayer_character_C__pf2509438801* bpp__player__pf);
public:
};
