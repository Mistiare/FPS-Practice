// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FightingToolHUD.generated.h"

UCLASS()
class AFightingToolHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFightingToolHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

