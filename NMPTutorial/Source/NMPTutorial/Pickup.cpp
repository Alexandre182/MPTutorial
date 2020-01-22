// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "Engine/StaticMesh.h"
#include "Net/UnrealNetwork.h"

APickup::APickup()
{
	// tell UE4 to replicate this Actor
	bReplicates = true;

	// pickups do not need to tick every frame
	PrimaryActorTick.bCanEverTick = false;

	// StaticMehActor disables overlap events by default, which we need to re-enable
	GetStaticMeshComponent()->SetGenerateOverlapEvents(true);

	if (Role == ROLE_Authority)
	{
		bIsActive = true;
	}
}

void APickup::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);
}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState)
{
	if (Role == ROLE_Authority)
	{
		bIsActive = NewPickupState;
	}
}

void APickup::OnRep_IsActive()
{
	
}

void APickup::WasCollected_Implementation()
{
	// Log a debug message
	UE_LOG(LogClass, Log, TEXT("APickup::WASCollected_implementation %s"), *GetName());
}

void APickup::PickedUpby(APawn* Pawn)
{
	if (Role == ROLE_Authority)
	{
		// Store the pawn who picked up the pickup
		PickupInstigator = Pawn;
		// Notify clients of the picked up action
		ClientOnPickedUpBy(Pawn);
	}
}

void APickup::ClientOnPickedUpBy_Implementation(APawn* Pawn)
{
	// Store the pawn who picked up the pickup (client)
	PickupInstigator = Pawn;
	// Fire the Blueprint Native Event, which itself cannot be replicated
	WasCollected();


}