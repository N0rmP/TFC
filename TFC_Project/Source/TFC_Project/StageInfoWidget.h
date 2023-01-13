// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StageInfoWidget.generated.h"

/**
 * 
 */
UCLASS()
class TFC_PROJECT_API UStageInfoWidget : public UUserWidget
{
	GENERATED_BODY()
	

protected:
	virtual void NativeConstruct() override;

	UPROPERTY()
	class UButton* button_stgStart;

public:
	UPROPERTY()
	FName targetlevelName;


private:
	
	UFUNCTION()
	void openStage();

};
