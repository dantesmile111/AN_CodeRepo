// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Astranova_Project/Character/CharacterTypes.h"
#include "EnemyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	


protected:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;



private:
	/*UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsPatrolling;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	class AEnemy* Enemy;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character", meta = (AllowPrivateAccess = "true"))
	class AEnemyController* EnemyController;

	



public:

	FORCEINLINE AEnemyController* GetEnemyController() const { return EnemyController; }

};
