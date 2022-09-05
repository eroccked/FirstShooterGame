// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstShooterGameGameMode.h"
#include "FirstShooterGameHUD.h"
#include "FirstShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstShooterGameGameMode::AFirstShooterGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirstShooterGameHUD::StaticClass();
}
