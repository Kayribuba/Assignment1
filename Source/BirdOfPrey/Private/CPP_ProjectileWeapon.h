// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPPBaseWeapon.h"
#include "CPP_BaseProjectile.h"
#include "CPP_ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_ProjectileWeapon : public ACPPBaseWeapon
{
	GENERATED_BODY()
	
public :

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void FireProjectile();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		ACPP_BaseProjectile* SpawnProjectile(FTransform SpawnTransform);


	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FTransform GetProjectileSpawnTransform(int ShotNumber);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool ReadyToFire();


	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		TSubclassOf<ACPP_BaseProjectile> ProjectileType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float RefireTime;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float LastFireTime;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		int NumShots;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool bIsFiring;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float DesiredZ;
};
