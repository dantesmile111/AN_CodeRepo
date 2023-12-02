

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTRANOVA_PROJECT_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAttributeComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool IsAlive();

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Actor Attributes")
	float Health;

	void RegenerateStamina(float DeltaTime);
protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, Category = "Actor Attributes")
	float HealthMax;

	UPROPERTY(EditAnywhere, Category = "Actor Attributes")
	float DashPower;

	UPROPERTY(EditAnywhere, Category = "Actor Attributes")
	float MaxDashPower;

	UPROPERTY(EditAnywhere, Category = "Actor Attributes")
	float DashPowerCost = 14.f;

	UPROPERTY(EditAnywhere, Category = "Actor Attributes")
	float StaminaRegenerate = 8.f;
public:
	void ReceiveDamage(float Damage);
	void UseStamina(float DashCost);
	float GetStaminaPercent();
	FORCEINLINE float GetDashCost() const { return DashPowerCost; }
	FORCEINLINE float GetStamina() const { return DashPower; }
	FORCEINLINE float GetHealthMax() const { return HealthMax; }
	FORCEINLINE float GetHealth() const { return Health; }
};
