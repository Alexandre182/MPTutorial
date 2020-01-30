// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NMPGameState.generated.h"

UENUM(BlueprintType)
enum EBatteryPlayState
{
    EPlaying,
    EGameOver,
    EWon,
    EUnknown
};
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

    // Returns the current state of gameplay
    UFUNCTION(BlueprintPure, Category = "Power")
    EBatteryPlayState GetCurrentState() const;

    // Transition the game to a new play state.
    void SetCurrentState(EBatteryPlayState NewState);
    
    // Rep Notify fired on clients to allow for client-side changes based on changes in gameplay state.
    UFUNCTION()
    void OnRep_CurrentState();

    // The name of the player who won the game
    UPROPERTY(Replicated, BlueprintReadWrite, Category = "Power")
    FString WinningPlayerName;

private:
    // Track the current playing state
    UPROPERTY(ReplicatedUsing = OnRep_CurrentState)
    TEnumAsByte<enum EBatteryPlayState> CurrentState;

};
