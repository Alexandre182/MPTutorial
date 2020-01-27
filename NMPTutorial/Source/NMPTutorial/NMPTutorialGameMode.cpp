// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NMPTutorialGameMode.h"
#include "NMPTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

ANMPTutorialGameMode::ANMPTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Base decay rate
	DecayRate = 0.02f;

	// Base value for how frequently to drain power
	PowerDrainDelay = 0.25f;

}

void ANMPTutorialGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &ANMPTutorialGameMode::DrainPowerOverTime, PowerDrainDelay, true);
}

float ANMPTutorialGameMode::GetDecayRate()
{
	return DecayRate;
}

void ANMPTutorialGameMode::DrainPowerOverTime()
{
	// Access the world to get to the players
	UWorld* World = GetWorld();
	check(World);

	// Go through all the characters in the game
	for (FConstControllerIterator It = World->GetControllerIterator(); It; ++It)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (ANMPTutorialCharacter* BatteryCharacter = Cast<ANMPTutorialCharacter>(PlayerController->GetPawn()))
			{
				if (BatteryCharacter->GetCurrentPower() > 0)
				{
					BatteryCharacter->UpdatePower(-PowerDrainDelay * DecayRate * (BatteryCharacter->GetInitialPower()));
				}
			}
		}
	}

}
