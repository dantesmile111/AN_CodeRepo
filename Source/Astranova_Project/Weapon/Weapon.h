

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class ASTRANOVA_PROJECT_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	

	AWeapon();
	virtual void Tick(float DeltaTime) override;
	void AttachMeshToSocket(USceneComponent* InParant, const FName& SocketName, AActor* NewOwner, APawn* NewInstigator);
	void AttackWeapon(USceneComponent* InParant, const FName& SocketName);
	void DisableSphereCollision();


	TArray<AActor*> IgnoreActors;
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void ExecuetGetHit(FHitResult& BoxHit);
private:
	bool ActorIsSameType(AActor* OtherActor);

	void BoxTrace(FHitResult& BoxHit);

	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	float Damage;

	FVector BoxTraceExtent = FVector(5.f);

	// Amount of Damage caused by a Weapon.
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	bool bShowBoxDebug = false;

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereComponent;

	void DisableSphereCollsion();

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* WeaponBox;

	UPROPERTY(VisibleAnywhere)
	class USceneComponent* BoxTraceStart;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* BoxTraceEnd;

public:
	FORCEINLINE class UBoxComponent* GetWeaponBox() const { return WeaponBox; }
	FORCEINLINE float GetDamage() const { return Damage; }

	UFUNCTION(BlueprintImplementableEvent)
    void HitEventOccur();
};
