// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseShip.h"
#include "GameFramework/Controller.h"
#include "CPP_BasePlayerController.h"
#include "CPP_PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_PlayerShip : public ACPP_BaseShip
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void ClampToCameraBounds();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		float GetShipAxisAdjustment(float Dist,float Max);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FVector CalcOutofBoundsAdjustment();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void GetPlayerAgentInfo(AController* Player);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void ShouldSpawnAIController();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void UpdateHoverPitch();

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		bool HasDiedRecently();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPP_BasePlayerController* BasePlayerController;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		float InvulnerabilityTime;
};
