#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Effect__pf3439682450.h"
#include "SlowEffect__pf2071825271.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/SlowEffect/SlowEffect.SlowEffect_C", OverrideNativeName="SlowEffect_C"))
class USlowEffect_C__pf2071825271 : public UEffect_C__pf3439682450
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slow Rate", Category="Default", MultiLine="true", OverrideNativeName="SlowRate"))
	float bpv__SlowRate__pf;
	USlowEffect_C__pf2071825271(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SlowEffect__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Stacked__pf() override;
	virtual void bpf__On_Die__pf() override;
public:
};
