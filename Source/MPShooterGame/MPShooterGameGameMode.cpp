// Copyright Epic Games, Inc. All Rights Reserved.

#include "MPShooterGameGameMode.h"
#include "MPShooterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMPShooterGameGameMode::AMPShooterGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
