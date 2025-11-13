#include <stdio.h>

int main()
{
	/*
	int num1;
	int num2;

	num1 = 1 + 2;
	num2 = 1 - 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	float num1;
	float num2;

	num1 = 1.0f + 0.456789f;
	num2 = 1.0f - 0.456789f;

	printf("%f\n", num1);
	printf("%f\n", num2
	*/

	int num1 = 1;
	int num2 = 1;

	//num1 = num1 + 2;
	//num2 = num2 - 2;

	//연산과 할당을 동시에
	num1 += 2; //num1 = num1 + 2;
	num2 -= 2; //num2 = num2 - 2;

	printf("%d\n", num1);
	printf("%d\n", num2);

	return 0;
}