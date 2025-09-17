// Fill out your copyright notice in the Description page of Project Settings.


#include "Gamemode/FPSProjectGameModeBase.h"
#include "GUI/GameWidget.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Components/TextRenderComponent.h"

#include "GameSace/SaveGameTimer.h"

AFPSProjectGameModeBase::AFPSProjectGameModeBase()
{
    //PlayerScore = 0;

    PrimaryActorTick.bCanEverTick = true;
    CurrentTime = 0.f;
    BestTime = 0.f;
    bTimerActive = false;
}

void AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();

    if (UGameplayStatics::DoesSaveGameExist(TEXT("BestTimeSlot"), 0))
    {
        USaveGameTimer* LoadedGame = Cast<  USaveGameTimer>(
            UGameplayStatics::LoadGameFromSlot(TEXT("BestTimeSlot"), 0));

        if (LoadedGame)
        {
            BestTime = LoadedGame->SavedBestTime;
        }
    }


    ResetTimer();
    StartTimer();

    check(GEngine != nullptr);

    // Display a debug message for five seconds. 
    // The -1 "Key" value argument prevents the message from being updated or refreshed.

    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameModeBase!"));
   
    if (GameWidgetClass)
    {
        GameHUD = CreateWidget<UGameWidget>(GetWorld(), GameWidgetClass);
        if (GameHUD)
        {
            GameHUD->AddToViewport();
            //GameHUD->SetScoreText(0); // initialize
        }
    }
 /*   if (GameWidgetClass)
    {
        GameHUD = CreateWidget<UGameWidget>(GetWorld(), GameWidgetClass);
        if (GameHUD)
        {
            GameHUD->AddToViewport();
            GameHUD->SetScoreText(PlayerScore);
        }
    }*/
}

void AFPSProjectGameModeBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (bTimerActive)
    {
        CurrentTime += DeltaTime;
        OnTimerUpdated();
    }
}
void AFPSProjectGameModeBase::StartTimer()
{
    bTimerActive = true;
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Timer Started"));
}

void AFPSProjectGameModeBase::StopTimer()
{
    if (!bTimerActive) return;
    bTimerActive = false;
    if (BestTime <= 0.f || CurrentTime < BestTime)
    {
        BestTime = CurrentTime;

        USaveGameTimer* SaveGameInstance = Cast<USaveGameTimer>(
            UGameplayStatics::CreateSaveGameObject(USaveGameTimer::StaticClass()));

        SaveGameInstance->SavedBestTime = BestTime;

        UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("BestTimeSlot"), 0);
    }
}


void AFPSProjectGameModeBase::ResetTimer()
{
    CurrentTime = 0.f;
}

FText AFPSProjectGameModeBase::GetCurrentTimeText() const
{
    int32 Minutes = FMath::FloorToInt(CurrentTime / 60.f);
    int32 Seconds = FMath::FloorToInt(FMath::Fmod(CurrentTime, 60.f));
    int32 Centis = FMath::FloorToInt((CurrentTime - FMath::FloorToInt(CurrentTime)) * 100.f);
    return FText::FromString(FString::Printf(TEXT("%02d:%02d.%02d"), Minutes, Seconds, Centis));
}

FText AFPSProjectGameModeBase::GetBestTimeText() const
{
    if (BestTime <= 0.f) return FText::FromString(TEXT("--:--.--"));
    int32 Minutes = FMath::FloorToInt(BestTime / 60.f);
    int32 Seconds = FMath::FloorToInt(FMath::Fmod(BestTime, 60.f));
    int32 Centis = FMath::FloorToInt((BestTime - FMath::FloorToInt(BestTime)) * 100.f);
    return FText::FromString(FString::Printf(TEXT("Best %02d:%02d.%02d"), Minutes, Seconds, Centis));
}


//void AFPSProjectGameModeBase::AddScore(int32 Amount)
//{
//    PlayerScore += Amount;
//
//    if (GameHUD)
//    {
//        //GameHUD->SetScoreText(1);
//    }
//   /* if (GameHUD)
//    {
//        GameHUD->SetScoreText(PlayerScore);
//    }*/
//}