// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/MenuWidget.h"

void UMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UE_LOG(LogTemp, Warning, TEXT("MenuWidget NativeConstruct called!"));


    for (int i = 0; i < 4; i++)
    {
        UUserWidget* Widget = CreateWidget(this, ButtonWidgetPrefab);
        ButtonContainer->AddChildToVerticalBox(Widget);

        UButtonWidget* Button = Cast<UButtonWidget>(Widget);
        Button->SetText(i);
    }

    //if (ButtonContainer && ButtonWidgetPrefab)
    //{
    //    //for (int i = 0; i < 4; i++)
    //    //{
    //    //    UButtonWidget* Button = CreateWidget<UButtonWidget>(GetWorld(), ButtonWidgetPrefab);
    //    //    if (Button)
    //    //    {
    //    //        ButtonContainer->AddChildToVerticalBox(Button);
    //    //        Button->SetText(i);

    //    //        // Example: Make Button 0 load a level
    //    //        if (i == 0)
    //    //        {
    //    //            Button->OnButtonClick(); // Or bind custom logic
    //    //        }
    //    //    }
    //    //}
    //    
    //}
}


//if (i == 0) // Button One
//{
//	Button->SceneNameToLoad = FName("GameSceneName"); // Replace with your actual level name
//}