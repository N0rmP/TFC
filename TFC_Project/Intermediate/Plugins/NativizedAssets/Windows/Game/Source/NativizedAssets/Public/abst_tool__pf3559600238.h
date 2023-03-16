#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkeletalMeshComponent;
class USceneComponent;
class Aplayer_character_C__pf2509438801;
class AActor;
#include "abst_tool__pf3559600238.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/player/tool/abst_tool.abst_tool_C", OverrideNativeName="abst_tool_C"))
class Aabst_tool_C__pf3559600238 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="tool_mesh"))
	USkeletalMeshComponent* bpv__tool_mesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tool Owner", Category="Default", MultiLine="true", OverrideNativeName="tool_owner"))
	Aplayer_character_C__pf2509438801* bpv__tool_owner__pf;
	Aabst_tool_C__pf3559600238(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="left_click_on"))
	virtual void bpf__left_click_on__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="left_click_off"))
	virtual void bpf__left_click_off__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="right_click_on"))
	virtual void bpf__right_click_on__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="right_click_off"))
	virtual void bpf__right_click_off__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="R_button"))
	virtual void bpf__R_button__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_tool_owner"))
	virtual void bpf__set_tool_owner__pf(Aplayer_character_C__pf2509438801* bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_owners_linetracing"))
	virtual void bpf__get_owners_linetracing__pf(/*out*/ AActor*& bpp__lintraced_actor__pf, /*out*/ FName& bpp__linetraced_hit_bone__pf, /*out*/ FVector& bpp__linetraced_location__pf);
public:
};
