#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Module__pf2556257598.h"
class AActor;
class UMain_GameInstance_C__pf3789721252;
class Atower_manager_C__pf3789721252;
class ATower_C__pf711247040;
#include "BasicModule1__pf2556257598.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Modules/BasicModule1.BasicModule1_C", OverrideNativeName="BasicModule1_C"))
class UBasicModule1_C__pf2556257598 : public UModule_C__pf2556257598
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b2l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OtherActor"))
	AActor* b2l__K2Node_Event_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Game_Instance"))
	UMain_GameInstance_C__pf3789721252* b2l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b2l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_tower_manager_tower_manager_return"))
	Atower_manager_C__pf3789721252* b2l__CallFunc_get_tower_manager_tower_manager_return__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_find_towers_target_towers_return"))
	TArray<ATower_C__pf711247040*> b2l__CallFunc_find_towers_target_towers_return__pf;
	UBasicModule1_C__pf2556257598(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BasicModule1__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BasicModule1__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BasicModule1__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ReceiveActorBeginOverlap_1"))
	virtual void bpf__ReceiveActorBeginOverlap_1__pf(AActor* bpp__OtherActor__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame if tick is enabled */", DisplayName="Tick", ToolTip="Event called every frame if tick is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	virtual void bpf__On_Added__pf() override;
public:
};
