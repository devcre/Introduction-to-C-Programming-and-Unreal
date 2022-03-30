// Fill out your copyright notice in the Description page of Project Settings.


#include "ConvertTemperatures.h"

// Sets default values
AConvertTemperatures::AConvertTemperatures()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AConvertTemperatures::BeginPlay()
{
	Super::BeginPlay();

	int OriginalFahrenheit{ 0 };
	int Celsius;
	int Fahrenheit;

	Celsius = (OriginalFahrenheit - 32) * 5 / 9;
	Fahrenheit = (Celsius * 9 / 5) + 32;
	
	UE_LOG(LogTemp, Warning, TEXT("Original Fahrenheit: %d"), OriginalFahrenheit);
	UE_LOG(LogTemp, Warning, TEXT("Converted Celsius: %d"), Celsius);
	UE_LOG(LogTemp, Warning, TEXT("Reconverted Fahrenheit: %d"), Fahrenheit);

	// Assign 32 as original temperature in Fahrenheit
	OriginalFahrenheit = 32;

	Celsius = (OriginalFahrenheit - 32) * 5 / 9;
	Fahrenheit = (Celsius * 9 / 5) + 32;

	UE_LOG(LogTemp, Warning, TEXT("Original Fahrenheit: %d"), OriginalFahrenheit);
	UE_LOG(LogTemp, Warning, TEXT("Converted Celsius: %d"), Celsius);
	UE_LOG(LogTemp, Warning, TEXT("Reconverted Fahrenheit: %d"), Fahrenheit);

	// Assign 212 as original temperature in Fahrenheit
	OriginalFahrenheit = 212;

	Celsius = (OriginalFahrenheit - 32) * 5 / 9;
	Fahrenheit = (Celsius * 9 / 5) + 32;

	UE_LOG(LogTemp, Warning, TEXT("Original Fahrenheit: %d"), OriginalFahrenheit);
	UE_LOG(LogTemp, Warning, TEXT("Converted Celsius: %d"), Celsius);
	UE_LOG(LogTemp, Warning, TEXT("Reconverted Fahrenheit: %d"), Fahrenheit);


	float fOriginalFahrenheit;
	float fCelsius;
	float fFahrenheit;

	fOriginalFahrenheit = 0;
	fCelsius = (fOriginalFahrenheit - 32) * 5 / 9;
	fFahrenheit = (fCelsius * 9 / 5) + 32;

	UE_LOG(LogTemp, Warning, TEXT("float Original Fahrenheit: %f"), fOriginalFahrenheit);
	UE_LOG(LogTemp, Warning, TEXT("Converted Celsius: %f"), fCelsius);
	UE_LOG(LogTemp, Warning, TEXT("Reconverted Fahrenheit: %f"), fFahrenheit);
}

// Called every frame
void AConvertTemperatures::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

