// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode/FPSProjectMainMenuBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"

AFPSProjectMainMenuBase::AFPSProjectMainMenuBase()
{
    DefaultPawnClass = nullptr;
}

void AFPSProjectMainMenuBase::BeginPlay()
{
    Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("MainMenu BeginPlay running!"));
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSMainMenu!"));
    


    if (MainMenuWidgetClass)
    {
        MainMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass);
        if (MainMenuWidgetInstance)
        {
            UE_LOG(LogTemp, Warning, TEXT("MainMenuWidgetInstance created!"));
            MainMenuWidgetInstance->AddToViewport();
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to create MainMenuWidgetInstance!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MainMenuWidgetClass is NULL! Did you set it in constructor or blueprint?"));
    }
}


//void AFPSProjectMainMenuBase::BeginPlay()
//{
//    Super::BeginPlay();
//    UE_LOG(LogTemp, Warning, TEXT("MainMenu BeginPlay running!"));
//    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSMainMenu!"));
//
//    // Check if a Main Menu Widget Class is set
//    if (MainMenuWidgetClass)
//    {
//        // Create an instance of the Main Menu Widget
//        MainMenuWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass);
//
//
//        // Add the widget to the viewport
//        if (MainMenuWidgetInstance)
//        {
//            MainMenuWidgetInstance->AddToViewport();
//
//            // Set Input Mode to UI Only and show mouse cursor
//            APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
//            if (PlayerController)
//            {
//                FInputModeUIOnly InputMode;
//                InputMode.SetWidgetToFocus(MainMenuWidgetInstance->TakeWidget());
//                InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
//                PlayerController->SetInputMode(InputMode);
//                PlayerController->bShowMouseCursor = true;
//            }
//        }
//    }
//}