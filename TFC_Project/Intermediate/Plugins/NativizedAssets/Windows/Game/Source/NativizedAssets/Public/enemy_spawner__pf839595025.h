#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UStaticMeshComponent;
class USceneComponent;
class Acreature_C__pf937085289;
class Aenemy_base_C__pf839595025;
class UClass;
#include "enemy_spawner__pf839595025.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/enemy_spawner.enemy_spawner_C", OverrideNativeName="enemy_spawner_C"))
class Aenemy_spawner_C__pf839595025 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Cube"))
	UStaticMeshComponent* bpv__Cube__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Timer", Category="Default", MultiLine="true", OverrideNativeName="timer"))
	int32 bpv__timer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemylist", Category="Default", MultiLine="true", OverrideNativeName="enemylist"))
	TArray<Acreature_C__pf937085289*> bpv__enemylist__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Success", Category="Default", MultiLine="true", OverrideNativeName="success"))
	bool bpv__success__pf;
	Aenemy_spawner_C__pf839595025(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="spawn enemy"))
	virtual void bpf__spawnxenemy__pfT(UClass* bpp__enemyxtype__pfT, /*out*/ Aenemy_base_C__pf839595025*& bpp__spawnedxenemy__pfT, /*out*/ bool& bpp__success__pf);
public:
};
