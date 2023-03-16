#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class Aplayer_character_C__pf2509438801;
#include "player_controller__pf2509438801.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/player/player_controller.player_controller_C", OverrideNativeName="player_controller_C"))
class Aplayer_controller_C__pf2509438801 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plr", Category="Default", MultiLine="true", OverrideNativeName="Plr"))
	Aplayer_character_C__pf2509438801* bpv__Plr__pf;
	Aplayer_controller_C__pf2509438801(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
