// Copyright Epic Games, Inc. All Rights Reserved.

#include "EldtrichSteelisGameMode.h"
#include "EldtrichSteelisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEldtrichSteelisGameMode::AEldtrichSteelisGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
