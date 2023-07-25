// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"

#include <NavigationSystem.h>
#include "GameFramework/Controller.h"

// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	//RunBehaviourTree(BehaviorTree);
	
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyActor::MoveToRandomLocation()
{
	if(NavArea)
	{
	
	}
}

void AEnemyActor::MoveToPlayer()
{
	
}

