// Fill out your copyright notice in the Description page of Project Settings.
#include "MyActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void TestUELogExamples()
{
	UE_LOG(LogTemp, Log, TEXT("Game has started. Player has joined the game."));
	
	FString PlayerName = TEXT("Player1");
	UE_LOG(LogTemp, Display, TEXT("Welcome, %s! Enjoy the game."));

	int PlayerHealth = 50;
	if (PlayerHealth < 100)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player health is below maximum: %d"), PlayerHealth);
	}

	int AmmoCount = 0;
	if (AmmoCount == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("No ammo left! Player cannot shoot"));
	}

	int Score = 150;
	int TimeLeft = 120;
	UE_LOG(LogTemp, Log, TEXT("Score: %d, Time Left: %d seconds."), Score, TimeLeft);

	float PlayerSpeed = 325.5f;
	UE_LOG(LogTemp, Display, TEXT("Player speed: %.2f units/sec"), PlayerSpeed);

	bool bIsPaused = true;
	if (bIsPaused)
	{
		UE_LOG(LogTemp, Warning, TEXT("Game is currently paused."));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Game is running normally."));
	}

	UE_LOG(LogTemp, Display, TEXT("This message is for developers to debug the game state."));
}


// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	TestUELogExamples();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
