// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "GUI/ButtonWidget.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_A1_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    UVerticalBox* ButtonContainer;

    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UButtonWidget> ButtonWidgetPrefab;



    /*UPROPERTY(meta = (BindWidget))
UVerticalBox* ButtonContainer;

UPROPERTY(EditAnywhere)
TSubclassOf<UButtonWidget> ButtonWidgetPrefab;*/
};
