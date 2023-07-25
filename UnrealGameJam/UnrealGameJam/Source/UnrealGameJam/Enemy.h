// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class UNREALGAMEJAM_API Enemy
{
public:
	Enemy();
	~Enemy();
	void Tick();

	bool playerDetected;
	bool CanAttackPlayer;

	UPROPERTY(BlueprintReadWrite)
	bool CanDealDamage;

	class AEnemyActor_AICharacter* PlayerREF;

	UPROPERTY(EditAnywhere)
	class USphereComponent* PlayerCollDetection;

	UPROPERTY(EditAnywhere)
	class USphereComponent* PlayerAtackCollDetection;

	UPROPERTY(EditAnywhere)
	class USphereComponent* DamageCol;
};
