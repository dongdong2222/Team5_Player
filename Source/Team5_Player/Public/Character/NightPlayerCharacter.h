// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/NightCharacterBase.h"
#include "NightPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TEAM5_PLAYER_API ANightPlayerCharacter : public ANightCharacterBase
{
	GENERATED_BODY()
	//~APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//End of ~APawn interface

private:
	void Move();


	void SetFirstPersonView();
	void SetThirdPersonView();
	
};
