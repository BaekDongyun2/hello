#include <stdio.h>
#include <math.h> // fmod 함수가 선언된 헤더 파일

int main()
{
	/*
	//나머지 연산자: %
	printf("%d\n", 1 % 3);
	printf("%d\n", 2 % 3);
	printf("%d\n", 3 % 3);
	printf("%d\n", 4 % 3);
	printf("%d\n", 5 % 3);
	printf("%d\n", 6 % 3);

	//실수의 나머지 연산은 fmod, fmod, fmodl 함수를 사용

	double num1 = 10.843;
	double num2 = 3.79;
	printf("%f\n", fmod(num1, num2));

	float num3 = 10.843f;
	float num4 = 3.79f;
	printf("%f\n", fmodf(num3, num4));

	long double num5 = 10.843l;
	long double num6 = 3.79l;
	printf("%f\n", fmodl(num5, num6));
	

	int num1 = 7;
	int num2 = 2;

	num1 %= 2; // num1 = num1 % 2;

	num1 %= num2;
	num1 = num1 % num2;
	
	printf("%d\n", num1);
	*/

	// 입력된 정수의 각 자릿수를 역순으로 출력하는 프로그램, 각 자릿수는 공백으로 띄워야 한다.

	int num;

	scanf("%d", &num);

	// 각 자릿수를 직접 계산
	int d1 = num % 10;
	int d2 = (num / 10) % 10;
	int d3 = (num / 100) % 10;
	int d4 = (num / 1000) % 10;
	int d5 = (num / 10000) % 10;

	// 역순으로 출력
	printf("%d %d %d %d %d\n",d1, d2, d3, d4, d5);

	return 0;
}



