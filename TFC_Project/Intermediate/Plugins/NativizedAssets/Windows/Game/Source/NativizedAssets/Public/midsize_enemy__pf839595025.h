#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enemy_base__pf839595025.h"
class AActor;
#include "midsize_enemy__pf839595025.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/midsize_enemy.midsize_enemy_C", OverrideNativeName="midsize_enemy_C"))
class Amidsize_enemy_C__pf839595025 : public Aenemy_base_C__pf839595025
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hard Point", Category="Default", MultiLine="true", OverrideNativeName="hardPoint"))
	TArray<FName> bpv__hardPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_enemy_attack_hit"))
	bool b2l__CallFunc_enemy_attack_hit__pf;
	Amidsize_enemy_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_midsize_enemy__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_midsize_enemy_1"))
	void bpf__ExecuteUbergraph_midsize_enemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	virtual void bpf__WeakPointBreak__pf() override;
	virtual void bpf__take_damage__pf(int32 bpp__val__pf, AActor* bpp__attacker__pf, FName bpp__hit_bone_name__pf) override;
public:
};
