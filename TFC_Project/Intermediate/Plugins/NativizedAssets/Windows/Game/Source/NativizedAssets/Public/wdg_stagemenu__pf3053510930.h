#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class Uwdg_stageInfo_C__pf3053510930;
#include "wdg_stagemenu__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_stagemenu.wdg_stagemenu_C", OverrideNativeName="wdg_stagemenu_C"))
class Uwdg_stagemenu_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_0", Category="wdg_stagemenu", OverrideNativeName="button_Stage_0"))
	UButton* bpv__button_Stage_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_1", Category="wdg_stagemenu", OverrideNativeName="button_Stage_1"))
	UButton* bpv__button_Stage_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_2", Category="wdg_stagemenu", OverrideNativeName="button_Stage_2"))
	UButton* bpv__button_Stage_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_3", Category="wdg_stagemenu", OverrideNativeName="button_Stage_3"))
	UButton* bpv__button_Stage_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_4", Category="wdg_stagemenu", OverrideNativeName="button_Stage_4"))
	UButton* bpv__button_Stage_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="button_Stage_5", Category="wdg_stagemenu", OverrideNativeName="button_Stage_5"))
	UButton* bpv__button_Stage_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_142", Category="wdg_stagemenu", OverrideNativeName="Image_142"))
	UImage* bpv__Image_142__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_248", Category="wdg_stagemenu", OverrideNativeName="Image_248"))
	UImage* bpv__Image_248__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerUpgrade", Category="wdg_stagemenu", OverrideNativeName="PlayerUpgrade"))
	UButton* bpv__PlayerUpgrade__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="wdg_stageInfo", Category="wdg_stagemenu", OverrideNativeName="wdg_stageInfo"))
	Uwdg_stageInfo_C__pf3053510930* bpv__wdg_stageInfo__pf;
	Uwdg_stagemenu_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_stagemenu__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_PlayerUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_PlayerUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_5_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_4_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_stagemenu_button_Stage_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_stagemenu_button_Stage_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OpenInfo"))
	virtual void bpf__OpenInfo__pf(UButton* bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Enable Btns"))
	virtual void bpf__EnablexBtns__pfT(bool bpp__NewParam__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
