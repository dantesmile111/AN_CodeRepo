// Fill out your copyright notice in the Description page of Project Settings.


#include "Astranova_Project/Character/PlayerAttributesWidget.h"

#include "Components/ProgressBar.h"




void UPlayerAttributesWidget::SetHealthPercent(float Percent)
{


	if (MainHealthBar)
	{
		MainHealthBar->SetPercent(Percent);
	}



}
