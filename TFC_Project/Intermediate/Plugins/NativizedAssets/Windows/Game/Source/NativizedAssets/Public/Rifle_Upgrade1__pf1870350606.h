#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Rifle_Upgrade__pf77128533.h"
class Arifle_C__pf3559600238;
class AActor;
#include "Rifle_Upgrade1__pf1870350606.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Rifle-upgrades/Rifle_Upgrade1.Rifle_Upgrade1_C", OverrideNativeName="Rifle_Upgrade1_C"))
class URifle_Upgrade1_C__pf1870350606 : public URifle_Upgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rifle 0", Category="Default", MultiLine="true", OverrideNativeName="rifle_0"))
	Arifle_C__pf3559600238* bpv__rifle_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b3l__K2Node_Event_OtherActor__pf;
	URifle_Upgrade1_C__pf1870350606(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Rifle_Upgrade1__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf) override;
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Attack__pf() override;
public:
};
