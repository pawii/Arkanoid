// Fill out your copyright notice in the Description page of Project Settings.


#include "ArkanoidCameraActor.h"

#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AArkanoidCameraActor::AArkanoidCameraActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AArkanoidCameraActor::BeginPlay()
{
	Super::BeginPlay();

	// TODO: implement GameStartup class, which will contain this logic
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	PlayerController->SetViewTarget(this);
}

// Called every frame
void AArkanoidCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

