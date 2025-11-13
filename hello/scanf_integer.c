#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	int num1;

	printf("정수를 입력하세요:");
	scanf("%d", &num1); //변수 앞에서 &를 붙여야 한다.

	printf("%d\n", num1);
	

	int num1, num2;

	printf("정수를 두 개 입력하세요: ");
	scanf("%d %d", &num1, &num2);

	printf("%d %d\n", num1, num2);
	

	float num1;

	//double num1;
	
	printf("실수를 입력하세요: ");
	scanf("%f", &num1); //num1 변수를 double에 넣는다면 서식지정자를 %lf로 넣어야 한다. long double 이라면 %Lf로.

	print("%f\n", num1);
	

	char c1;

	printf("문자를 입력하세요: ");
	scanf("%c", &c1);

	printf("%c\n", c1);
	

	int num1;
	int num2;
	int num3;

	printf("정수 세 개를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return 0;
	*/


		int c1;
		float c2;
		char c3;

		scanf("%d %f %c", &c1, &c2, &c3);
		printf("%d\n%f\n%c\n", c1, c2, c3);

		return 0;
}