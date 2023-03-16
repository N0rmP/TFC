#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UCapsuleComponent;
class UParticleSystemComponent;
class USceneComponent;
class AtestEnemy2_C__pf4098986762;
class UPrimitiveComponent;
class AActor;
#include "AoEEffect__pf711247040.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/Tower/AoEEffect.AoEEffect_C", OverrideNativeName="AoEEffect_C"))
class AAoEEffect_C__pf711247040 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Collision"))
	UCapsuleComponent* bpv__Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="Effect"))
	UParticleSystemComponent* bpv__Effect__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lifespan", Category="Default", MultiLine="true", OverrideNativeName="lifespan"))
	float bpv__lifespan__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lifetime", Category="Default", MultiLine="true", OverrideNativeName="lifetime"))
	float bpv__lifetime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Already Hit", Category="Default", MultiLine="true", OverrideNativeName="AlreadyHit"))
	TArray<AtestEnemy2_C__pf4098986762*> bpv__AlreadyHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsTest_Enemy_2"))
	AtestEnemy2_C__pf4098986762* b0l__K2Node_DynamicCast_AsTest_Enemy_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	AAoEEffect_C__pf711247040(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_AoEEffect__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AoEEffect__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
