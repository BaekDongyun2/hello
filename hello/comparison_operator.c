#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int num1 = 10;

	printf("%d\n", num1 == 10); // 참
	printf("%d\n", num1 != 5); // 참

	printf("%d\n", num1 > 10); // 거짓
	printf("%d\n", num1 < 10); // 거짓

	printf("%d\n", num1 >= 10); // 참
	printf("%d\n", num1 <= 10); // 참

	int num1 = 10;
	int num2;

	if (num1)
		num2 = 100;
	else
		num2 = 200;

	// 삼항 연산자
	num2 = num1 ? 100 : 200
	// num1: 참/거짓을 판단할 변수 / 100: 참일 때 사용할 값 / 200: 거짓일 때 사용할 값

	num2 = num1 == 10 ? 100 : 200;
	// num1, 10: 비교할 값이나 변수 / num1 == 10: 조건식 / 100 : 참일 때 사용할 값 / 200: 거짓일 때 사용할 값

	printf("%d\n", num2);

	int num1 = 10;

	if (num1 == 10)
		printf("10입니다.\n");

	if (num1 != 5)
		printf("5가 아닙니다.\n");

	if (num1 > 10)
		printf("10보다 큽니다.\n");

	if (num1 < 10)
		printf("10보다 작습니다.\n");

	if (num1 >= 10)
		printf("10보다 크거나 같습니다.\n");

	if (num1 <= 10)
		printf("10보다 작거나 같습니다.\n");

	float num1 = 0.1f;
	char c1 = 'a';

	if (num1 >= 0.09f)
		printf("0.09보다 크거나 같습니다.\n");

	if (c1 == 'a')
		printf("a입니다.\n");

	if (c1 == 97)
		printf("a입니다.\n");

	if (c1 < 'b')
		printf("b보다 작습니다.\n");

	int num1 = 5;

	printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다.");
	
	float num1 = 1.2f;

	printf("%f\n", num1 > 2.0f ? 3.0f : 4.0f);
	*/

	char letter;

	scanf("%c", &letter);

	printf("%s\n", letter != 'k' ? "거짓" : "참");
	printf("%s\n", letter > 'h' ? "참" : "거짓");
	printf("%s\n", letter <= 'o' ? "참" : "거짓");

	return 0;
}