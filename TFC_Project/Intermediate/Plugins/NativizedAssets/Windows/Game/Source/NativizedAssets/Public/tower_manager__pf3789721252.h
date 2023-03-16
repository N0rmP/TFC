#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
class ATower_C__pf711247040;
class ATowerBase_C__pf711247040;
#include "tower_manager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/tower_manager.tower_manager_C", OverrideNativeName="tower_manager_C"))
class Atower_manager_C__pf3789721252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Towers", Category="Default", MultiLine="true", OverrideNativeName="towers"))
	TArray<ATower_C__pf711247040*> bpv__towers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower Bases", Category="Default", MultiLine="true", OverrideNativeName="tower_bases"))
	TArray<ATowerBase_C__pf711247040*> bpv__tower_bases__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_tower_1"))
	ATower_C__pf711247040* b0l__K2Node_CustomEvent_tower_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_tower"))
	ATower_C__pf711247040* b0l__K2Node_CustomEvent_tower__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ATowerBase_C__pf711247040*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	Atower_manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_tower_manager__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_tower_manager__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_tower_manager__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_tower_manager__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="remove_tower_by_reference"))
	virtual void bpf__remove_tower_by_reference__pf(ATower_C__pf711247040* bpp__tower__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="add_tower"))
	virtual void bpf__add_tower__pf(ATower_C__pf711247040* bpp__tower__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="clear_towers"))
	virtual void bpf__clear_towers__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="initiation"))
	virtual void bpf__initiation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_towers_list"))
	virtual void bpf__get_towers_list__pf(/*out*/ TArray<ATower_C__pf711247040*>& bpp__towers_res__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="find_towers"))
	virtual void bpf__find_towers__pf(ATower_C__pf711247040* bpp__type_of_tower__pf, /*out*/ TArray<ATower_C__pf711247040*>& bpp__target_towers_return__pf);
public:
};
