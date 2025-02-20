// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NightPlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "Controller/NightPlayerController.h"

void ANightPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
  Super::SetupPlayerInputComponent(PlayerInputComponent);
  UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
  if (!IsValid(EnhancedInput)) return;
  ANightPlayerController* PlayerController = Cast<ANightPlayerController>(GetController());
  if (!IsValid(PlayerController)) return;

  EnhancedInput->BindAction(
    PlayerController->MoveAction,
    ETriggerEvent::Triggered,
    this,
    &ThisClass::Move
  );
}

void ANightPlayerCharacter::Move()
{
}

void ANightPlayerCharacter::SetFirstPersonView()
{

}

void ANightPlayerCharacter::SetThirdPersonView()
{
}
