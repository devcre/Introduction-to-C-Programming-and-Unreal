// Copyright 2022. KyoungChan Cho. All Rights Reserved.


#include "PrintFavoriteGames.h"

// Sets default values
APrintFavoriteGames::APrintFavoriteGames()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APrintFavoriteGames::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Fallout4"));
	UE_LOG(LogTemp, Warning, TEXT("Witcher3"));
	UE_LOG(LogTemp, Warning, TEXT("StarCraft"));
}

// Called every frame
void APrintFavoriteGames::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

