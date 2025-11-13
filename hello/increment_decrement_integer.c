#include <stdio.h>

int main()
{
/*
	//정수 덧셈 뺄셈
	int num1 = 1;

	//num1++; //num1 = num1 + 1;
	num1 += 1;

	printf("%d\n", num1);


	int num1 = 2;
	
	//num1--; // num1 = num1 - 1;
	num1 -= 1;

	printf("%d\n", num1);

	//실수 덧셈 뺄셈
	float num1 = 2.1f;
	float num2 = 2.1f;

	num1++;
	num2--;

	printf("%f %f\n", num1, num2);

	//문자 자료형에 증감 연산자 사용하기
	//문자 자료형도 실제로는 정수다. --> ASCII 코드

	char c1 = 'b';
	char c2 = 'b';

	c1++;
	c2--;

	printf("%c %c\n", c1, c2);
	
	int num1 = 2;
	int num2 = 2;
	int num3;
	int num4;

	//후위(postfix)연산자: 증감 연산자를 변수 뒤에 사용한 것.
	//동작 순서
	//1. 현재 변수의 값이 다른 변수에 할당 --> 값의 변동이 없음.
	//2. 증감 연산자가 수행되어 변수의 값이 1증가(감소)됨.

	//num3 = num1++;
	num3 = num1;
	num1 = num1 + 1;

	//num4 = num2--;
	num4 = num2;
	num2 = num2 - 1;

	printf("%d %d\n", num3, num4);
	//값이 증감연산자 대로 안나오고 둘 다 2로 출력됨.

	//전위(prefix)연산자: 증감 연산자를 변수 앞에 사용한 것.
	//동작 순서
	//1. 증감 연산자가 수행되어 변수의 값이 1 증가(감소)됨
	//2. 변수의 바뀐 값이 다른 변수에 할당됨

	//num3 = ++num1;
	num1 = num1 + 1;
	num3 = num1;

	//num4 = --num2;
	num2 = num2 - 1;
	num4 = num2;

	printf("%d %d\n", num3, num4);
	*/

	int num1 = 2;
	int num2 = 2;
	
	printf("%d %d\n", ++num1, --num2);
	printf("%d %d\n", num1, num2);

	return 0;
}