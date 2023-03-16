#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UWidgetAnimation;
class UButton;
class UImage;
#include "wdg_mainmanu__pf3053510930.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/UI/wdg_mainmanu.wdg_mainmanu_C", OverrideNativeName="wdg_mainmanu_C"))
class Uwdg_mainmanu_C__pf3053510930 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="exitanim", Category="Animations", OverrideNativeName="exitanim"))
	UWidgetAnimation* bpv__exitanim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="optionanim", Category="Animations", OverrideNativeName="optionanim"))
	UWidgetAnimation* bpv__optionanim__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="startanim", Category="Animations", OverrideNativeName="startanim"))
	UWidgetAnimation* bpv__startanim__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_exit", Category="wdg_mainmanu", OverrideNativeName="Button_exit"))
	UButton* bpv__Button_exit__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_option", Category="wdg_mainmanu", OverrideNativeName="Button_option"))
	UButton* bpv__Button_option__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_start", Category="wdg_mainmanu", OverrideNativeName="Button_start"))
	UButton* bpv__Button_start__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_58", Category="wdg_mainmanu", OverrideNativeName="Image_58"))
	UImage* bpv__Image_58__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_516", Category="wdg_mainmanu", OverrideNativeName="Image_516"))
	UImage* bpv__Image_516__pf;
	Uwdg_mainmanu_C__pf3053510930(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_wdg_mainmanu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_mainmanu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_wdg_mainmanu__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_wdg_mainmanu_3"))
	void bpf__ExecuteUbergraph_wdg_mainmanu__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_mainmanu_Button_exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_mainmanu_Button_exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__wdg_mainmanu_Button_option_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__wdg_mainmanu_Button_option_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_start_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_start_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
