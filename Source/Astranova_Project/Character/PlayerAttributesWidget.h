// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerAttributesWidget.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API UPlayerAttributesWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	void SetHealthPercent(float Percent);


	UPROPERTY(meta = (BindWidget))
	class UProgressBar* MainHealthBar;


	
};
