// Fill out your copyright notice in the Description page of Project Settings.


#include "StageInfoWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UStageInfoWidget::NativeConstruct()
{
	Super::NativeConstruct();
	// 버튼 이름으로 탐색 후 할당
	button_stgStart = Cast<UButton>(GetWidgetFromName(TEXT("open_stage")));

	if (button_stgStart != nullptr)
	{
		button_stgStart->OnClicked.AddDynamic(this, &UStageInfoWidget::openStage);
	}

}

void UStageInfoWidget::openStage()
{
	UGameplayStatics::OpenLevel(this, FName(TEXT("testing_Map")));
}