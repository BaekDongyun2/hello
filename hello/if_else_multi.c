#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int num1 = 10;
	int num2 = 20;

	if (num1 == 10 && num2 == 20) // num1이 10이면서 num2이 20일 때
		// if (num1 && num2)도 가능하다.
		printf("참\n");
	else
		printf("거짓\n");

	// if 안에 if

	if (num1 == 10)
	{
		if (num2 = 20)
		{
			printf("참\n");
		}
		else
		{
			printf("거짓\n");
		}
	}
	else
	{
		printf("거짓\n");
	}

	unsigned long long num1 = 0;

	if (num1)
		printf("참\n");
	else
		printf("거짓\n");

	// 필기시험 점수가 80이상, 토익 점수가 850 이상이어야 합격
	int writtenTest = 78;
	int toeic = 870;

	if (writtenTest >= 80 && toeic >= 850)
		printf("합격\n");
	else
		printf("불합격\n");

	char letter;

	scanf("%c\n", &letter);

	if (letter == 'a') {
		printf("a입니다.\n");
	}
	else
		printf("a가 아닙니다.\n");
	*/
	int num1, num2, num3, num4;
	float average;

	scanf("%d %d %d %d\n", &num1, &num2, &num3, &num4);

	average = (num1 + num2 + num3 + num4) / 4.0f;

	if ((num1 < 0 || num1 > 100) || (num2 < 0 || num2 > 100) || (num3 < 0 || num3 > 100) || (num4 < 0 || num4 > 100))
		printf("잘못된 점수\n");
	else {
		if (average >= 85)
			printf("합격\n");
		else
			printf("불합격\n");
	}
	return 0;
}