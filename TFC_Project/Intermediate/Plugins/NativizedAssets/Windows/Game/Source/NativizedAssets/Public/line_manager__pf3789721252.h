#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
#include "line_manager__pf3789721252.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/Observer/line_manager.line_manager_C,/Game/blueprints/others/Observer/temp.temp_C", OverrideNativeName="line_manager_C"))
class Aline_manager_C__pf3789721252 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="디폴트", OverrideNativeName="line_manager_root"))
	UStaticMeshComponent* bpv__line_manager_root__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spline DMI Map", Category="Default", MultiLine="true", OverrideNativeName="Spline_DMI_map"))
	TMap<UStaticMeshComponent*,UMaterialInstanceDynamic*> bpv__Spline_DMI_map__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Available Line Arr", Category="Default", MultiLine="true", OverrideNativeName="available_line_arr"))
	TArray<UStaticMeshComponent*> bpv__available_line_arr__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cur Line Arr", Category="Default", MultiLine="true", OverrideNativeName="cur_line_arr"))
	TArray<UStaticMeshComponent*> bpv__cur_line_arr__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Loop_Counter_Variable"))
	int32 b0l_____int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Array_Index_Variable"))
	int32 b0l_____int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___int_Variable"))
	int32 b0l_____int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_coor_1"))
	FVector b0l__K2Node_CustomEvent_coor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_coor_2"))
	FVector b0l__K2Node_CustomEvent_coor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Map_Find_Value"))
	UMaterialInstanceDynamic* b0l__CallFunc_Map_Find_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="___struct_Variable"))
	FTransform b0l_____struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UStaticMeshComponent* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_AddComponent_ReturnValue"))
	UStaticMeshComponent* b0l__CallFunc_AddComponent_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Map_Find_Value_1"))
	UMaterialInstanceDynamic* b0l__CallFunc_Map_Find_Value_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateDynamicMaterialInstance_ReturnValue"))
	UMaterialInstanceDynamic* b0l__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult__pf;
	Aline_manager_C__pf3789721252(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_line_manager__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_line_manager__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_line_manager__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_line_manager__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="place_line"))
	virtual void bpf__place_line__pf(FVector bpp__coor_1__pf, FVector bpp__coor_2__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="create_new_line"))
	virtual void bpf__create_new_line__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
public:
};
