#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UComboBoxString;
class UImage;
class USlider;
class UTextBlock;
#include "wdg_optionmenu__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_optionmenu.wdg_optionmenu_C", OverrideNativeName="wdg_optionmenu_C"))
class Uwdg_optionmenu_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_apply", Category="wdg_optionmenu", OverrideNativeName="Button_apply"))
	UButton* bpv__Button_apply__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_undo", Category="wdg_optionmenu", OverrideNativeName="Button_undo"))
	UButton* bpv__Button_undo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ComboBoxString_528", Category="wdg_optionmenu", OverrideNativeName="ComboBoxString_528"))
	UComboBoxString* bpv__ComboBoxString_528__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_39", Category="wdg_optionmenu", OverrideNativeName="Image_39"))
	UImage* bpv__Image_39__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_bgm", Category="wdg_optionmenu", OverrideNativeName="Slider_bgm"))
	USlider* bpv__Slider_bgm__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_matser", Category="wdg_optionmenu", OverrideNativeName="Slider_matser"))
	USlider* bpv__Slider_matser__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Slider_sfx", Category="wdg_optionmenu", OverrideNativeName="Slider_sfx"))
	USlider* bpv__Slider_sfx__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_8", OverrideNativeName="TextBlock_8"))
	UTextBlock* bpv__TextBlock_8__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_616", OverrideNativeName="TextBlock_616"))
	UTextBlock* bpv__TextBlock_616__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mastervl", Category="Default", MultiLine="true", OverrideNativeName="mastervl"))
	float bpv__mastervl__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bgmvl", Category="Default", MultiLine="true", OverrideNativeName="bgmvl"))
	float bpv__bgmvl__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sfxvl", Category="Default", MultiLine="true", OverrideNativeName="sfxvl"))
	float bpv__sfxvl__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Resol", Category="Default", MultiLine="true", OverrideNativeName="resol"))
	FString bpv__resol__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selectedresol", Category="Default", MultiLine="true", OverrideNativeName="selectedresol"))
	FString bpv__selectedresol__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_2"))
	float b0l__K2Node_ComponentBoundEvent_Value_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value_1"))
	float b0l__K2Node_ComponentBoundEvent_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectedItem"))
	FString b0l__K2Node_ComponentBoundEvent_SelectedItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectionType"))
	TEnumAsByte<ESelectInfo::Type> b0l__K2Node_ComponentBoundEvent_SelectionType__pf;
	Uwdg_optionmenu_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_optionmenu__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_ComboBoxString_528_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_ComboBoxString_528_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_Button_undo_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_Button_undo_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_Button_apply_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_Button_apply_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_Slider_sfx_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_Slider_sfx_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_Slider_matser_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_Slider_matser_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_optionmenu_Slider_bgm_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_optionmenu_Slider_bgm_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_0"))
	virtual FText  bpf__GetText_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_2"))
	virtual FText  bpf__GetText_2__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetOptionInfo"))
	virtual void bpf__ResetOptionInfo__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
