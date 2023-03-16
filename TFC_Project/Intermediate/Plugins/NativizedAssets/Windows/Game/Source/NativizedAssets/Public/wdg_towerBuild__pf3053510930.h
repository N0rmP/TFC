#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class UVerticalBox;
class UImage;
class UOverlay;
class UTextBlock;
class ATowerBase_C__pf711247040;
class Aplayer_character_C__pf2509438801;
class ABasicTower_C__pf711247040;
class ASniperTower_C__pf711247040;
class AAoETower_C__pf711247040;
class UMain_GameInstance_C__pf3789721252;
#include "wdg_towerBuild__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_towerBuild.wdg_towerBuild_C", OverrideNativeName="wdg_towerBuild_C"))
class Uwdg_towerBuild_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="alreadybuild", Category="wdg_towerBuild", OverrideNativeName="alreadybuild"))
	UButton* bpv__alreadybuild__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_0", Category="wdg_towerBuild", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_1", Category="wdg_towerBuild", OverrideNativeName="Button_1"))
	UButton* bpv__Button_1__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_2", Category="wdg_towerBuild", OverrideNativeName="Button_2"))
	UButton* bpv__Button_2__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_build", Category="wdg_towerBuild", OverrideNativeName="Button_build"))
	UButton* bpv__Button_build__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_closewdg", Category="wdg_towerBuild", OverrideNativeName="Button_closewdg"))
	UButton* bpv__Button_closewdg__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_No", Category="wdg_towerBuild", OverrideNativeName="Button_No"))
	UButton* bpv__Button_No__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="CurBuiltTower", Category="wdg_towerBuild", OverrideNativeName="CurBuiltTower"))
	UVerticalBox* bpv__CurBuiltTower__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_277", Category="wdg_towerBuild", OverrideNativeName="Image_277"))
	UImage* bpv__Image_277__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Overlay_111", Category="wdg_towerBuild", OverrideNativeName="Overlay_111"))
	UOverlay* bpv__Overlay_111__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_4", OverrideNativeName="TextBlock_4"))
	UTextBlock* bpv__TextBlock_4__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_6", OverrideNativeName="TextBlock_6"))
	UTextBlock* bpv__TextBlock_6__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_8", OverrideNativeName="TextBlock_8"))
	UTextBlock* bpv__TextBlock_8__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_10", OverrideNativeName="TextBlock_10"))
	UTextBlock* bpv__TextBlock_10__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Towerbase", Category="Default", MultiLine="true", OverrideNativeName="towerbase"))
	ATowerBase_C__pf711247040* bpv__towerbase__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower Build", Category="Default", MultiLine="true", OverrideNativeName="towerBuild"))
	bool bpv__towerBuild__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selectedtype", Category="Default", MultiLine="true", OverrideNativeName="selectedtype"))
	FString bpv__selectedtype__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Plr", Category="Default", MultiLine="true", OverrideNativeName="plr"))
	Aplayer_character_C__pf2509438801* bpv__plr__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Basic", Category="Default", MultiLine="true", OverrideNativeName="basic"))
	ABasicTower_C__pf711247040* bpv__basic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sniper", Category="Default", MultiLine="true", OverrideNativeName="sniper"))
	ASniperTower_C__pf711247040* bpv__sniper__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Aoe", Category="Default", MultiLine="true", OverrideNativeName="aoe"))
	AAoETower_C__pf711247040* bpv__aoe__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Price", Category="Default", MultiLine="true", OverrideNativeName="price"))
	int32 bpv__price__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dmg", Category="Default", MultiLine="true", OverrideNativeName="dmg"))
	int32 bpv__dmg__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spd", Category="Default", MultiLine="true", OverrideNativeName="spd"))
	float bpv__spd__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Range", Category="Default", MultiLine="true", OverrideNativeName="range"))
	float bpv__range__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selectedtower", Category="Default", MultiLine="true", OverrideNativeName="selectedtower"))
	int32 bpv__selectedtower__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tower Chosen", Category="Default", MultiLine="true", OverrideNativeName="towerChosen"))
	bool bpv__towerChosen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Energy", Category="Default", MultiLine="true", OverrideNativeName="energy"))
	int32 bpv__energy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_selectedtpe_NewParam1"))
	bool b0l__CallFunc_selectedtpe_NewParam1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_selectedtpe_NewParam1_1"))
	bool b0l__CallFunc_selectedtpe_NewParam1_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_selectedtpe_NewParam1_2"))
	bool b0l__CallFunc_selectedtpe_NewParam1_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMain_Game_Instance"))
	UMain_GameInstance_C__pf3789721252* b0l__K2Node_DynamicCast_AsMain_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_add_electricity_is_possible"))
	bool b0l__CallFunc_add_electricity_is_possible__pf;
	Uwdg_towerBuild_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_towerBuild__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_build_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_build_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_alreadybuild_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_alreadybuild_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_closewdg_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_closewdg_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_2_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_1_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_0_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_towerBuild_Button_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_towerBuild_Button_No_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="setbase"))
	virtual void bpf__setbase__pf(ATowerBase_C__pf711247040* bpp__NewParam__pf, Aplayer_character_C__pf2509438801* bpp__NewParam1__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="selectedtpe"))
	virtual void bpf__selectedtpe__pf(int32 bpp__NewParam__pf, /*out*/ bool& bpp__NewParam1__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updatehovered"))
	virtual void bpf__updatehovered__pf(int32 bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="closewdg"))
	virtual void bpf__closewdg__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
