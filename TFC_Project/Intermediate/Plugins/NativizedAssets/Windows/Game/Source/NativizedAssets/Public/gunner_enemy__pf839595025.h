#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enemy_base__pf839595025.h"
class UArrowComponent;
#include "gunner_enemy__pf839595025.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/gunner_enemy.gunner_enemy_C", OverrideNativeName="gunner_enemy_C"))
class Agunner_enemy_C__pf839595025 : public Aenemy_base_C__pf839595025
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="gun"))
	UArrowComponent* bpv__gun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stun", Category="Default", MultiLine="true", OverrideNativeName="stun"))
	int32 bpv__stun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Guntimer", Category="Default", MultiLine="true", OverrideNativeName="guntimer"))
	int32 bpv__guntimer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_enemy_attack_hit"))
	bool b2l__CallFunc_enemy_attack_hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_enemy_gun_ready_shoot"))
	bool b2l__CallFunc_enemy_gun_ready_shoot__pf;
	Agunner_enemy_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_gunner_enemy__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_gunner_enemy_1"))
	void bpf__ExecuteUbergraph_gunner_enemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	virtual void bpf__WeakPointBreak__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="enemy_gun_ready"))
	virtual void bpf__enemy_gun_ready__pf(/*out*/ bool& bpp__shoot__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="enemy_gun_fire"))
	virtual void bpf__enemy_gun_fire__pf();
public:
};
