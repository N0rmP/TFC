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
NativeOnInitialized : 위젯이 생성될 때 딱 한 번 호출된다. 에디터 편집 시에도 생성될 때 호출된다.
NativeConstruct : AddToViewport 시 호출된다. NativeOnInitialized 와 달리, Viewport 에 Add 될 때마다 불린다!
NativeDestruct : RemoveFromParent(RemoveFromViewport) 시 호출된다. Viewport 에서 Remove 될 때마다 불린다!
*/