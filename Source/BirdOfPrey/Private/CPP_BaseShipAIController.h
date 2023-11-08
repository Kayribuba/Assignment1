// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseAIController.h"
#include "CPP_BaseShipAIController.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BaseShipAIController : public ACPP_BaseAIController
{
	GENERATED_BODY()
	
public :

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		FVector GetMoveTarget();
};
