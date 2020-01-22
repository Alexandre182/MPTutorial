// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Engine/StaticMesh.h"
#include "Net/UnrealNetwork.h"

ABatteryPickup::ABatteryPickup()
{
	//Keep movement synced from server to clients
	bReplicateMovement = true;

	// This pickup is physics enabled and should move
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}

//void ABatteryPickup::WasCollected_Implementation()
//{
//	// Allow parent class to handle this First
//	Super::WasCollected_Implementation();
//	// Destroy the battery
//	Destroy();
//}

void ABatteryPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABatteryPickup, BatteryPower);


}

void ABatteryPickup::PickedUpby(APawn* Pawn)
{
	Super::PickedUpby(Pawn);

	if (Role == ROLE_Authority)
	{
		// Give clients time to play, vfx, etc... Before destroying the battery
		SetLifeSpan(2.0f);
	}
	
	// Set a base value for the power
	BatteryPower = 200.0f;
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}
