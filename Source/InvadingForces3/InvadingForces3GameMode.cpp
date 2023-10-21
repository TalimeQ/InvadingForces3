// Copyright Epic Games, Inc. All Rights Reserved.

#include "InvadingForces3GameMode.h"
#include "InvadingForces3PlayerController.h"
#include "InvadingForces3Character.h"
#include "UObject/ConstructorHelpers.h"

AInvadingForces3GameMode::AInvadingForces3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AInvadingForces3PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}