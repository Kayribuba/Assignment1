// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "CPPBaseWeapon.generated.h"

UCLASS()
class ACPPBaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPBaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		UParticleSystem* FireParticleEffect;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		USoundCue* FireSoundCue;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool bRequireAimForAI;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		bool bIsAutomatic;

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void PlayFireEffects();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool HasFinishedFiring();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool IsFiring();
};
