// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NMPTutorialGameMode.h"
#include "NMPTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANMPTutorialGameMode::ANMPTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
