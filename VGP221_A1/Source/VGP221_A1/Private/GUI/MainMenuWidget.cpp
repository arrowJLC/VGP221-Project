// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "GameFramework/PlayerController.h"

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (StartButton)  StartButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartClicked);
	if (SettingsButton) SettingsButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnSettingsClicked);
	if (QuitButton)   QuitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
}

void UMainMenuWidget::OnStartClicked()
{
	const FName GameplayMap = FName(TEXT("GameMap"));

	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->bShowMouseCursor = false;
		FInputModeGameOnly Mode;
		PC->SetInputMode(Mode);
	}

	UGameplayStatics::OpenLevel(this, GameplayMap);
}

void UMainMenuWidget::OnSettingsClicked()
{

}

void UMainMenuWidget::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(this, GetOwningPlayer(), EQuitPreference::Quit, false);
}
