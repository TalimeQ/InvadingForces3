// Copyright Epic Games, Inc. All Rights Reserved.

#include "InvadingForces3GameMode.h"
#include "InvadingForces3PlayerController.h"
#include "InvadingForces3Character.h"
#include "UObject/ConstructorHelpers.h"

AInvadingForces3GameMode::AInvadingForces3GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AInvadingForces3PlayerController::StaticClass();
}

void AInvadingForces3GameMode::BeginPlay()
{
	Super::BeginPlay();
}
