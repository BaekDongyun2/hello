#include <stdio.h>

int main()
{
	/*
	unsigned char num1 = 1; // 1: 0000 0001

	printf("%u\n", num1 << 1); // 2: 0000 0010 => 2^1
	printf("%u\n", num1 << 2); // 4: 0000 0100 => 2^2
	printf("%u\n", num1 << 3); // 8: 0000 1000 => 2^3
	printf("%u\n", num1 << 4); // 16: 0001 0000 => 2^4
	printf("%u\n", num1 << 5); // 32: 0010 0000 => 2^5
	printf("%u\n", num1 << 6); // 64: 0100 0000 => 2^6
	printf("%u\n", num1 << 7); // 128: 1000 0000 => 2^7

	unsigned char num1 = 240; // 240: 1111 0000
	unsigned char num2 = 15; // 15: 0000 1111

	unsigned char num3, num4;

	num3 = num1 << 2; // 192: 1100 0000 <= 맨 앞의 11이 사라져 1100 0000이 됨
	num4 = num2 >> 2; // 3: 0000 0011 <= 맨 뒤의 11이 사라져서 0000 0011이 됨

	unsigned char num1 = 131; // 131: 1000 0011
	char num2 = -125; // -125: 1000 0011에서 맨 앞의 1은 부호 비트라 부른다

	unsigned char num3;
	char num4;

	num3 = num1 >> 5;
	num4 = num2 >> 5;
	
	printf("%u\n", num3); // 4: 0000 0100 <= 맨뒤의 11은 사라지고 0000 0100이 됨
	printf("%d\n", num4); // -4: 1111 1100 <= 모자라는 공간은 부호 비트의 값인 1로 채워지므로 1111 1100이 됨

	char num1 = 67; // 67: 0100 0011
	char num2;

	num2 = num1 >> 5; // 0000 0010 = 2

	printf("%d\n", num2);
	*/


	//char num1 = 113; // 113: 0111 0001
	//char num2 = -15; // -15: 1111 0001
	//char num3, num4, num5, num6;

	//num3 = num1 << 2;
	//num4 = num2 << 2; 

	//num5 = num1 << 4;
	//num6 = num2 << 4;

	//printf("%d\n", num3); // -60: 1100 0100
	//printf("%d\n", num4); // -60: 1100 0100
	//printf("%d\n", num5); // 16: 0001 0000
	//printf("%d\n", num6); // 16: 0001 0000

	unsigned char flag = 7; // 0000 0111

	flag ^= ~2; // 1111 1101 <- 마스크와 비트 XOR로 일곱 번째 비트를 토글
	flag ^= 8; // 0000 1101 <- 마스크와 비트 XOR로 다섯 번째 비트를 토글

	printf("%u\n", flag); // 13: 0000 1101

	if (flag & 1)    // & 연산자로 0000 0001 비트가 켜져 있는지 확인
		printf("0000 0001은 켜져 있음\n");
	else
		printf("0000 0001은 꺼져 있음\n");

	if (flag & 2)    // & 연산자로 0000 0010 비트가 켜져 있는지 확인
		printf("0000 0010은 켜져 있음\n");
	else
		printf("0000 0010은 꺼져 있음\n");

	if (flag & 4)    // & 연산자로 0000 0100 비트가 켜져 있는지 확인
		printf("0000 0100은 켜져 있음\n");
	else
		printf("0000 0100은 꺼져 있음\n");

	if (flag & 8)    // & 연산자로 0000 1000 비트가 켜져 있는지 확인
		printf("0000 1000은 켜져 있음\n");
	else
		printf("0000 1000은 꺼져 있음\n");
	

	return 0;
}