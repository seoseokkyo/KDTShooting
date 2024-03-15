#include "ShootingPlayer.h"

AShootingPlayer::AShootingPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AShootingPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	/*
	* 						타입		위험도	내용
	* 	#define UE_LOG(CategoryName, Verbosity, Format, ...) \
	* 
	*	UE_PRIVATE_LOG(PREPROCESSOR_NOTHING, constexpr, CategoryName, Verbosity, Format, ##__VA_ARGS__)
	*/

	// 헬로 월드 글자를 출력한다.
	//UE_LOG(LogTemp, Log, TEXT("Hello World!"));
	//UE_LOG(LogTemp, Warning, TEXT("Hello World!"));
	//UE_LOG(LogTemp, Error, TEXT("Hello World!"));

	// 정수형 변수 number를 선언하고, 100으로 초기화 하시오
	//int iNumber = 100; // << Unreal에서는 이 int 안씀
	int32 iNumber = 100; // << Signed int형태임
	// 문자열 포맷(string format)
	// 1. %d : decimal(10진수)
	UE_LOG(LogTemp, Warning, TEXT("my integer number is %d"), iNumber);

	// 실수형 변수 number2를 선언하고, -3.141592로 초기화 하시오
	// 문자열 포맷 2 - %f : floating point(실수)
	float fNumber2 = -3.141592f;
	UE_LOG(LogTemp, Warning, TEXT("my floating number is %.3f"), fNumber2);

	// 문자열 변수 myText를 선언하고, 자신의 이름으로 초기화 하시오
	// 문자열 포맷 3 - %s : stirng(문자열)
	// 전달받을 자료형 : FString이 아니라 TCHAR*형태임
	FString myText = TEXT("서석교");
	TCHAR* cString = myText.GetCharArray().GetData();
	UE_LOG(LogTemp, Warning, TEXT("my name is %s"), cString);

	// 논리형 변수 bIsStudent를 선언하고, true로 초기화하시오
	// 만일 bIsStudent 변수의 값이 true라면
	// My Answer is TRUE 라고 출력한다.

	// 그렇지 않으면
	// My Answer is FALSE 라고 출력한다.

	bool bIsStudent = true;
	FString myIsStudentResult;
	if (bIsStudent)
		myIsStudentResult = TEXT("My Answer is TRUE");
	else
		myIsStudentResult = TEXT("My Answer is FALSE");

	UE_LOG(LogTemp, Warning, TEXT("%s"), *myIsStudentResult);
}

void AShootingPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShootingPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

