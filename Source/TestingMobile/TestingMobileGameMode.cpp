// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingMobileGameMode.h"
#include "TestingMobileCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingMobileGameMode::ATestingMobileGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
