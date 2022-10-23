// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArkanoidCharacter.h"
#include "Components/InputComponent.h"

AArkanoidCharacter::AArkanoidCharacter()
{
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("MeshComponent");
	RootComponent = MeshComponent;
}

void AArkanoidCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("VerticalMovement", this, &AArkanoidCharacter::VerticalMovement);
}

void AArkanoidCharacter::VerticalMovement(float Value)
{
	const FVector TargetLocation = GetActorLocation() + FVector(0.f, 1.f, 0.f) * Value * MovementSpeed;
	SetActorLocation(TargetLocation);
}
