// Fill out your copyright notice in the Description page of Project Settings.


#include "TFCHUD.h"
#include "Engine/Canvas.h"

/* void ATFCHUD::DrawHUD() {
	Super::DrawHUD();
	
	if (crosshair_texture) {
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
		FVector2D CrossHairDrawPosition(Center.X - (crosshair_texture->GetSurfaceWidth() * 0.5f), Center.Y - (crosshair_texture->GetSurfaceHeight() * 0.5f));

		FCanvasTileItem TileItem(CrossHairDrawPosition, crosshair_texture->Resource, FLinearColor::Red);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}*/
