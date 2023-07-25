// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerFunctions.h"

// Sets default values for this component's properties
UPlayerFunctions::UPlayerFunctions()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerFunctions::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UPlayerFunctions::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// ...
}

void UPlayerFunctions::SlamCollision()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Milk"));
}


