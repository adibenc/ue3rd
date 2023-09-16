// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue3rdGameMode.h"
#include "ue3rdCharacter.h"
#include "UObject/ConstructorHelpers.h"

// flag: logs
#include "Logging/LogMacros.h"
#include "Engine/Engine.h"

Aue3rdGameMode::Aue3rdGameMode()
{
	// flag: logs
	//UE_LOG(LogWorld, Warning, TEXT("gamemode :: x4164 was here!! using unreal for the first time"));

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// https://unrealcommunity.wiki/logging-lgpidy6i#printing-messages-to-screen
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("gamemode :: This message will appear on the screen!"));
}

void Aue3rdGameMode::BeginPlay()
{
	// Display a message when the game starts
	FString Message = TEXT("game mode :: beginplay :: Game started!");
	FColor Color = FColor::Green;
	float DisplayTime = 5.0f;
	int32 Key = -1;

	GEngine->AddOnScreenDebugMessage(Key, DisplayTime, Color, Message);

	// Your game logic here
}
