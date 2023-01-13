// Fill out your copyright notice in the Description page of Project Settings.


#include "StageWidget.h"
#include "Components/Button.h"

void UStageWidget::NativeConstruct()
{
	Super::NativeConstruct();
	// 버튼 이름으로 탐색 후 할당
	button_Stage = Cast<UButton>(GetWidgetFromName(TEXT("button_Stage_0")));

	if (button_Stage != nullptr)
	{
		button_Stage->OnClicked.AddDynamic(this, &UStageWidget::openStageinfo);
	}
	
	InfoWidget = Cast<UUserWidget>(GetWidgetFromName(TEXT("wdg_stageInfo")));
	UE_LOG(LogTemp, Log, TEXT("btn ready"));
}

void UStageWidget::openStageinfo() 
{
	UE_LOG(LogTemp, Log, TEXT("btn pressed"));
	InfoWidget->SetVisibility(ESlateVisibility::Visible);

}