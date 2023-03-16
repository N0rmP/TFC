#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "test_excel__pf3303916713.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/blueprints/others/excel/test_excel.test_excel", OverrideNativeName="test_excel"))
struct Ftest_excel__pf3303916713
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="num_1", Tooltip, OverrideNativeName="num_1_8_B177FC7E4E455FD7937128B45F101845"))
	int32 bpv__num_1_8_B177FC7E4E455FD7937128B45F101845__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="num_2", Tooltip, OverrideNativeName="num_2_9_AF722E4A4E807C010BDC6C87BD942C2C"))
	int32 bpv__num_2_9_AF722E4A4E807C010BDC6C87BD942C2C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="num_3", Tooltip, OverrideNativeName="num_3_10_0EB00C094F1271584D9DD18176C5DCF3"))
	int32 bpv__num_3_10_0EB00C094F1271584D9DD18176C5DCF3__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="num_4", Tooltip, OverrideNativeName="num_4_11_6F58F3C7421A53C7F5562B880F907148"))
	int32 bpv__num_4_11_6F58F3C7421A53C7F5562B880F907148__pf;
	Ftest_excel__pf3303916713();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const Ftest_excel__pf3303916713& __Other) const
	{
		return Ftest_excel__pf3303916713::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const Ftest_excel__pf3303916713& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, Ftest_excel__pf3303916713::StaticStruct()); }
};
