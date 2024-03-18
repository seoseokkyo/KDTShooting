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
	FString myText = L"서석교";
	TCHAR* cString = myText.GetCharArray().GetData();
	UE_LOG(LogTemp, Warning, TEXT("my name is %s"), cString);

	// 논리형 변수 bIsStudent를 선언하고, true로 초기화하시오
	// 만일 bIsStudent 변수의 값이 true라면
	// My Answer is TRUE 라고 출력한다.

	// 그렇지 않으면
	// My Answer is FALSE 라고 출력한다.
	
	// 문자열 포맷 4 - %p : pointer(주소값)

	bool bIsStudent = true;
	FString myIsStudentResult;
	if (bIsStudent)
	{ 
		myIsStudentResult = TEXT("My Answer is TRUE");
	}	
	else
	{
		myIsStudentResult = TEXT("My Answer is FALSE");
	}		

	UE_LOG(LogTemp, Warning, TEXT("%s"), *myIsStudentResult);

	this->age1 = 1;
	this->age2 = 2;
	this->age3 = 3;
	this->age4 = 4;


	int32 normalNumber = 10;

	int32* ptrNumber = &normalNumber;
	float* ptrFloat = (float*)&normalNumber;

	UE_LOG(LogTemp, Warning, TEXT("%d"), normalNumber);
	UE_LOG(LogTemp, Warning, TEXT("%d"), ptrNumber);
	UE_LOG(LogTemp, Warning, TEXT("%d"), *ptrNumber);
	UE_LOG(LogTemp, Warning, TEXT("%d"), ptrFloat);
	UE_LOG(LogTemp, Warning, TEXT("%d"), (int32)*ptrFloat);

	int32 convertTest = (int32)(*ptrFloat);
	UE_LOG(LogTemp, Warning, TEXT("%d"), convertTest);
	UE_LOG(LogTemp, Warning, TEXT("%d"), convertTest);

	convertTest = (int32)fNumber2;

	int32 myNum = 3;

	PrintSquare(myNum);
	UE_LOG(LogTemp, Warning, TEXT("%d"), myNum);

	PrintSquare2(myNum);
	UE_LOG(LogTemp, Warning, TEXT("%d"), myNum);

	PrintSquare3(&myNum);
	UE_LOG(LogTemp, Warning, TEXT("%d"), myNum);
}

void AShootingPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AShootingPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

int32 AShootingPlayer::Multiply(int32 num1, int32 num2)
{
	return num1 * num2;
}

float AShootingPlayer::GetNumberFloat()
{
	return numberFloat;
}

FVector AShootingPlayer::GetLocationVector()
{
	return GetTargetLocation();
}

int32 AShootingPlayer::AddTest(int32 num1, int32 num2)
{
	return num1 + num2;
}

void AShootingPlayer::PrintInputNumber(int32 targetNum)
{
	// 1부터 targetNum 변수의 값까지 1씩 증가시키면서 반복적으로 수행한다.
	// 반복적인 수행 -> 반복문(for문)
	// for( 초기화 식; 중단조건식; 증감식)
	// {
	//		해야할 일
	// }
	// 수행할 일은 현재 증가된 값을 출력하는 것이다.

	for (int32 i = 1; i <= targetNum; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("TargetNumber : %02d"), i);
	}
}


void AShootingPlayer::PrintSquare(int32 originNumber)
{
	originNumber *= originNumber;
}

void AShootingPlayer::PrintSquare2(int32& originNumber)
{
	originNumber *= originNumber;
}

void AShootingPlayer::PrintSquare3(int32* originNumber)
{
	*originNumber *= *originNumber;
}