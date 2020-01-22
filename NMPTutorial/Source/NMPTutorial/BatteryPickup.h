// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class NMPTUTORIAL_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Set default values for instances of this class
	ABatteryPickup();

	// Required network setup
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//// Override the base class version to handle being picked up
	//void WasCollected_Implementation() override;

	// Server side handling of being picked up by the child class
	void PickedUpby(APawn* Pawn) override;

	//Public method to access the battery's power level
	float GetPower();

protected:
	// Set the amount of power the battery holds
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BatteryPower;

};
