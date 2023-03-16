#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "enemy_base__pf839595025.h"
class UStaticMeshComponent;
#include "Enemy_for_Test__pf4098986762.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/test/Enemy_for_Test.Enemy_for_Test_C", OverrideNativeName="Enemy_for_Test_C"))
class AEnemy_for_Test_C__pf4098986762 : public Aenemy_base_C__pf839595025
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Cube"))
	UStaticMeshComponent* bpv__Cube__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_cur_hp_cur_hp_res"))
	int32 b2l__CallFunc_get_cur_hp_cur_hp_res__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	AEnemy_for_Test_C__pf4098986762(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Enemy_for_Test__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_for_Test__pf_1(int32 bpp__EntryPoint__pf);
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
