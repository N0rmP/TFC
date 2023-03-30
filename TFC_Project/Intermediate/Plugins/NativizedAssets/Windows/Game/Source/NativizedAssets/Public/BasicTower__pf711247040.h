#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Tower__pf711247040.h"
class UStaticMeshComponent;
class UPrimitiveComponent;
class AActor;
class Aenemy_base_C__pf839595025;
class UMain_GameInstance_C__pf3789721252;
class Atower_manager_C__pf3789721252;
class ATower_C__pf711247040;
class ABasicTower_C__pf711247040;
#include "BasicTower__pf711247040.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/Tower/BasicTower.BasicTower_C", OverrideNativeName="BasicTower_C"))
class ABasicTower_C__pf711247040 : public ATower_C__pf711247040
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Sphere"))
	UStaticMeshComponent* bpv__Sphere__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anotherbasictowers", Category="Default", MultiLine="true", OverrideNativeName="anotherbasictowers"))
	int32 bpv__anotherbasictowers__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b1l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_Base"))
	Aenemy_base_C__pf839595025* b1l__K2Node_DynamicCast_AsEnemy_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Game_Instance"))
	UMain_GameInstance_C__pf3789721252* b1l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_tower_manager_tower_manager_return"))
	Atower_manager_C__pf3789721252* b1l__CallFunc_get_tower_manager_tower_manager_return__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_towers_list_towers_res"))
	TArray<ATower_C__pf711247040*> b1l__CallFunc_get_towers_list_towers_res__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ATower_C__pf711247040* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBasic_Tower"))
	ABasicTower_C__pf711247040* b1l__K2Node_DynamicCast_AsBasic_Tower__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b1l_____int_Loop_Counter_Variable__pf;
	ABasicTower_C__pf711247040(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BasicTower__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BasicTower__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BasicTower__pf_2(int32 bpp__EntryPoint__pf);
	virtual void bpf__BndEvt__Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf) override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CustomEvent_0"))
	virtual void bpf__CustomEvent_0__pf();
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf) override;
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	virtual void bpf__Attack__pf() override;
	virtual void bpf__LookAt__pf() override;
public:
};
