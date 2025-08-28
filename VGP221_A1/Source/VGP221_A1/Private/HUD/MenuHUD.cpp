// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/MenuHUD.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "GameFramework/PlayerController.h"

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	if (!MenuWidgetClass) return;

	/*MenuWidget = CreateWidget<UMainMenuWidget>(GetWorld(), MenuWidgetClass);
	if (!MenuWidget) return;*/

	MenuWidget = CreateWidget<UMainMenuWidget>(GetWorld(), MenuWidgetClass);
	if (MenuWidget)
	{
		MenuWidget->AddToViewport(100);
	}

	//MenuWidget->AddToViewport(100); 

	if (APlayerController* PC = GetOwningPlayerController())
	{
		PC->bShowMouseCursor = true;

		FInputModeUIOnly UIOnly;
		UIOnly.SetWidgetToFocus(MenuWidget->TakeWidget());
		UIOnly.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
		PC->SetInputMode(UIOnly);
	}
}