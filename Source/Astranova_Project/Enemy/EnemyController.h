// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API AEnemyController : public AAIController
{
	GENERATED_BODY()

	//the constructor of enemy controller
	AEnemyController();

	// when controller is possessed by enemy (begin play) 
	virtual void OnPossess(APawn* InPawn) override;
	


private:

	// Reference to the enemy possessed
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class AEnemy* Enemy;

	// the behavior tree component attached to Controller
	UPROPERTY(BlueprintReadWrite, Category = "AI Behavior", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTreeComponent* BehaviorTreeComponent;

	// the blackboard component attached to Controller
	UPROPERTY(BlueprintReadWrite, Category = "AI Behavior", meta = (AllowPrivateAccess = "true"))
	class UBlackboardComponent* BlackboardComponent;

	// the perception component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI Behavior", meta = (AllowPrivateAccess = "true"))
	class UAIPerceptionComponent* Perception;

	

public:
	////////FUNCITONS

	UFUNCTION(BlueprintCallable)
	void ChangeCurrentState(EEnemyState NewState);

	UFUNCTION(BlueprintCallable)
	EEnemyState GetCurrentState();



public:
	/////////// Variables

	
	EEnemyState CurrentState; 





public:

	///////////////////// PUBLIC GETTERS

	//public getter for Blackboard Comp
	
	FORCEINLINE UBlackboardComponent* GetBlackboardComponent() { return BlackboardComponent; }
	FORCEINLINE UBehaviorTreeComponent* GetBehaviorTreeComponent() { return BehaviorTreeComponent; }


	///////////////////// PUBLIC SETTERS






};


