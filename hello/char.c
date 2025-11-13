#include <stdio.h>

/*
int main()
{
	//char c1 = 'a';
	//char c2 = 'b';

	//char c1 = 0x61;
	//char c2 = 0x62;

	char c1 = '0';
	char c2 = 0;

	printf("%c, %d\n", c1, c1);
	printf("%c, %d\n", c2, c2);

	//printf("%c, %d, 0x%x\n", c1, c1, c1);
	//printf("%c, %d, 0x%x\n", c2, c2, c2);

	return 0;
}

//문자로 연산하기
int main() {
	printf("%c %d\n", 'a' + 1, 'a' + 1);

	printf("%c %d\n", 97 + 1, 97 + 1);

	return 0;
}


//제어 문자 사용하기
int main() 
{
	char c1 = 'a';
	char c2 = 'b';
	char linefeed = '\n';

	//printf("%c%c%c%c", c1, linefeed, c2, linefeed);

	printf("%d 0x%x\n", linefeed, linefeed);

	return 0;
}

int main()
{
	char c1 = 2;
	char c2 = 5;
	
	printf("%c\n", c1 + 48);
	printf("%c\n", c2 + 48);
	//c1에는 2, c2에는 5가 들어있지만, 이 상태로 출력하면 2와 5가 출력되지 않는다.
	//ASCII 코드표에 의해서 0이 시작하는 위치의 정수를 찾았을때 48이다. 따라서 각 숫자에 48을 더하면 %c로 숫자를 출력할 수 있다.


	return 0;
}
*/

int main()
{
	char c1 = 'a';

	printf("%c\n", c1 - 32); // A출력 --> 대문자 다음 소문자.

	return 0;
}