// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArkanoidCameraActor.generated.h"

UCLASS()
class AArkanoidCameraActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	class UCameraComponent* CameraComponent;
	
public:	
	// Sets default values for this actor's properties
	AArkanoidCameraActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
