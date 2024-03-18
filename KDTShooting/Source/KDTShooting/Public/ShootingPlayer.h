// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "StructTest.h"
#include "MyActorClassTest.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MySettings")
	FCharacterStat structCharStat;

	// 리플렉션 기능
	// UPROPERTY(메타 지정자 meta specifier, ...)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)					// EditAnywhere : 배치된 액터에서도 값이 보이며 수정이 가능하고, Edit창에서도값이 보이며 수정이 가능함
	int32 age1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)				// EditDefaultsOnly : 배치된 액터에서는 값이 보이지 않으며 수정이 불가능하고, Edit창에서 값이 보이고 수정이 가능함
	int32 age2;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)				// VisibleAnywhere : 배치된 액터에서는 값이 보이지만 수정이 불가능하고, Edit창에서도 값이 보이지만 수정이 불가능함
	int32 age3;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)			// VisibleDefaultsOnly : 배치된 액터에서는 값이 보이지 않으며 수정도 불가능하고, Edit창에서는 값이 보이며 수정이 불가능함
	int32 age4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float numberFloat = 3.14f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name = L"서석교";

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsTeacher = false;

	/*
	*							인스턴스 값 식별 |		수정 가능		/	Edit창 값 식별 | 수정 가능	
	*	EditAnywhere					O				O		/			O			O		
	*	EditDefaultsOnly				X				X		/			O			O		
	*	VisibleAnywhere					O				X		/			O			X		
	*	VisibleDefaultsOnly				X				X		/			O			X		
	* 
	*/


	// Functions
	// 반환자료형 함수이름(매개변수1, 매개변수2 ...);
	UFUNCTION(BlueprintCallable, Category = "Test")
	int32 AddTest(int32 num1, int32 num2);
	
	UFUNCTION(BlueprintCallable)
	int32 Multiply(int32 num1, int32 num2);

	UFUNCTION(BlueprintPure)
	float GetNumberFloat();

	UFUNCTION(BlueprintPure)
	FVector GetLocationVector();

	// 1부터 입력받은 값 까지를 차례로 출력하는 함수를 하나 구현하세요.
	// 블루프린트에서도 사용할 수 있도록

	UFUNCTION(BlueprintCallable)
	void PrintInputNumber(int32 targetNum);

	UFUNCTION(BlueprintCallable)
	void PrintSquare(int32 originNumber);

	UFUNCTION(BlueprintCallable)
	void PrintSquare2(int32& originNumber);

	void PrintSquare3(int32* originNumber);

	UPROPERTY(EditAnywhere, Category="MySettings")
	AMyActorClassTest* ActorTest;

	UPROPERTY(EditAnywhere, Category = "MySettings")
	AActor* CameraActorHandle;
};
