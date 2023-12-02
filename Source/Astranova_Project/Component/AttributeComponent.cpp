


#include "AttributeComponent.h"

UAttributeComponent::UAttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	Health = 100.f;
	HealthMax = 100.f;

}

void UAttributeComponent::RegenerateStamina(float DeltaTime)
{
	DashPower = FMath::Clamp(DashPower + StaminaRegenerate * DeltaTime, 0.f, MaxDashPower);
}

void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

bool UAttributeComponent::IsAlive()
{
	return Health > 0.f;
}
 
void UAttributeComponent::ReceiveDamage(float Damage)
{
	Health = FMath::Clamp(Health - Damage, 0.f, HealthMax);
}

void UAttributeComponent::UseStamina(float DashCost)
{
	DashPower = FMath::Clamp(DashPower - DashCost, 0.f, MaxDashPower);
}

float UAttributeComponent::GetStaminaPercent()
{
	return DashPower / MaxDashPower;
}


