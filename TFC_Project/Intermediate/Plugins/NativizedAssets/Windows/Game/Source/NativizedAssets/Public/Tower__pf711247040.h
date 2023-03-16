#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class USceneComponent;
class USphereComponent;
class UModule_C__pf2556257598;
class UClass;
class Aenemy_base_C__pf839595025;
class UPrimitiveComponent;
class AActor;
#include "Tower__pf711247040.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/Tower/Tower.Tower_C", OverrideNativeName="Tower_C"))
class ATower_C__pf711247040 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Body"))
	USkeletalMeshComponent* bpv__Body__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaulsSceneRoot"))
	USceneComponent* bpv__DefaulsSceneRoot__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Range"))
	USphereComponent* bpv__Range__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="ShootingPoint"))
	USceneComponent* bpv__ShootingPoint__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Module List", Category="Default", MultiLine="true", OverrideNativeName="ModuleList"))
	TArray<UClass*> bpv__ModuleList__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Module Applied", Category="Default", MultiLine="true", OverrideNativeName="ModuleApplied"))
	TArray<bool> bpv__ModuleApplied__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy in Sight", Category="Default", MultiLine="true", OverrideNativeName="EnemyInSight"))
	TArray<Aenemy_base_C__pf839595025*> bpv__EnemyInSight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ATK DMG", Category="Default", MultiLine="true", OverrideNativeName="ATK_DMG"))
	int32 bpv__ATK_DMG__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ATK SPD", Category="Default", MultiLine="true", OverrideNativeName="ATK_SPD"))
	float bpv__ATK_SPD__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="ATK RANGE", Category="Default", MultiLine="true", OverrideNativeName="ATK_RANGE"))
	float bpv__ATK_RANGE__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Timer", Category="Default", MultiLine="true", OverrideNativeName="AttackTimer"))
	float bpv__AttackTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower Price", Category="Default", MultiLine="true", OverrideNativeName="TowerPrice"))
	int32 bpv__TowerPrice__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	Aenemy_base_C__pf839595025* bpv__Target__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Up", Category="Default", MultiLine="true", OverrideNativeName="PowerUp"))
	int32 bpv__PowerUp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Up Amount", Category="Default", MultiLine="true", OverrideNativeName="PowerUpAmount"))
	int32 bpv__PowerUpAmount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Amp", Category="Default", MultiLine="true", OverrideNativeName="PowerAmp"))
	float bpv__PowerAmp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Up Count", Category="Default", MultiLine="true", OverrideNativeName="PowerUpCount"))
	int32 bpv__PowerUpCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="SPD AMP", Category="Default", MultiLine="true", OverrideNativeName="SPD_AMP"))
	float bpv__SPD_AMP__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jammed", Category="Default", MultiLine="true", OverrideNativeName="Jammed"))
	bool bpv__Jammed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jam Timer", Category="Default", MultiLine="true", OverrideNativeName="JamTimer"))
	float bpv__JamTimer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___bool_Variable"))
	bool b0l_____bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Base"))
	Aenemy_base_C__pf839595025* b0l__K2Node_DynamicCast_AsEnemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_ModuleIndex"))
	int32 b0l__K2Node_CustomEvent_ModuleIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Base_1"))
	Aenemy_base_C__pf839595025* b0l__K2Node_DynamicCast_AsEnemy_Base_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UClass* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetComponentsByClass_ReturnValue"))
	TArray<UModule_C__pf2556257598*> b0l__CallFunc_K2_GetComponentsByClass_ReturnValue__pf;
	ATower_C__pf711247040(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Tower__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tower__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tower__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tower__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tower__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Tower__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TowerJammed"))
	virtual void bpf__TowerJammed__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ModuleUpgrade"))
	virtual void bpf__ModuleUpgrade__pf(int32 bpp__ModuleIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PowerUpgrade"))
	virtual void bpf__PowerUpgrade__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Attack"))
	virtual void bpf__Attack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LookAt"))
	virtual void bpf__LookAt__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Apply_Module"))
	virtual void bpf__Apply_Module__pf(int32 bpp__index__pf, /*out*/ bool& bpp__applied__pf);
public:
};
