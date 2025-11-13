#include <stdio.h>

int main()
{
	if (2) // 0이 아니므로 참이 된다.
		printf("참\n");
	else
		printf("거짓\n");

	if (0) // 거짓
		printf("참\n");
	else
		printf("거짓\n");

	int num1 = 5;

	if (num1 = 10) // num1에 10을 할당하는 것이 되므로, 0이 아니기 때문에 참이된다.
		printf("10입니다.\n");

	return 0;
}