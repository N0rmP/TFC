#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "abst_tool__pf3559600238.h"
class ATower_C__pf711247040;
#include "terminal__pf3559600238.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/player/tool/terminal.terminal_C", OverrideNativeName="terminal_C"))
class Aterminal_C__pf3559600238 : public Aabst_tool_C__pf3559600238
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Scanned Tower", Category="Default", MultiLine="true", OverrideNativeName="ScannedTower"))
	ATower_C__pf711247040* bpv__ScannedTower__pf;
	Aterminal_C__pf3559600238(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__left_click_on__pf() override;
	virtual void bpf__right_click_on__pf() override;
	virtual void bpf__left_click_off__pf() override;
public:
};
