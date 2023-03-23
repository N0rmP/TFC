#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class Aelectricity_manager_C__pf3789721252;
class Aplayer_character_C__pf2509438801;
class Arifle_C__pf3559600238;
class Aenemy_manager_C__pf3789721252;
#include "wdg_Hud__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_Hud.wdg_Hud_C", OverrideNativeName="wdg_Hud_C"))
class Uwdg_Hud_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Aim_img", Category="wdg_Hud", OverrideNativeName="Aim_img"))
	UImage* bpv__Aim_img__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image", Category="wdg_Hud", OverrideNativeName="Image"))
	UImage* bpv__Image__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_1", Category="wdg_Hud", OverrideNativeName="Image_1"))
	UImage* bpv__Image_1__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_2", OverrideNativeName="TextBlock_2"))
	UTextBlock* bpv__TextBlock_2__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_5", OverrideNativeName="TextBlock_5"))
	UTextBlock* bpv__TextBlock_5__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_95", OverrideNativeName="TextBlock_95"))
	UTextBlock* bpv__TextBlock_95__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_96", OverrideNativeName="TextBlock_96"))
	UTextBlock* bpv__TextBlock_96__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_395", OverrideNativeName="TextBlock_395"))
	UTextBlock* bpv__TextBlock_395__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Energy", Category="Default", MultiLine="true", OverrideNativeName="energy"))
	Aelectricity_manager_C__pf3789721252* bpv__energy__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hud Plr", Category="Default", MultiLine="true", OverrideNativeName="hud_plr"))
	Aplayer_character_C__pf2509438801* bpv__hud_plr__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="As Rifle", Category="Default", MultiLine="true", OverrideNativeName="As Rifle"))
	Arifle_C__pf3559600238* bpv__AsxRifle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Manager Return", Category="Default", MultiLine="true", OverrideNativeName="Enemy Manager Return"))
	Aenemy_manager_C__pf3789721252* bpv__EnemyxManagerxReturn__pfTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	Uwdg_Hud_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_Hud__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_Hud__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Hud"))
	virtual void bpf__SetxHud__pfT(Aelectricity_manager_C__pf3789721252* bpp__NewParam__pf, Aplayer_character_C__pf2509438801* bpp__NewParam1__pf, Aenemy_manager_C__pf3789721252* bpp__EnemyxManagerxReturn__pfTT);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetText_1"))
	virtual FText  bpf__GetText_1__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
