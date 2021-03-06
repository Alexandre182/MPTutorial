// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NMPGameState.h"
#include "NMPTutorialGameMode.generated.h"

UCLASS(minimalapi)
class ANMPTutorialGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	ANMPTutorialGameMode();

	// Start the power drain timer
	virtual void BeginPlay() override;

	// Get the current Rate of decay (% of InitialPower per sec)
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetDecayRate();

	// Access the power level required to win the game
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWinMultiplier();

protected:

	// How many times per second to update characters power and check game rules
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Power")
	float PowerDrainDelay;
	
	// Access the timer for recurring power draining
	FTimerHandle PowerDrainTimer;


	// The rate at which characters lose power (% of InitialPower per second)
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float DecayRate;

	// The power level needed to win the game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float PowerToWinMultiplier;

	// Track the number of players who have run out of energy and been eliminated from the game.
	int32 DeadPlayerCount;

private:

	// Drains power from characters and update gameplay
	void DrainPowerOverTime();

	// Track all the spawn volumes in the level
	TArray<class ASpawnVolume*> SpawnVolumeActors;

	// Handle any function calls for when the game transitions between states
	void HandleNewState(EBatteryPlayState NewState);

};



