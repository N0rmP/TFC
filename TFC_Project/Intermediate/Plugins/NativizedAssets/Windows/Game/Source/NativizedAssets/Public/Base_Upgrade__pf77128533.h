#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Upgrade__pf77128533.h"
class UUpgrade_C__pf77128533;
class UClass;
#include "Base_Upgrade__pf77128533.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/OnCollections/Upgrades/Base_Upgrade.Base_Upgrade_C", OverrideNativeName="Base_Upgrade_C"))
class UBase_Upgrade_C__pf77128533 : public UUpgrade_C__pf77128533
{
public:
	GENERATED_BODY()
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UClass*> b2l__K2Node_MakeArray_Array__pf;
	UBase_Upgrade_C__pf77128533(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Base_Upgrade__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
