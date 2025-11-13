#include <stdio.h>
#include <limits.h>//자료형의 최솟값, 최댓값
#include <stdint.h>//크기가 표시된 정수 자료형

/*
int main()
{
	char num1 = -10;
	short num2 = 30000;
	int num3 = -1234567890;
	long num4 = 1234567890;
	long long num5 = -1234567890123456789;

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}
*/

/*
int main()
{
	unsigned char num1 = 200;
	unsigned short num2 = 60000;
	unsigned int num3 = 4123456789;
	unsigned long num4 = 41234567890;
	unsigned long long num5 = 12345678901234567890;

	printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}
*/
//오버플로우, 언더플로우
/*int main() {
	char num1 = 128;
	unsigned char num2 = 256;

	printf("%d %u\n", num1, num2);

	return 0;
}
*/

/*
//자료형의 크기 구하기
int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;
	//size = sizeof(num1); 이것도 가능함
	//size = sizeof int; 잘못된 방법
	//size = sizeof(int); 자료형

	printf("num1의 크기: %d\n", size);

	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
}
*/

/*
int main() 
{

	//자료형의 최솟값 구하기
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN
	

	//오버플로우
	char num1 = CHAR_MAX + 1;
	short num2 = SHRT_MAX + 1;
	int num3 = INT_MAX + 1;
	long long num4 = LLONG_MAX + 1;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	unsigned char num5 = UCHAR_MAX + 1;
	unsigned short num6 = USHRT_MAX + 1;
	unsigned int num7 = UINT_MAX + 1;
	unsigned long long num8 = ULLONG_MAX + 1;

	printf("%d %d %d %lld\n", num5, num6, num7, num8);

	//언더플로우
	char num9 = CHAR_MIN - 1;
	short num10 = SHRT_MIN - 1;
	int num11 = INT_MIN - 1;
	long long num12 = LLONG_MIN - 1;

	printf("%d %d %d %lld\n", num9, num10, num11, num12);

	unsigned char num13 = 0 - 1;
	unsigned short num14 = 0 - 1;
	unsigned int num15 = 0 - 1;
	unsigned long long num16 = 0 - 1;

	printf("%u %u %u %llu\n", num13, num14, num15, num16);

	return 0;
}
*/

int main() {
	int8_t num1 = -128;
	int16_t num2 = 32767;
	int32_t num3 = 2147483647;
	int64_t num4 = 9223372026854775807;

	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;

	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}