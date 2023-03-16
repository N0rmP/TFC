#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class AActor;
class UAIAsyncTaskBlueprintProxy;
#include "testEnemy__pf4098986762.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/monster/test/testEnemy.testEnemy_C", OverrideNativeName="testEnemy_C"))
class AtestEnemy_C__pf4098986762 : public ACharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start", Category="Default", MultiLine="true", OverrideNativeName="start"))
	bool bpv__start__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l_____byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsWithTag_OutActors"))
	TArray<AActor*> b0l__CallFunc_GetAllActorsWithTag_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	AtestEnemy_C__pf4098986762(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_testEnemy_0"))
	void bpf__ExecuteUbergraph_testEnemy__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_testEnemy__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_testEnemy_2"))
	void bpf__ExecuteUbergraph_testEnemy__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_testEnemy__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveNPC"))
	virtual void bpf__MoveNPC__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Stop"))
	virtual void bpf__Stop__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_145877984D2002C566C355A759177180"))
	virtual void bpf__OnSuccess_145877984D2002C566C355A759177180__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_145877984D2002C566C355A759177180"))
	virtual void bpf__OnFail_145877984D2002C566C355A759177180__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
public:
};
