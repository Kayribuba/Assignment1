// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_BaseGameAgent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "CPP_BaseGameInstance.h"
#include "CPP_BaseShip.generated.h"

/**
 * 
 */
UCLASS()
class ACPP_BaseShip : public ACPP_BaseGameAgent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void ApplyAgentInfo(FSCPP_AgentInfo NewAgentInfo);

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		UFloatingPawnMovement* FloatingPawnMovement;
};
