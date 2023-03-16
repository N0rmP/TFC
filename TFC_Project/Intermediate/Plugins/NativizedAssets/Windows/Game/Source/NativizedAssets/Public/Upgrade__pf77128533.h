#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "OnCollection__pf3716123054.h"
class UUpgrade_C__pf77128533;
class UClass;
#include "Upgrade__pf77128533.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Upgrade.Upgrade_C,/Game/blueprints/OnCollections/Upgrades/Upgrade2.Upgrade2_C", OverrideNativeName="Upgrade_C"))
class UUpgrade_C__pf77128533 : public UOnCollection_C__pf3716123054
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cost", Category="Default", MultiLine="true", OverrideNativeName="Cost"))
	int32 bpv__Cost__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Next Upgrades", Category="Default", MultiLine="true", OverrideNativeName="Next_Upgrades"))
	TArray<UClass*> bpv__Next_Upgrades__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prev Upgrade", Category="Default", MultiLine="true", OverrideNativeName="prev_Upgrade"))
	UClass* bpv__prev_Upgrade__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Upgrade Tier", Category="Default", MultiLine="true", OverrideNativeName="upgrade_Tier"))
	int32 bpv__upgrade_Tier__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Upgraded", Category="Default", MultiLine="true", OverrideNativeName="upgraded"))
	int32 bpv__upgraded__pf;
	UUpgrade_C__pf77128533(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__On_Added__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Upgrade_This"))
	virtual void bpf__Upgrade_This__pf(/*out*/ bool& bpp__succeed__pf);
public:
};
