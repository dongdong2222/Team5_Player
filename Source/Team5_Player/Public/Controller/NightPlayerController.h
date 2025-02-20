// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NightPlayerController.generated.h"

class UInputAction;

/**
 * 
 */
UCLASS()
class TEAM5_PLAYER_API ANightPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UInputAction* MoveAction;
	
};
