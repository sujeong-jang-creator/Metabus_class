#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int cnt = 10�� ���ƿ°�.
void prn_star(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		printf("%c", '*');
	}
}

void main(void)
{
	// *�� 10�� ����!
	prn_star(10);
	printf("Hello\n");
	prn_star(20);
	printf("Hi\n");
	prn_star(5);
	printf("Good-bye\n");
	prn_star(12);
}