// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class NMPTUTORIAL_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	APickup(); 

	// Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Returns wheter or not the pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	// Allows other classes to safely change the pickup's activation state
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);

	// Function to call when the pickup is collected
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
	void WasCollected();
	virtual void WasCollected_Implementation();


	// Server side handling of being picked up
	UFUNCTION(BlueprintAuthorityOnly, Category = "Pickup")
	virtual void PickedUpby(APawn* Pawn);
protected:
	//True when the pickup can be used, false when the pickups is desativated
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	// This is called whenever BIsactive is uptade
	UFUNCTION()
	virtual void OnRep_IsActive();

	// The Pawn who picked up the pickup
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup")
	APawn* PickupInstigator;

private:
	// Client-side handling of being picked up
	UFUNCTION(NetMulticast, Unreliable)
	void ClientOnPickedUpBy(APawn* Pawn);

};
