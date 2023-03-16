#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "creature__pf937085289.h"
class Acreature_C__pf937085289;
class UAIAsyncTaskBlueprintProxy;
class AActor;
#include "enemy_base__pf839595025.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/enemy_base.enemy_base_C", OverrideNativeName="enemy_base_C"))
class Aenemy_base_C__pf839595025 : public Acreature_C__pf937085289
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start", Category="Default", MultiLine="true", OverrideNativeName="start"))
	bool bpv__start__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	Acreature_C__pf937085289* bpv__Target__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cndition", Category="Default", MultiLine="true", OverrideNativeName="cndition"))
	bool bpv__cndition__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loop Checker", Category="Default", MultiLine="true", OverrideNativeName="loop_checker"))
	bool bpv__loop_checker__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Individual Max Hp", Category="Default", MultiLine="true", OverrideNativeName="individual_max_hp"))
	int32 bpv__individual_max_hp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Walk Speed", Category="Default", MultiLine="true", OverrideNativeName="WalkSpeed"))
	float bpv__WalkSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed Check TImer", Category="Default", MultiLine="true", OverrideNativeName="SpeedCheckTImer"))
	float bpv__SpeedCheckTImer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Electricity Drop", Category="Default", MultiLine="true", OverrideNativeName="Electricity_Drop"))
	int32 bpv__Electricity_Drop__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Hit", Category="Default", MultiLine="true", OverrideNativeName="isHit"))
	bool bpv__isHit__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="State", Category="Default", MultiLine="true", OverrideNativeName="state"))
	int32 bpv__state__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weak Point", Category="Default", MultiLine="true", OverrideNativeName="weakPoint"))
	TArray<FName> bpv__weakPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Weak Point HP", Category="Default", MultiLine="true", OverrideNativeName="cur WeakPointHP"))
	int32 bpv__curxWeakPointHP__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b1l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b1l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	Aenemy_base_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_enemy_base__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_enemy_base_1"))
	void bpf__ExecuteUbergraph_enemy_base__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_enemy_base_2"))
	void bpf__ExecuteUbergraph_enemy_base__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Stop"))
	virtual void bpf__Stop__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToTarget"))
	virtual void bpf__MoveToTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF"))
	virtual void bpf__OnSuccess_59FAFF6A43C194E18E3711B31C93DBDF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_59FAFF6A43C194E18E3711B31C93DBDF"))
	virtual void bpf__OnFail_59FAFF6A43C194E18E3711B31C93DBDF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	virtual void bpf__UserConstructionScript__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="enemy_init"))
	virtual void bpf__enemy_init__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="0=목표 없음,1=가까운 것 2=플레이어,3=코어 우선", Category, OverrideNativeName="get_Target"))
	virtual void bpf__get_Target__pf(int32 bpp__chasextype__pfT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="enemy_attack"))
	virtual void bpf__enemy_attack__pf(int32 bpp__damage__pf, float bpp__range__pf, /*out*/ bool& bpp__hit__pf);
	virtual void bpf__die__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckSlowRate"))
	virtual void bpf__CheckSlowRate__pf();
	virtual void bpf__take_damage__pf(int32 bpp__val__pf, AActor* bpp__attacker__pf, FName bpp__hit_bone_name__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HitWeakPoint"))
	virtual void bpf__HitWeakPoint__pf(int32 bpp__dmg__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="WeakPointBreak"))
	virtual void bpf__WeakPointBreak__pf();
public:
};
