// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightingToolGameMode.h"
#include "FightingToolHUD.h"
#include "FightingToolCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFightingToolGameMode::AFightingToolGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFightingToolHUD::StaticClass();
}
