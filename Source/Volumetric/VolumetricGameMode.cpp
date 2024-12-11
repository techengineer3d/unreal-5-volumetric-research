// Copyright Epic Games, Inc. All Rights Reserved.

#include "VolumetricGameMode.h"
#include "VolumetricCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVolumetricGameMode::AVolumetricGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
