#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class Aenemy_base_C__pf839595025;
class UClass;
#include "enemy_spawn_table__pf3303916713.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/excel/enemy_spawn_table.enemy_spawn_table", OverrideNativeName="enemy_spawn_table"))
struct Fenemy_spawn_table__pf3303916713
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="delay_next_spawn", Tooltip, OverrideNativeName="delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70"))
	float bpv__delay_next_spawn_14_6DD67B354D00F6B56C6CB0BE9467BA70__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="type_of_enemy", Tooltip, OverrideNativeName="type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372"))
	UClass* bpv__type_of_enemy_13_6C4414C446FC7862BC7F989DBC78A372__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="spawner_number", Tooltip, OverrideNativeName="spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C"))
	int32 bpv__spawner_number_11_D9EC7987499AE75356ADA6B55AD3834C__pf;
	Fenemy_spawn_table__pf3303916713();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const Fenemy_spawn_table__pf3303916713& __Other) const
	{
		return Fenemy_spawn_table__pf3303916713::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const Fenemy_spawn_table__pf3303916713& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, Fenemy_spawn_table__pf3303916713::StaticStruct()); }
};
