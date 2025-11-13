#include <stdio.h>

int main()
{
	/*
	const int con1 = 1;
	const float con2 = 0.1f;
	const char con3 = 'a';

	printf("%d %f %c\n", con1, con2, con3);
	

	//정수 리터럴 접미사 사용하기

	printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
	printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

	printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
	printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

	printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
	printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

	unsigned long long num1 = 1234567890123456789ULL;

	//실수 리터럴 접미사 사용하기
	printf("%f\n", 0.1f); //0.100000: float 크기의 실수 리터럴
	printf("%f\n", 0.1F); //0.100000: float 크기의 실수 리터럴
	printf("%f\n", 0.1); // 0.100000: double 크기의 실수 리터럴
	printf("%Lf\n", 0.1l); //0.100000: long double 크기의 실수 리터럴
	printf("%Lf\n", 0.1L); //0.100000: long double 크기의 실수 리터럴

	printf("%f\n", 1.0e-5f); //0.000010: float 크기의 실수 리터럴
	printf("%f\n", 1.0e-5F); //0.000010: float 크기의 실수 리터럴
	printf("%f\n", 1.0e-5); //0.000010: double 크기의 실수 리터럴
	printf("%f\n", 1.0e-5l); //0.000010: long double 크기의 실수 리터럴
	printf("%f\n", 1.0e-5L); //0.000010: long double 크기의 실수 리터럴
	


	printf("H%cllo, %s %d %Le\n", 'e', "world!", 8, 4.9e-302L);

	const unsigned long long con1 = 10ULL;
	const float con2 = 3.2f;
	const char con3 = 't';

	printf("%llu %f %c\n", con1, con2, con3);
	*/

	//printf("%s %o %lld %Lf\n", "Hello, world!", 076, -2147483647LL, 4.528172L);//%o는 8진 정수고, %Lf는 long double의 크기임.

	const long double con1 = -2.225074e-308;
	const int con2 = 0x1285;
	const long long con3 = 9223372036854775807LL;

	printf("%Le 0x%x %lld\n", con1, con2, con3);

	return 0;
}