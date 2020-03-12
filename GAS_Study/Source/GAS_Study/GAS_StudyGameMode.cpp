// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GAS_StudyGameMode.h"
#include "GAS_StudyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAS_StudyGameMode::AGAS_StudyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
