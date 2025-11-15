#include <stdio.h>

int main()
{
	/*
	// AND, OR, XOR
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 3; // 0000 0011

	printf("%d\n", num1 & num2); // 0000 0001: 1
	printf("%d\n", num1 | num2); // 0000 0011: 3
	printf("%d\n", num1 ^ num2); // 0000 0010: 2

	// NOT
	unsigned char num1 = 162; // 162: 1010 0010
	unsigned char num2;

	num2 = ~num1;

	printf("%u\n", num2); // 93: 0101 1101 <-- num1의 값을 뒤집음

	// 시프트 연산자
	unsigned char num1 = 3; // 3: 0000 0011
	unsigned char num2 = 24; // 24: 0001 1000

	printf("%u\n", num1 << 3); // 24: 0001 1000
	printf("%u\n", num2 >> 2); // 6: 0000 0110

	// 비트 연산 후 할당
	unsigned char num1 = 4; // 4: 0000 0100
	unsigned char num2 = 4; // 4: 0000 0100
	unsigned char num3 = 4; // 4: 0000 0100
	unsigned char num4 = 4; // 4: 0000 0100
	unsigned char num5 = 4; // 4: 0000 0100

	num1 &= 5; // 0000 0101
	num2 |= 2; // 0000 0010
	num3 ^ 3; // 0000 0011
	num4 <<= 2;
	num5 >>= 2;

	printf("%u\n", num1); // 0000 0100: 4
	printf("%u\n", num2); // 0000 0110: 6
	printf("%u\n", num3); // 0000 0111:7
	printf("%u\n", num4); // 0001 0000: 16
	printf("%u\n", num5); // 0000 0001: 1

	unsigned char num1 = 1;
	unsigned char num2 = 5;

	printf("%u\n", num1 | num2); // 5
	printf("%u\n", num1 ^ num2); // 4
	printf("%u\n", num1 & num2); // 1

	num1 = ~num2; // 250
	printf("%u\n", num1);
	*/

	unsigned char num1 = 32; // 0010 0000

	num1 = num1 >> 4 << 1;

	printf("%u\n", num1);





	return 0;
}