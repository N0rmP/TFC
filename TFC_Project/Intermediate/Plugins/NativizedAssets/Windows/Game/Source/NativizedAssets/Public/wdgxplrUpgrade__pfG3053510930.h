#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UTextBlock;
#include "wdgxplrUpgrade__pfG3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg-plrUpgrade.wdg-plrUpgrade_C", OverrideNativeName="wdg-plrUpgrade_C"))
class UwdgxplrUpgrade_C__pfG3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_106", Category="wdg-plrUpgrade", OverrideNativeName="Button_106"))
	UButton* bpv__Button_106__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_140", Category="wdg-plrUpgrade", OverrideNativeName="Button_140"))
	UButton* bpv__Button_140__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_253", Category="wdg-plrUpgrade", OverrideNativeName="Button_253"))
	UButton* bpv__Button_253__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_R_1", Category="wdg-plrUpgrade", OverrideNativeName="Button_R_1"))
	UButton* bpv__Button_R_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_R_2", Category="wdg-plrUpgrade", OverrideNativeName="Button_R_2"))
	UButton* bpv__Button_R_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_R_3", Category="wdg-plrUpgrade", OverrideNativeName="Button_R_3"))
	UButton* bpv__Button_R_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_RF_1", Category="wdg-plrUpgrade", OverrideNativeName="Button_RF_1"))
	UButton* bpv__Button_RF_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_RF_2", Category="wdg-plrUpgrade", OverrideNativeName="Button_RF_2"))
	UButton* bpv__Button_RF_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_RF_3", Category="wdg-plrUpgrade", OverrideNativeName="Button_RF_3"))
	UButton* bpv__Button_RF_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_S_1", Category="wdg-plrUpgrade", OverrideNativeName="Button_S_1"))
	UButton* bpv__Button_S_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_S_2", Category="wdg-plrUpgrade", OverrideNativeName="Button_S_2"))
	UButton* bpv__Button_S_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_S_3", Category="wdg-plrUpgrade", OverrideNativeName="Button_S_3"))
	UButton* bpv__Button_S_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_0", Category="wdg-plrUpgrade", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_278", OverrideNativeName="TextBlock_278"))
	UTextBlock* bpv__TextBlock_278__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Curcells", Category="Default", MultiLine="true", OverrideNativeName="curcells"))
	int32 bpv__curcells__pf;
	UwdgxplrUpgrade_C__pfG3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdgxplrUpgrade__pfG_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_RF_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_RF_3_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_RF_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_RF_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_RF_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_RF_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_S_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_S_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_S_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_S_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_R_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_R_3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_R_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_R_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_R_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_R_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_140_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg-plrUpgrade_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdgxplrUpgrade_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pfG();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updateUpgrd"))
	virtual void bpf__updateUpgrd__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Upgrade Suit"))
	virtual void bpf__UpgradexSuit__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Upgrade Robot"))
	virtual void bpf__UpgradexRobot__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Upgrade rifle"))
	virtual void bpf__Upgradexrifle__pfT(UButton* bpp__NewParam__pf, int32 bpp__NewParam1__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="payCost"))
	virtual void bpf__payCost__pf(int32 bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetCell"))
	virtual FText  bpf__GetCell__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
