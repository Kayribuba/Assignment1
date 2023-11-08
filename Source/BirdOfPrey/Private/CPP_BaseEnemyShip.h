// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseShip.h"
#include "CPP_BaseShipAIController.h"
#include "CPP_BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BaseEnemyShip : public ACPP_BaseShip
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void Move();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		ACPP_BaseShipAIController* ShipAIController;
};
