#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int num1;
	//
	//num1 = 35 + 1 * 2;

	//printf("%d\n", num1);


	// 괄호를 사용한 계산식의 계산 순서
	// 1. 괄호를 사용한 연산자
	// 2. 우선순위가 높은 연산자
	// 3. 결합방향에 따라 순서대로 계산 (+, *는 왼쪽에서 오른쪽)

	//int num1 = 1;
	//int num2;
	//int num3, num4, num5;

	//num2 = ++num1; // 변수를 먼저 평가하고 앞에 있는 ++를 계산

	//printf("%d\n", num2); // 2

	//num5 = num4 = num3 = num2 = num1 = 10; // 오른쪽에서 왼쪽으로 차례 차례 할당


	//=============================================
	// 결합 방향이 다른 연산자와 괄호 사용하기

	//int num1;
	//int num2 = 3;

	//num1 = 10 + 2 / (5 - 3) * ++num2; // 괄호와 증가 연산자를 먼저 계산

	//printf("%d\n", num1); // 14

	//===============================================
	//논리, 비교, 시프트 연산자에 괄호 사용하기

	bool b1;

	b1 = (false || false) && !false || false; // 논리 연산자의 우선순위는 !, &&, || 순

	printf("%d\n", b1); // 0: false and true 이므로 0

	int num1;

	num1 = 5 == 5 < 10; // ==보다 <의 우선순위가 높음

	printf("%d\n", num1); // 0

	int num2 = 1;
	int num3 = 2;
	int num4;

	num3 = num1 << 2 + num2 << 1;

	printf("%d\n", num3);

	return 0;
}