// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NMPGameState.generated.h"

/**
 * 
 */
UCLASS()
class NMPTUTORIAL_API ANMPGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
    ANMPGameState();

    // Required network scaffolding
    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // Track the power level required to win the game
    UPROPERTY(Replicated, BlueprintReadOnly, Category = "Power")
    float PowerToWin;


};
