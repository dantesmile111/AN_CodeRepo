#pragma once


UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_Equipped UMETA(DisplayName = "Equipped"),
	ECS_Combat  UMETA(DisplayName = "Combat")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_HitRection UMETA(DisplayName = "HitRection"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DisplayName = "EquippingWeapon"),
	EAS_Dodge UMETA(DisplayName = "Dodge"),
	EAS_Dead UMETA(DisplayName = "Dead")
};


UENUM(BlueprintType)
enum class EWeaponHand : uint8
{
	EWH_LeftHand UMETA(DisplayName = "LeftHand"),
	EWH_RightHand UMETA(DisplayName = "RightHand")
	
};





UENUM(BlueprintType)
enum class ETurningInPlace : uint8
{
	ETIP_NoTurning UMETA(DisplayName = "NoTurning"),
	ETIP_TurnLeft UMETA(DisplayName = "TurnLeft"),
	ETIP_TurnRight UMETA(DisplayName = "TurnRight"),

	ETIP_MAX UMETA(DisplayName = "Default_MAX")
};


UENUM(BlueprintType)
enum class EEnemyAISense : uint8
{
	EAS_None UMETA(Displayname = "None"),
	EAS_Sight UMETA(Displayname = "Sight"),
	EAS_Hearing UMETA(Displayname = "Hearing"),
	EAS_Damage UMETA(Displayname = "Damage")

};

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	EES_NoState UMETA(DisplayName = "NoState"),

	EES_Dead UMETA(DisplayName = "Dead"),
	EES_Idle UMETA(DisplayName = "Idle"),
	EES_Patrolling UMETA(DisplayName = "Patrolling"),
	EES_Chasing UMETA(DisplayName = "Chasing"),
	EES_Attacking UMETA(DisplayName = "Attacking"),
	EES_Engaged UMETA(DisplayName = "Enagaged")
};
