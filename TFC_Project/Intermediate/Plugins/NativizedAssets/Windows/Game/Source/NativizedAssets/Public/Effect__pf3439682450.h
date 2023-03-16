#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "OnCollection__pf3716123054.h"
class Acreature_C__pf937085289;
#include "Effect__pf3439682450.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Effects/Effect.Effect_C", OverrideNativeName="Effect_C"))
class UEffect_C__pf3439682450 : public UOnCollection_C__pf3716123054
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owner", Category="Default", MultiLine="true", OverrideNativeName="Owner"))
	Acreature_C__pf937085289* bpv__Owner__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Duration", Category="Default", MultiLine="true", OverrideNativeName="Duration"))
	float bpv__Duration__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stack", Category="Default", MultiLine="true", OverrideNativeName="Stack"))
	int32 bpv__Stack__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Stack", Category="Default", MultiLine="true", OverrideNativeName="MaxStack"))
	int32 bpv__MaxStack__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer", Category="Default", MultiLine="true", OverrideNativeName="Timer"))
	float bpv__Timer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Stackable", Category="Default", MultiLine="true", OverrideNativeName="isStackable"))
	bool bpv__isStackable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UEffect_C__pf3439682450(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Effect__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame if tick is enabled */", DisplayName="Tick", ToolTip="Event called every frame if tick is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Attacked__pf() override;
	virtual void bpf__On_CreatureDie__pf() override;
	virtual void bpf__On_Stacked__pf() override;
	virtual void bpf__On_Die__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set_Owner"))
	virtual void bpf__Set_Owner__pf(Acreature_C__pf937085289* bpp__Owner__pf);
public:
};
