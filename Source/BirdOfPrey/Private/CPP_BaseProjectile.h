// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "CPP_BaseGameAgent.h"
#include "Sound/SoundBase.h"
#include "CPP_BaseProjectile.generated.h"

UCLASS()
class ACPP_BaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_BaseProjectile();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CleanUpAndDestroy();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void InitialiseProjectile(FVector Direction, float Speed);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void DealDamageTo(AActor* Damaging, float Dmg);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void AdjustToTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool IsEnemyProjectile();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void AdjustToDesiredZ();
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float ProjectileSpeed;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float Damage;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float GroundUnitCheckDistance;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float GroundUnitCheckAngle;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPP_BaseGameAgent* GroundTarget;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float DesiredZ;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		USoundBase*	ImpactSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
