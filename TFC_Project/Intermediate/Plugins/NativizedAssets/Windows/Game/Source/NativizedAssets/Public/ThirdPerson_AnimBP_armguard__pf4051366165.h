#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class Amidsize_enemy_C__pf839595025;
#include "ThirdPerson_AnimBP_armguard__pf4051366165.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/resouerce/Mannequin/Animations/ThirdPerson_AnimBP_armguard.ThirdPerson_AnimBP_armguard_C", OverrideNativeName="ThirdPerson_AnimBP_armguard_C"))
class UThirdPerson_AnimBP_armguard_C__pf4051366165 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_1"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Air?", Category="Default", OverrideNativeName="IsInAir?"))
	bool bpv__IsInAirx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Isguard", Category="Default", MultiLine="true", OverrideNativeName="isguard"))
	bool bpv__isguard__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMidsize_Enemy"))
	Amidsize_enemy_C__pf839595025* b0l__K2Node_DynamicCast_AsMidsize_Enemy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UThirdPerson_AnimBP_armguard_C__pf4051366165(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void bpf__ExecuteUbergraph_ThirdPerson_AnimBP_armguard__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPerson_AnimBP_armguard__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPerson_AnimBP_armguard__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPerson_AnimBP_armguard__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_TransitionResult_CC3612DA4BF3588F6AFBE2AD573AE329__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_B070F20348F5268F9B6405A8F20C5E37__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_armguard_AnimGraphNode_BlendSpacePlayer_63CD7D1E41D0AE3D5239AA8A93754678__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
