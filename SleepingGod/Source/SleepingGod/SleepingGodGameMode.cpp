// Copyright Epic Games, Inc. All Rights Reserved.

#include "SleepingGodGameMode.h"
#include "SleepingGodCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASleepingGodGameMode::ASleepingGodGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
