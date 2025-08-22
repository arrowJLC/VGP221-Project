// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProjectMainMenuBase.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_A1_API AFPSProjectMainMenuBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
    AFPSProjectMainMenuBase();

    virtual void BeginPlay() override;



protected:
    // Reference to the Main Menu Widget Blueprint
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UUserWidget> MainMenuWidgetClass;

    // Instance of the Main Menu Widget
    UPROPERTY()
    UUserWidget* MainMenuWidgetInstance;
};
