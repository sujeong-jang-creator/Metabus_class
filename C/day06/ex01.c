#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int cnt = 10이 날아온거.
void prn_star(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		printf("%c", '*');
	}
}

void main(void)
{
	// *을 10개 찍어봐!
	prn_star(10);
	printf("Hello\n");
	prn_star(20);
	printf("Hi\n");
	prn_star(5);
	printf("Good-bye\n");
	prn_star(12);
}