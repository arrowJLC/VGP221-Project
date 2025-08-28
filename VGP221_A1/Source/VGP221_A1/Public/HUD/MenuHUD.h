// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GUI/MainMenuWidget.h"
#include "MenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_A1_API AMenuHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UMainMenuWidget> MenuWidgetClass;

private:
	UPROPERTY() UMainMenuWidget* MenuWidget = nullptr;
};
	
