// Fill out your copyright notice in the Description page of Project Settings.


#include "StageWidget.h"
#include "Components/Button.h"

void UStageWidget::NativeOnInitialized() 
{
	Super::NativeOnInitialized();
	button_Stage = Cast<UButton>(GetWidgetFromName(TEXT("button_Stage_0")));

	if (button_Stage != nullptr)
	{
		button_Stage->OnClicked.AddDynamic(this, &UStageWidget::openStageinfo);
	}
	UE_LOG(LogTemp, Log, TEXT("btn ready"));
}

void UStageWidget::openStageinfo() 
{
	UE_LOG(LogTemp, Log, TEXT("btn pressed"));
}