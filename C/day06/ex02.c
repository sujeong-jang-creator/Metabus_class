#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ()안에 여러개 쑤때는 ,  러 구분
// int cnt = 10이 날아온거.
void prn_star(char ch)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
}

void main(void)
{
	// *을 10개 찍어봐!
	prn_star('*');
	printf("Hello\n");
	prn_star('!');
	printf("Hi\n");
	prn_star('#');
	printf("Good-bye\n");
	prn_star('-');
}