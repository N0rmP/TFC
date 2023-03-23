#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UMultiLineEditableTextBox;
class UTextBlock;
#include "wdg_stageInfo__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_stageInfo.wdg_stageInfo_C", OverrideNativeName="wdg_stageInfo_C"))
class Uwdg_stageInfo_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_undo", Category="wdg_stageInfo", OverrideNativeName="Button_undo"))
	UButton* bpv__Button_undo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="info_bg", Category="wdg_stageInfo", OverrideNativeName="info_bg"))
	UImage* bpv__info_bg__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="info_img", Category="wdg_stageInfo", OverrideNativeName="info_img"))
	UImage* bpv__info_img__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="info_text", Category="wdg_stageInfo", OverrideNativeName="info_text"))
	UMultiLineEditableTextBox* bpv__info_text__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="open_stage", Category="wdg_stageInfo", OverrideNativeName="open_stage"))
	UButton* bpv__open_stage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Stage_name", Category="wdg_stageInfo", OverrideNativeName="Stage_name"))
	UTextBlock* bpv__Stage_name__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stagename", Category="Default", MultiLine="true", OverrideNativeName="stagename"))
	FString bpv__stagename__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", MultiLine="true", OverrideNativeName="NewVar_0"))
	FString bpv__NewVar_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Isinfoshowed", Category="Default", MultiLine="true", OverrideNativeName="isinfoshowed"))
	bool bpv__isinfoshowed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Temptarget Stagename", Category="Default", MultiLine="true", OverrideNativeName="temptargetStagename"))
	FString bpv__temptargetStagename__pf;
	Uwdg_stageInfo_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_stageInfo__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stageInfo__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stageInfo_open_stage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stageInfo_open_stage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_undo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_undo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetStagename"))
	virtual void bpf__SetStagename__pf(int32 bpp__NewParam__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
