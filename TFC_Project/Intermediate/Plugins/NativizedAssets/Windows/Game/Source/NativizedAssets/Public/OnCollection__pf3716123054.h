#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "OnCollection__pf3716123054.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/OnCollection.OnCollection_C", OverrideNativeName="OnCollection_C"))
class UOnCollection_C__pf3716123054 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Category="Default", MultiLine="true", OverrideNativeName="Name"))
	FString bpv__Name__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Tool Tip Text", Category="Default", MultiLine="true", OverrideNativeName="Tool_Tip_Text"))
	FString bpv__Tool_Tip_Text__pf;
	UOnCollection_C__pf3716123054(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Added"))
	virtual void bpf__On_Added__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Attacked"))
	virtual void bpf__On_Attacked__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_CreatureDie"))
	virtual void bpf__On_CreatureDie__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Stacked"))
	virtual void bpf__On_Stacked__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Die"))
	virtual void bpf__On_Die__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Attack"))
	virtual void bpf__On_Attack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="On_Search"))
	virtual void bpf__On_Search__pf();
public:
};
