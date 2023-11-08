// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CPPBaseWeapon.h"
#include "CPP_BaseGameInstance.generated.h"


USTRUCT(BlueprintType)
struct FSCPP_AgentInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		FText Name;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		TSubclassOf<ACPPBaseWeapon> WeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		USkeletalMesh* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		TSubclassOf<UAnimInstance> AnimInstance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		UTexture2D* Image;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		float Speed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		float Health;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		float MeshScale;

	UPROPERTY(BlueprintReadWrite, Category = "BirdsOfPrey")
		FLinearColor LinearColor;
};

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDEL_OnAgentInfoChange, const int, PlayerControllerID, const FSCPP_AgentInfo, AgentInfo);

UCLASS()
class UCPP_BaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "BirdsOfPrey")
		TArray<FSCPP_AgentInfo> PlayerAgentInfo;

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void SetPlayerAgentInfoFor(const int PlayerControllerID, const FSCPP_AgentInfo AgentInfo);

	UFUNCTION(BlueprintImplementableEvent, Category = "BirdsOfPrey")
		void GetPlayerAgentInfoFor(const int PlayerControllerID, FSCPP_AgentInfo& AgentInfo, bool& Succes);
		
	UPROPERTY(BlueprintCallable, Category = "BirdsOfPrey")
		FDEL_OnAgentInfoChange CPP_OnAgentInfoChange;
};
