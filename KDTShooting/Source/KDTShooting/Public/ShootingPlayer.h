// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShootingPlayer.generated.h"

UCLASS()
class KDTSHOOTING_API AShootingPlayer : public APawn
{
	GENERATED_BODY()

public:
	AShootingPlayer();

protected:

	// 구체적으로는 게임이 실행될 때는 아니고 해당 객체가 월드에 생성(배치)이 될 때 실행이 된다.
	// 생성자와는 조금 다름
	virtual void BeginPlay() override;

public:	

	// 매 프레임마다 호출이 됨	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
