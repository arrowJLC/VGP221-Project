// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Logging/StructuredLog.h"
#include "FPSProjectGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class VGP221_A1_API AFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:

    AFPSProjectGameModeBase();

    virtual void StartPlay() override;
    virtual void Tick(float DeltaTime) override;

   /* UPROPERTY(BlueprintReadOnly)
    int32 PlayerScore;

    UFUNCTION()
    void AddScore(int32 Amount);*/

    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UGameWidget> GameWidgetClass;

    UPROPERTY(BlueprintReadOnly, Category = "UI")
    UGameWidget* GameHUD;


    UPROPERTY(BlueprintReadOnly, Category = "Timer")
    float CurrentTime;

    UPROPERTY(BlueprintReadOnly, Category = "Timer")
    float BestTime;

    UPROPERTY(BlueprintReadOnly, Category = "Timer")
    bool bTimerActive;

    // Control functions
    UFUNCTION(BlueprintCallable, Category = "Timer")
    void StartTimer();

    UFUNCTION(BlueprintCallable, Category = "Timer")
    void StopTimer();

    UFUNCTION(BlueprintCallable, Category = "Timer")
    void ResetTimer();

    // Useful text helpers for binding (returns FText ready for text blocks)
    UFUNCTION(BlueprintPure, Category = "Timer")
    FText GetCurrentTimeText() const;

    UFUNCTION(BlueprintPure, Category = "Timer")
    FText GetBestTimeText() const;

    UFUNCTION(BlueprintImplementableEvent, Category = "Timer")
    void OnTimerUpdated();
 
};
