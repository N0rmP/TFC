#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class Acreature_C__pf937085289;
#include "damagable__pf937085289.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/damagable.damagable_C", OverrideNativeName="damagable_C"))
class Udamagable_C__pf937085289 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Hp", Category="Default", MultiLine="true", OverrideNativeName="cur_hp"))
	int32 bpv__cur_hp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Hp", Category="Default", MultiLine="true", OverrideNativeName="max_hp"))
	int32 bpv__max_hp__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Owner", Category="Default", MultiLine="true", OverrideNativeName="owner"))
	Acreature_C__pf937085289* bpv__owner__pf;
	Udamagable_C__pf937085289(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_cur_hp"))
	virtual void bpf__get_cur_hp__pf(/*out*/ int32& bpp__cur_hp_res__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_cur_hp"))
	virtual void bpf__set_cur_hp__pf(int32 bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="add_cur_hp"))
	virtual void bpf__add_cur_hp__pf(int32 bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_owner"))
	virtual void bpf__set_owner__pf(Acreature_C__pf937085289* bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_max_hp"))
	virtual void bpf__get_max_hp__pf(/*out*/ int32& bpp__MaxxHpxRes__pfTT);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="add_max_hp"))
	virtual void bpf__add_max_hp__pf(int32 bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_max_hp"))
	virtual void bpf__set_max_hp__pf(int32 bpp__val__pf);
public:
};
