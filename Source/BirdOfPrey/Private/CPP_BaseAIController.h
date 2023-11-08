// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "CPP_BasePlayerController.h"
#include "CPP_BaseGameAgent.h"
#include "CPP_BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BaseAIController : public AAIController
{
	GENERATED_BODY()
	
public :

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void SelectTarget();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void CheckFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void UpdateAim();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool ShouldStartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool ShouldStopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StartFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void StopFire();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool ShouldUpdateAim();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPP_BasePlayerController* Target;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPP_BaseGameAgent* ControlledAgent;
};
