#include <stdio.h>

int main()
{
	/*
	int num1;
	int num2;

	num1 = 2 * 3;
	num2 = 7 / 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	float num1;
	float num2;

	num1 = 2.73f * 3.81f;
	num2 = 7.0f / 2.0f;

	printf("%f\n", num1);
	printf("%f\n", num2);
	*/

	int num1 = 2;
	int num2 = 7;
	
	num1 *= 3; //num1 = num1 * 3; 곱셈과 할당을 동시에 처리
	num2 /= 2; //num2 = num2 / 2; 나눗셈과 할당을 동시에 처리

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}