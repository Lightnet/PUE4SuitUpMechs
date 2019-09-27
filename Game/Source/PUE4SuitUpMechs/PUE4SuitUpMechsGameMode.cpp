// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "PUE4SuitUpMechsGameMode.h"
#include "UObject/ConstructorHelpers.h"

APUE4SuitUpMechsGameMode::APUE4SuitUpMechsGameMode()
{
	// Set default pawn class to our Blueprint character.
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/StarterProject/Characters/PlayerCharacter_BP"));
	static ConstructorHelpers::FClassFinder<APawn> SimulatedPawnBPClass(TEXT("/Game/StarterProject/Characters/SimulatedPlayers/SimulatedPlayerCharacter_BP"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	if (SimulatedPawnBPClass.Class != NULL)
	{
		SimulatedPawnClass = SimulatedPawnBPClass.Class;
	}
	
	// Seamless Travel is not currently supported in SpatialOS [UNR-897]
	bUseSeamlessTravel = false;
}
