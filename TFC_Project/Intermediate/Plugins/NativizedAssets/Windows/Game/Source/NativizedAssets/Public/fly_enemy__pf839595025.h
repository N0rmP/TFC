#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enemy_base__pf839595025.h"
#include "fly_enemy__pf839595025.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/fly_enemy.fly_enemy_C", OverrideNativeName="fly_enemy_C"))
class Afly_enemy_C__pf839595025 : public Aenemy_base_C__pf839595025
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stun", Category="Default", MultiLine="true", OverrideNativeName="stun"))
	int32 bpv__stun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Decend Value", Category="Default", MultiLine="true", OverrideNativeName="decend_value"))
	float bpv__decend_value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_enemy_attack_hit"))
	bool b2l__CallFunc_enemy_attack_hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	Afly_enemy_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_fly_enemy__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_fly_enemy_1"))
	void bpf__ExecuteUbergraph_fly_enemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	virtual void bpf__WeakPointBreak__pf() override;
public:
};
