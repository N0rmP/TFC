#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "OnCollection__pf3716123054.h"
class ATower_C__pf711247040;
#include "Module__pf2556257598.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Modules/Module.Module_C", OverrideNativeName="Module_C"))
class UModule_C__pf2556257598 : public UOnCollection_C__pf3716123054
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owner", Category="Default", MultiLine="true", OverrideNativeName="Owner"))
	ATower_C__pf711247040* bpv__Owner__pf;
	UModule_C__pf2556257598(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
	virtual void bpf__On_Search__pf() override;
	virtual void bpf__On_Attack__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetOwner"))
	virtual void bpf__SetOwner__pf(ATower_C__pf711247040* bpp__tower__pf);
public:
};
