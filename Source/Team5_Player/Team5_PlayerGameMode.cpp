// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team5_PlayerGameMode.h"
#include "Team5_PlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeam5_PlayerGameMode::ATeam5_PlayerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
