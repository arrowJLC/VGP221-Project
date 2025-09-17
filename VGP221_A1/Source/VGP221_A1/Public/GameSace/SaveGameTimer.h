// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameTimer.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_A1_API USaveGameTimer : public USaveGame
{
	GENERATED_BODY()
	

public:
	UPROPERTY(BlueprintReadWrite, Category = "SaveData")
	float SavedBestTime;


	USaveGameTimer();
};
