

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



	UFUNCTION(BlueprintCallable)
	void SetWeaponCollision(ECollisionEnabled::Type CollisionEnabled);



	TArray<AActor*> IgnoreActors;
			
	UFUNCTION(BlueprintCallable)
	void SphereTrace(FHitResult& BoxHit);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties")
	float Damage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UBoxComponent* WeaponBox;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	//UFUNCTION()
//	void OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void ExecuetGetHit(FHitResult& BoxHit);
			

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TraceLocations, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* BoxTraceStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = TraceLocations)
	USceneComponent* BoxTraceEnd;


private:
	//bool ActorIsSameType(AActor* OtherActor);

	



	

	

	float BoxTraceExtent = 15.f;

	// Amount of Damage caused by a Weapon.
	UPROPERTY(EditAnywhere, Category = "Weapon Properties")
	bool bShowBoxDebug = false;

	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereComponent;

	void DisableSphereCollsion();

	

public:
	FORCEINLINE class UBoxComponent* GetWeaponBox() const { return WeaponBox; }
	FORCEINLINE float GetDamage() const { return Damage; }

	UFUNCTION(BlueprintImplementableEvent, Category = "MyCategory")
	void HitEventOccur();
	
};
