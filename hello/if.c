#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main() {
	/*
	int num1 = 10;

	if (num1 == 10)  // if (조건식) 
	{
		printf("10입니다.\n"); //{ 조건식이 만족할 때 실행할 코드 }
	}


	int num2 = 5;

	if (num2 == 10); // if 조건문 끝에는 세미콜론을 붙이면 안 됨
	{
		printf("10입니다.\n"); // if 조건문에 세미콜론이 붙으면 조건문은 동작하지 않고 결과가 출력된다.
	}

	// if 조건문 끝에 세미콜론을 붙이게 되면 다음과 같게 된다.
	// if (num2 == 10);
	// printf("10입니다.\n"); --> printf가 항상 실행된다
	

	int num1 = 10;

	if (num1 == 10)
		printf("10입니다.\n"); // if 조건문에서 실행할 코드가 한 줄이라면 중괄호를 생략할 수 있다.

	int num2 = 5;

	if (num2 == 10)
		printf("if 조건문\n");
		printf("10입니다.\n"); // 중괄호를 생략하면 첫 번째 구문만 실행한다.
		// num2가 10이 아니므로 첫 번째 구문인 "if 조건문"은 출력되지 않았고, 무조건 실행되는 두 번째 구문만 출력되는 것이다.


	// 올바른 예시
	if (num2 == 10)
	{
		printf("if 조건문\n");
		printf("10입니다.\n");
	}

	float num1 = 0.1f;
	char c1 = 'a';

	if (num1 == 0.1f) // 실수는 연산한 뒤 반올림 오차가 발생할 수 있으므로 반올림 오차를 감안하여 비교한다.
		printf("0.1입니다.\n");

	if (c1 == 'a')
		printf("a입니다.\n");

	if (c1 == 97) //ASCII 코드
		printf("a입니다.\n");

	int num1;

	scanf("%d", &num1);

	if (num1 == 10)
	{
		printf("10입니다.\n");
	}

	if (num1 == 20)
	{
		printf("20입니다.\n");
	}
	*/

	char c1 = 'k';

	if (c1 == 'k') // 'k' 또는 107
	{
		printf("k입니다.\n");
	}


	return 0;
}