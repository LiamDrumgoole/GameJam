// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealGameJamGameMode.h"
#include "UnrealGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealGameJamGameMode::AUnrealGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
