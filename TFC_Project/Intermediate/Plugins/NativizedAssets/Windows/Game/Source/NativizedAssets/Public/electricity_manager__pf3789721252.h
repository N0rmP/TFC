#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USceneComponent;
#include "electricity_manager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/electricity_manager.electricity_manager_C", OverrideNativeName="electricity_manager_C"))
class Aelectricity_manager_C__pf3789721252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Electricity", Category="Default", MultiLine="true", OverrideNativeName="cur_electricity"))
	int32 bpv__cur_electricity__pf;
	Aelectricity_manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_electricity"))
	virtual void bpf__get_electricity__pf(/*out*/ int32& bpp__cur_electricity_res__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_electricity"))
	virtual void bpf__set_electricity__pf(int32 bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="add_electricity"))
	virtual void bpf__add_electricity__pf(int32 bpp__val__pf, /*out*/ bool& bpp__is_possible__pf);
public:
};
