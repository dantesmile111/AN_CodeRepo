// Fill out your copyright notice in the Description page of Project Settings.


#include "Astranova_Project/Enemy/EnemyAnimInstance.h"
#include "Astranova_Project/Enemy/Enemy.h"
#include "Astranova_Project/Enemy/EnemyController.h"
#include "EnemyAnimInstance.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();



}



void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);


	if (Enemy == nullptr)
	{

		Enemy = Cast<AEnemy>(TryGetPawnOwner());

	}



	if (Enemy)

	{

		FVector Velocity(Enemy->GetVelocity());
		Velocity.Z = 0.f;
		

	}

}
