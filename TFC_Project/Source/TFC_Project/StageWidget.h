// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StageWidget.generated.h"

/**
 * 
 */
UCLASS()
class TFC_PROJECT_API UStageWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;
	// 
	UPROPERTY(BlueprintReadWrite)
	class UButton* button_Stage;

private:
	UFUNCTION()
	void openStageinfo();

};
/*
NativeOnInitialized : ������ ������ �� �� �� �� ȣ��ȴ�. ������ ���� �ÿ��� ������ �� ȣ��ȴ�.
NativeConstruct : AddToViewport �� ȣ��ȴ�. NativeOnInitialized �� �޸�, Viewport �� Add �� ������ �Ҹ���!
NativeDestruct : RemoveFromParent(RemoveFromViewport) �� ȣ��ȴ�. Viewport ���� Remove �� ������ �Ҹ���!
*/