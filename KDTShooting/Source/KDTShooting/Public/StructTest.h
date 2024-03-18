// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StructTest.generated.h"

/**
 * 
 */
class KDTSHOOTING_API StructTest
{
public:
	StructTest();
	~StructTest();
};

USTRUCT(Atomic, BluePrintType)
struct FCharacterStat
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 currentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 currentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 maxStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 endurance;
};