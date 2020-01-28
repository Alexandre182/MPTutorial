// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NMPTutorialGameMode.h"
#include "NMPTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "GameFramework/HUD.h"
#include "NMPGameState.h"

ANMPTutorialGameMode::ANMPTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Set the type of HUD used in the game
	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClass(TEXT("/Game/Blueprints/NMPGameHUD_BP.NMPGameHUD_BP"));
	if (PlayerHUDClass.Class != NULL)
	{
		HUDClass = PlayerHUDClass.Class;
	}

	// Set the type of GameState used in the game
	GameStateClass = ANMPGameState::StaticClass();

	// Base decay rate
	DecayRate = 0.02f;

	// Base value for how frequently to drain power
	PowerDrainDelay = 0.25f;

	// Set base value for the power multiplier
	PowerToWinMultiplier = 1.25f;

}

void ANMPTutorialGameMode::BeginPlay()
{
	GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &ANMPTutorialGameMode::DrainPowerOverTime, PowerDrainDelay, true);

	UWorld* World = GetWorld();
	check(World);
	ANMPGameState* MyGameState = Cast<ANMPGameState>(GameState);
	check(MyGameState);

	// Go through all the characters in the game
	for (FConstControllerIterator It = World->GetControllerIterator(); It; ++It)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (ANMPTutorialCharacter* BatteryCharacter = Cast<ANMPTutorialCharacter>(PlayerController->GetPawn()))
			{
				MyGameState->PowerToWin = BatteryCharacter->GetInitialPower() * PowerToWinMultiplier;
				break;
			}
		}
	}
}

float ANMPTutorialGameMode::GetDecayRate()
{
	return DecayRate;
}

float ANMPTutorialGameMode::GetPowerToWinMultiplier()
{
	return PowerToWinMultiplier;
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
