// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TD_TestingGameMode.h"
#include "TD_TestingPlayerController.h"
#include "TD_TestingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATD_TestingGameMode::ATD_TestingGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATD_TestingPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}