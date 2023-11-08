// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_PlayerShip.h"
#include "Sound/SoundCue.h"
#include "CPP_BasePowerUp.generated.h"

UCLASS()
class ACPP_BasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_BasePowerUp();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void Apply(ACPP_PlayerShip* PlayerShip);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void PlayEffects();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		USoundCue* PickUpSoundCue;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey|Effects")
		UParticleSystem* PickUpParticleSystem;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
