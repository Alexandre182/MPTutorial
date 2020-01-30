// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NMPTutorialGameMode.h"
#include "NMPTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "GameFramework/HUD.h"
#include "NMPGameState.h"
#include "SpawnVolume.h"
#include "Kismet/GameplayStatics.h"

ANMPTutorialGameMode::ANMPTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Set the type of HUD used in the game
	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUDClass(TEXT("/Game/Blueprints/NMPGameHUD_BP"));
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

	// Reset stats
	DeadPlayerCount = 0;

}

void ANMPTutorialGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	check(World);
	ANMPGameState* MyGameState = Cast<ANMPGameState>(GameState);
	check(MyGameState);

	// Reset stats
	DeadPlayerCount = 0;

	// Gather up all the spawn volumes and store them for later
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(World, ASpawnVolume::StaticClass(), FoundActors);
	for (auto Actor : FoundActors)
	{
		if (ASpawnVolume* TestSpawnVol = Cast<ASpawnVolume>(Actor))
		{
			// Add the volume to the array and ensure it only exists in the array once.
			SpawnVolumeActors.AddUnique(TestSpawnVol);
		}
	}

	// Transitioning the game to the playing state
	HandleNewState(EBatteryPlayState::EPlaying);

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
	ANMPGameState* MyGameState = Cast<ANMPGameState>(GameState);
	check(MyGameState);

	// Go through all the characters in the game
	for (FConstControllerIterator It = World->GetControllerIterator(); It; ++It)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(*It))
		{
			if (ANMPTutorialCharacter* BatteryCharacter = Cast<ANMPTutorialCharacter>(PlayerController->GetPawn()))
			{
				if (BatteryCharacter->GetCurrentPower() > MyGameState->PowerToWin)
				{
					MyGameState->WinningPlayerName = BatteryCharacter->GetName();
					HandleNewState(EBatteryPlayState::EWon);
				}
				else if (BatteryCharacter->GetCurrentPower() > 0)
				{
					BatteryCharacter->UpdatePower(-PowerDrainDelay * DecayRate * (BatteryCharacter->GetInitialPower()));
				}
				else
				{
					// Player died
					BatteryCharacter->OnPlayerDeath();

					//See if this is the last player to die, and end the game if so
					++DeadPlayerCount;

					if (DeadPlayerCount >= GetNumPlayers())
					{
						HandleNewState(EBatteryPlayState::EGameOver);
					}
				}
			}
		}
	}

}

void ANMPTutorialGameMode::HandleNewState(EBatteryPlayState NewState)
{
	// Access the world to get to the players
	UWorld* World = GetWorld();
	check(World);
	ANMPGameState* MyGameState = Cast<ANMPGameState>(GameState);
	check(MyGameState);

	// Only transition if this is actually a new state
	if (NewState != MyGameState->GetCurrentState())
	{
		// Update the state, so clients know about the transition
		MyGameState->SetCurrentState(NewState);

		switch (NewState)
		{
		case EBatteryPlayState::EPlaying:
			// Activate the spawn volumes
			for (ASpawnVolume* SpawnVol : SpawnVolumeActors)
			{
				SpawnVol->SetSpawningActive(true);
			}
			GetWorldTimerManager().SetTimer(PowerDrainTimer, this, &ANMPTutorialGameMode::DrainPowerOverTime, PowerDrainDelay, true);
			break;
		case EBatteryPlayState::EGameOver:
			// Deactivate the spawn volumes
			for (ASpawnVolume* SpawnVol : SpawnVolumeActors)
			{
				SpawnVol->SetSpawningActive(false);
			}
			GetWorldTimerManager().ClearTimer(PowerDrainTimer);
			break;
		case EBatteryPlayState::EWon:
			// Deactivate the spawn volumes
			for (ASpawnVolume* SpawnVol : SpawnVolumeActors)
			{
				SpawnVol->SetSpawningActive(false);
			}
			GetWorldTimerManager().ClearTimer(PowerDrainTimer);
			break;
		case EBatteryPlayState::EUnknown:
			break;
		default:
			break;
		}
	}
}
