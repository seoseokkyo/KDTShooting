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

	// ��ü�����δ� ������ ����� ���� �ƴϰ� �ش� ��ü�� ���忡 ����(��ġ)�� �� �� ������ �ȴ�.
	// �����ڿʹ� ���� �ٸ�
	virtual void BeginPlay() override;

public:	

	// �� �����Ӹ��� ȣ���� ��	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
