#include <stdio.h>

int main()
{

	// 자료형을 섞어서 쓰면 컴파일러에서 암시적 형 변환(implicit type conversion)을 함
	// 자료형의 크기가 큰 쪽, 표현 범위가 넓은 쪽으로 자동 변환됨
	/*
	int num1 = 11;
	float num2 = 4.4f;

	printf("%f\n", num1 + num2);
	printf("%f\n", num1 - num2);
	printf("%f\n", num1 * num2);
	printf("%f\n", num1 / num2);

	long long num1 = 123456789000;
	int num2 = 10;
	
	printf("%lld\n", num1 + num2);
	printf("%lld\n", num1 - num2);
	printf("%lld\n", num1 * num2);
	printf("%lld\n", num1 / num2);

	// 자료형의 크기가 작은 쪽, 표현 범위가 좁은 쪽으로 변환되는 것을 형 축소(type demotion)이라고 함
	// 형 축소가 일어나면 값의 손실이 일어남
	// 컴파일 경고가 나오지 않게 하려면 형 변환(type conversiom, type casting)을 해야함
	float num1 = 11.0f;
	float num2 = 5.0f;

	int num3 = num1 / num2;

	printf("%d\n", num3);

	char num1 = 28;
	int num2 = 1000000002;

	char num3 = num1 + num2;

	printf("%d\n", num3); // 결과: 30, char 보다 큰 정수는 출력될 수 없다.
	*/

	char c1 = 'a';
	char num2 = c1; //char는 정수 자료형이므로 char 또는 char보다 큰 정수 자료형에 저장할 수 있다. (unsigned)char, short, int, long, long long 가능

	printf("%c\n", num2);


	return 0;
}