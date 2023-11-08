// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Sound/SoundCue.h"
#include "CPPBaseWeapon.h"
#include "CPP_BaseGameInstance.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Controller.h"
#include "CPP_BaseGameAgent.generated.h"

UCLASS()
class ACPP_BaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_BaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void ChangeWeaponType(TSubclassOf<ACPPBaseWeapon> NewWeaponType);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FTransform GetWeaponSpawnTransform();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void SpawnDefaultWeapon();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		float TakeDamage(float Damage);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool IsAlive();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void Died(AController* Killer);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void PlayHitEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CleanUp();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void PlayDeathEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CheckForOutOfBounds();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		UParticleSystem* DeathParticleEffect;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		USoundCue* DeathSoundCue;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		USoundCue* HitSoundCue;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		UParticleSystem* HitParticleEffect;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float MoveSpeed;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPPBaseWeapon* Weapon;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		TSubclassOf<ACPPBaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float Health;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FSCPP_AgentInfo AgentInfo;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float Points;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool bCheckForOutOfBound;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float OutOfBoundCheckTolerance;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FName WeaponSocketName;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		FVector TargetLocation;
};
