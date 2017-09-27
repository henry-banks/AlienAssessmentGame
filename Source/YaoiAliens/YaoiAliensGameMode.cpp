// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "YaoiAliens.h"
#include "YaoiAliensGameMode.h"
#include "YaoiAliensCharacter.h"

AYaoiAliensGameMode::AYaoiAliensGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
