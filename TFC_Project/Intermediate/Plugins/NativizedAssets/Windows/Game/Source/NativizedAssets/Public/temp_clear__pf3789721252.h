#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "temp_clear__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/temp_clear.temp_clear_C", OverrideNativeName="temp_clear_C"))
class Utemp_clear_C__pf3789721252 : public UUserWidget
{
public:
	GENERATED_BODY()
	Utemp_clear_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
