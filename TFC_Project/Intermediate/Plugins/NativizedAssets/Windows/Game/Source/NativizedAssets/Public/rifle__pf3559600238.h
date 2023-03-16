#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "abst_tool__pf3559600238.h"
#include "rifle__pf3559600238.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/player/tool/rifle.rifle_C", OverrideNativeName="rifle_C"))
class Arifle_C__pf3559600238 : public Aabst_tool_C__pf3559600238
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Ammo", Category="Default", MultiLine="true", OverrideNativeName="max_ammo"))
	int32 bpv__max_ammo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Ammo", Category="Default", MultiLine="true", OverrideNativeName="cur_ammo"))
	int32 bpv__cur_ammo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage Per Bullet", Category="Default", MultiLine="true", OverrideNativeName="damage_per_bullet"))
	int32 bpv__damage_per_bullet__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Automatic Fire Delay", Category="Default", MultiLine="true", OverrideNativeName="automatic_fire_delay"))
	float bpv__automatic_fire_delay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Automatic Fire Handle", Category="Default", MultiLine="true", OverrideNativeName="automatic_fire_handle"))
	FTimerHandle bpv__automatic_fire_handle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zoom FOV Angle", Category="Default", MultiLine="true", OverrideNativeName="zoom_FOV_angle"))
	float bpv__zoom_FOV_angle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Aiming", Category="Default", MultiLine="true", OverrideNativeName="is_aiming"))
	bool bpv__is_aiming__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Sniper Firable", Category="Default", MultiLine="true", OverrideNativeName="is_sniper_firable"))
	bool bpv__is_sniper_firable__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sniper Fire Delay", Category="Default", MultiLine="true", OverrideNativeName="sniper_fire_delay"))
	float bpv__sniper_fire_delay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Reload Time", Category="Default", MultiLine="true", OverrideNativeName="reload_time"))
	float bpv__reload_time__pf;
	Arifle_C__pf3559600238(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	virtual void bpf__left_click_on__pf() override;
	virtual void bpf__left_click_off__pf() override;
	virtual void bpf__right_click_on__pf() override;
	virtual void bpf__right_click_off__pf() override;
	virtual void bpf__R_button__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="fire"))
	virtual void bpf__fire__pf(int32 bpp__damage__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="automatic_fire"))
	virtual void bpf__automatic_fire__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="sniper_fire"))
	virtual void bpf__sniper_fire__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="sniper_delay_done"))
	virtual void bpf__sniper_delay_done__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="reload"))
	virtual void bpf__reload__pf();
public:
};
