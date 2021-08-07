// Copyright Epic Games, Inc. All Rights Reserved.

#include "BigRPGGameMode.h"
#include "BigRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABigRPGGameMode::ABigRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/BigRPGCharacter_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
