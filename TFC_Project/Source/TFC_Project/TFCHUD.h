// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TFCHUD.generated.h"

/**
 * 
 */
UCLASS()
class TFC_PROJECT_API ATFCHUD : public AHUD
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
		UTexture2D* crosshair_texture;

public:
	//virtual void DrawHUD() override;

};
