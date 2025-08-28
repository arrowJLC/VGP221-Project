// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode/MenuGameMode.h"
#include "HUD/MenuHUD.h"

AMenuGameMode::AMenuGameMode()
{
	HUDClass = AMenuHUD::StaticClass();

	DefaultPawnClass = nullptr;

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is MainMenu!"));
}
