#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "creature__pf937085289.h"
class USpotLightComponent;
class UChildActorComponent;
class UCameraComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class Aabst_tool_C__pf3559600238;
class ARobot1_C__pf1579232813;
class AActor;
#include "player_character__pf2509438801.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/player/player_character.player_character_C", OverrideNativeName="player_character_C"))
class Aplayer_character_C__pf2509438801 : public Acreature_C__pf937085289
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="head_light"))
	USpotLightComponent* bpv__head_light__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="terminal"))
	UChildActorComponent* bpv__terminal__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="rifle"))
	UChildActorComponent* bpv__rifle__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="normal_camera"))
	UCameraComponent* bpv__normal_camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="FPS_ram_mesh"))
	USkeletalMeshComponent* bpv__FPS_ram_mesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="camera_arm"))
	USpringArmComponent* bpv__camera_arm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dash", Category="Default", MultiLine="true", OverrideNativeName="is_dash"))
	bool bpv__is_dash__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Focussing", Category="Default", MultiLine="true", OverrideNativeName="is_focussing"))
	bool bpv__is_focussing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Reloading", Category="Default", MultiLine="true", OverrideNativeName="is_reloading"))
	bool bpv__is_reloading__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Walk Speed", Category="Default", MultiLine="true", OverrideNativeName="walk_speed"))
	float bpv__walk_speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Run Speed", Category="Default", MultiLine="true", OverrideNativeName="run_speed"))
	float bpv__run_speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Tool", Category="Default", MultiLine="true", OverrideNativeName="cur_tool"))
	Aabst_tool_C__pf3559600238* bpv__cur_tool__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Tool List", Category="Default", MultiLine="true", OverrideNativeName="tool_list"))
	TArray<UChildActorComponent*> bpv__tool_list__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Tool Index", Category="Default", MultiLine="true", OverrideNativeName="cur_tool_index"))
	int32 bpv__cur_tool_index__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Robot", Category="Default", MultiLine="true", OverrideNativeName="robot"))
	ARobot1_C__pf1579232813* bpv__robot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hp Gen Amount", Category="Default", MultiLine="true", OverrideNativeName="hp_gen_amount"))
	int32 bpv__hp_gen_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hp Gen Cur Timer", Category="Default", MultiLine="true", OverrideNativeName="hp_gen_cur_timer"))
	float bpv__hp_gen_cur_timer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hp Gen Max Timer", Category="Default", MultiLine="true", OverrideNativeName="hp_gen_max_timer"))
	float bpv__hp_gen_max_timer__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Plr Max Hp", Category="Default", MultiLine="true", OverrideNativeName="plr_max_hp"))
	int32 bpv__plr_max_hp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b1l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b1l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable"))
	FKey b1l_____struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b1l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b1l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b1l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b1l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_6"))
	float b1l__K2Node_InputAxisEvent_AxisValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b1l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b1l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b1l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b1l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b1l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable_1"))
	FKey b1l_____struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b1l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddLocalRotation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_AddLocalRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b1l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b1l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b1l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b1l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b1l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_get_max_hp_Max_Hp_Res"))
	int32 b1l__CallFunc_get_max_hp_Max_Hp_Res__pf;
	Aplayer_character_C__pf2509438801(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_player_character__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_player_character__pf_16(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_mouse_wheel_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_axis_input_mouse_wheel_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_mouse_y_K2Node_InputAxisEvent_11"))
	virtual void bpf__InpAxisEvt_axis_input_mouse_y_K2Node_InputAxisEvent_11__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_mouse_x_K2Node_InputAxisEvent_10"))
	virtual void bpf__InpAxisEvt_axis_input_mouse_x_K2Node_InputAxisEvent_10__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_jump_K2Node_InputAxisEvent_9"))
	virtual void bpf__InpAxisEvt_axis_input_jump_K2Node_InputAxisEvent_9__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_left_right_K2Node_InputAxisEvent_8"))
	virtual void bpf__InpAxisEvt_axis_input_left_right_K2Node_InputAxisEvent_8__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_dash_K2Node_InputAxisEvent_6"))
	virtual void bpf__InpAxisEvt_axis_input_dash_K2Node_InputAxisEvent_6__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_axis_input_forward_backward_K2Node_InputAxisEvent_4"))
	virtual void bpf__InpAxisEvt_axis_input_forward_backward_K2Node_InputAxisEvent_4__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_robot_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_action_input_robot_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_2_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_action_input_2_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_1_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_action_input_1_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_R_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_action_input_R_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_right_click_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_action_input_right_click_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_right_click_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_action_input_right_click_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_left_click_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_action_input_left_click_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_action_input_left_click_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_action_input_left_click_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	virtual void bpf__UserConstructionScript__pf() override;
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_is_dash"))
	virtual void bpf__get_is_dash__pf(/*out*/ bool& bpp__is_dash_res__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="set_is_dash"))
	virtual void bpf__set_is_dash__pf(bool bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_is_focussing"))
	virtual void bpf__get_is_focussing__pf(/*out*/ bool& bpp__is_focussing_ret__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="set_is_focussing"))
	virtual void bpf__set_is_focussing__pf(bool bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="get_is_reloading"))
	virtual void bpf__get_is_reloading__pf(/*out*/ bool& bpp__is_reloading_return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="set_is_reloading"))
	virtual void bpf__set_is_reloading__pf(bool bpp__val__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="get_linetracing"))
	virtual void bpf__get_linetracing__pf(/*out*/ FHitResult& bpp__linetraced_result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="set_zoom"))
	virtual void bpf__set_zoom__pf(float bpp__zoom_FOV_angle__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="swap_tool"))
	virtual void bpf__swap_tool__pf(int32 bpp__tool_index__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="hp_generate"))
	virtual void bpf__hp_generate__pf(float bpp__val__pf);
	virtual void bpf__take_damage__pf(int32 bpp__val__pf, AActor* bpp__attacker__pf, FName bpp__hit_bone_name__pf) override;
	virtual void bpf__die__pf() override;
public:
};
