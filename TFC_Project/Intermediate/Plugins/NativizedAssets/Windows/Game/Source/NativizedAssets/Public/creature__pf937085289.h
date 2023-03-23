#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class Udamagable_C__pf937085289;
class AActor;
class UEffect_C__pf3439682450;
class UClass;
#include "creature__pf937085289.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/creature.creature_C", OverrideNativeName="creature_C"))
class Acreature_C__pf937085289 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="damagable"))
	Udamagable_C__pf937085289* bpv__damagable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed Amp", Category="Default", MultiLine="true", OverrideNativeName="SpeedAmp"))
	float bpv__SpeedAmp__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Vulnerablility", Category="Default", MultiLine="true", OverrideNativeName="Vulnerablility"))
	float bpv__Vulnerablility__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Final Vulnerability", Category="Default", MultiLine="true", OverrideNativeName="Final_Vulnerability"))
	float bpv__Final_Vulnerability__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Attacker", Category="Default", MultiLine="true", OverrideNativeName="LastAttacker"))
	AActor* bpv__LastAttacker__pf;
	Acreature_C__pf937085289(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="die"))
	virtual void bpf__die__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="take_damage"))
	virtual void bpf__take_damage__pf(int32 bpp__val__pf, AActor* bpp__attacker__pf, FName bpp__hit_bone_name__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Add_Effect"))
	virtual void bpf__Add_Effect__pf(UClass* bpp__effect__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Remove_Effect"))
	virtual void bpf__Remove_Effect__pf(UEffect_C__pf3439682450* bpp__effect__pf);
public:
};
