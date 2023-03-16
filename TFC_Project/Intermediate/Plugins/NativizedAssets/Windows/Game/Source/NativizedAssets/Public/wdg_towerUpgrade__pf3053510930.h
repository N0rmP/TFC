#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UImage;
class UMultiLineEditableTextBox;
class UTextBlock;
class ATower_C__pf711247040;
class Aplayer_character_C__pf2509438801;
#include "wdg_towerUpgrade__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_towerUpgrade.wdg_towerUpgrade_C", OverrideNativeName="wdg_towerUpgrade_C"))
class Uwdg_towerUpgrade_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_module0", Category="wdg_towerUpgrade", OverrideNativeName="Button_module0"))
	UButton* bpv__Button_module0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_module1", Category="wdg_towerUpgrade", OverrideNativeName="Button_module1"))
	UButton* bpv__Button_module1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_module2", Category="wdg_towerUpgrade", OverrideNativeName="Button_module2"))
	UButton* bpv__Button_module2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_module3", Category="wdg_towerUpgrade", OverrideNativeName="Button_module3"))
	UButton* bpv__Button_module3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_PowerUpgrade", Category="wdg_towerUpgrade", OverrideNativeName="Button_PowerUpgrade"))
	UButton* bpv__Button_PowerUpgrade__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_undoUpgrade", Category="wdg_towerUpgrade", OverrideNativeName="Button_undoUpgrade"))
	UButton* bpv__Button_undoUpgrade__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_UpgradeDone", Category="wdg_towerUpgrade", OverrideNativeName="Button_UpgradeDone"))
	UButton* bpv__Button_UpgradeDone__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_1", Category="wdg_towerUpgrade", OverrideNativeName="level1_1"))
	UImage* bpv__level1_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_2", Category="wdg_towerUpgrade", OverrideNativeName="level1_2"))
	UImage* bpv__level1_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_3", Category="wdg_towerUpgrade", OverrideNativeName="level1_3"))
	UImage* bpv__level1_3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_4", Category="wdg_towerUpgrade", OverrideNativeName="level1_4"))
	UImage* bpv__level1_4__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_5", Category="wdg_towerUpgrade", OverrideNativeName="level1_5"))
	UImage* bpv__level1_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_6", Category="wdg_towerUpgrade", OverrideNativeName="level1_6"))
	UImage* bpv__level1_6__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_7", Category="wdg_towerUpgrade", OverrideNativeName="level1_7"))
	UImage* bpv__level1_7__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_8", Category="wdg_towerUpgrade", OverrideNativeName="level1_8"))
	UImage* bpv__level1_8__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_9", Category="wdg_towerUpgrade", OverrideNativeName="level1_9"))
	UImage* bpv__level1_9__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="level1_10", Category="wdg_towerUpgrade", OverrideNativeName="level1_10"))
	UImage* bpv__level1_10__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="module1Infotext", Category="wdg_towerUpgrade", OverrideNativeName="module1Infotext"))
	UMultiLineEditableTextBox* bpv__module1Infotext__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="module2Infotext", Category="wdg_towerUpgrade", OverrideNativeName="module2Infotext"))
	UMultiLineEditableTextBox* bpv__module2Infotext__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="module3Infotext", Category="wdg_towerUpgrade", OverrideNativeName="module3Infotext"))
	UMultiLineEditableTextBox* bpv__module3Infotext__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="module4Infotext", Category="wdg_towerUpgrade", OverrideNativeName="module4Infotext"))
	UMultiLineEditableTextBox* bpv__module4Infotext__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ModuleName1", Category="wdg_towerUpgrade", OverrideNativeName="ModuleName1"))
	UTextBlock* bpv__ModuleName1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ModuleName2", Category="wdg_towerUpgrade", OverrideNativeName="ModuleName2"))
	UTextBlock* bpv__ModuleName2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ModuleName3", Category="wdg_towerUpgrade", OverrideNativeName="ModuleName3"))
	UTextBlock* bpv__ModuleName3__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ModuleName4", Category="wdg_towerUpgrade", OverrideNativeName="ModuleName4"))
	UTextBlock* bpv__ModuleName4__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_5", OverrideNativeName="TextBlock_5"))
	UTextBlock* bpv__TextBlock_5__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="tower_Name", Category="wdg_towerUpgrade", OverrideNativeName="tower_Name"))
	UTextBlock* bpv__tower_Name__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="tower_Name_1", Category="wdg_towerUpgrade", OverrideNativeName="tower_Name_1"))
	UTextBlock* bpv__tower_Name_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="tower_Name_2", Category="wdg_towerUpgrade", OverrideNativeName="tower_Name_2"))
	UTextBlock* bpv__tower_Name_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="tower_power", Category="wdg_towerUpgrade", OverrideNativeName="tower_power"))
	UTextBlock* bpv__tower_power__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower", Category="Default", MultiLine="true", OverrideNativeName="Tower"))
	ATower_C__pf711247040* bpv__Tower__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Module Selection", Category="Default", MultiLine="true", OverrideNativeName="moduleSelection"))
	TArray<bool> bpv__moduleSelection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Module Num", Category="Default", MultiLine="true", OverrideNativeName="SelectedModuleNum"))
	int32 bpv__SelectedModuleNum__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Modulenum", Category="Default", MultiLine="true", OverrideNativeName="MaxModulenum"))
	int32 bpv__MaxModulenum__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player", Category="Default", MultiLine="true", OverrideNativeName="Player"))
	Aplayer_character_C__pf2509438801* bpv__Player__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Level", Category="Default", MultiLine="true", OverrideNativeName="PowerLevel"))
	int32 bpv__PowerLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Temp Power Upgrade", Category="Default", MultiLine="true", OverrideNativeName="temp_powerUpgrade"))
	int32 bpv__temp_powerUpgrade__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Power Level Img", Category="Default", MultiLine="true", OverrideNativeName="PowerLevelImg"))
	TArray<UImage*> bpv__PowerLevelImg__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enery", Category="Default", MultiLine="true", OverrideNativeName="Enery"))
	int32 bpv__Enery__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Powerprice", Category="Default", MultiLine="true", OverrideNativeName="powerprice"))
	int32 bpv__powerprice__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	Uwdg_towerUpgrade_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerUpgrade__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_128_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_module0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_module0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_module1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_module1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_undoUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_undoUpgrade_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_UpgradeDone_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_UpgradeDone_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_module3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_module3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_module2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_module2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_tower_power_1_Text_0"))
	virtual FText  bpf__Get_tower_power_1_Text_0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="isSelectedModule"))
	virtual void bpf__isSelectedModule__pf(UButton* bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SeletModule"))
	virtual void bpf__SeletModule__pf(UButton* bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ApplyAUpgrade"))
	virtual void bpf__ApplyAUpgrade__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpgradePower"))
	virtual void bpf__UpgradePower__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CloseWidget"))
	virtual void bpf__CloseWidget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateResource"))
	virtual void bpf__UpdateResource__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InittowerUpwdg"))
	virtual void bpf__InittowerUpwdg__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
