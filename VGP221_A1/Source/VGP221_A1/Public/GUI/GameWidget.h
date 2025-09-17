// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "GUI/ButtonWidget.h"
#include "GameWidget.generated.h"

/**
 *
 */

UCLASS()
class VGP221_A1_API UGameWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;

	/*UPROPERTY(meta = (BindWidget))
	UTextBlock* ScoreText;*/

	UPROPERTY(meta = (BindWidget))
	UTextBlock* BestTime;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* CurrentTime;

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* ButtonContainer;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UButtonWidget> ButtonWidgetPrefab;

	UFUNCTION()
	void SetHealthBar(float percentage);

	/*UFUNCTION()
	void SetScoreText(int amount);*/

	UFUNCTION()
	void SetTimeText(int amount);

	UFUNCTION()
	void SetBestText(int amount);

private:
	int UIScore;
};
