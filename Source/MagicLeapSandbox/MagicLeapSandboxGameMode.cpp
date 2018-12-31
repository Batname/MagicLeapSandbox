// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MagicLeapSandboxGameMode.h"
#include "MagicLeapSandboxPawn.h"

AMagicLeapSandboxGameMode::AMagicLeapSandboxGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AMagicLeapSandboxPawn::StaticClass();
}
