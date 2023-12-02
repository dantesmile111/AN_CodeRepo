// Fill out your copyright notice in the Description page of Project Settings.


#include "Astranova_Project/Enemy/EnemyController.h"


#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Astranova_Project/Enemy/Enemy.h"
#include "Perception/AIPerceptionComponent.h"




AEnemyController::AEnemyController()
{

	BlackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
	check(BlackboardComponent);


	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree"));
	check(BehaviorTreeComponent);

	Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));

	check(Perception);


}



void AEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//checking if the possessed pawn is valid
	if (InPawn == nullptr) { return;}

	//the pawn that is possessed is casted to our Enemy Class 
	Enemy = Cast<AEnemy>(InPawn);

	if (Enemy)
	{
		if (Enemy->GetBehaviorTree())
		{
			UBehaviorTree* BehaviorTree = Enemy->GetBehaviorTree();
			BlackboardComponent->InitializeBlackboard(*(BehaviorTree->BlackboardAsset));

		}

		

	}



}

void AEnemyController::ChangeCurrentState(EEnemyState NewState)
{

	GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), (uint8)NewState);

}

EEnemyState  AEnemyController::GetCurrentState()
{

	uint8 State = GetBlackboardComponent()->GetValueAsEnum(TEXT("CurrentState"));

	EEnemyState NewState = static_cast<EEnemyState>(State);
	 
	return NewState;
}

