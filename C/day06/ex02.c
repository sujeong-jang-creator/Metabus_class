#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ()�ȿ� ������ ������ ,  �� ����
// int cnt = 10�� ���ƿ°�.
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
	// *�� 10�� ����!
	prn_star('*');
	printf("Hello\n");
	prn_star('!');
	printf("Hi\n");
	prn_star('#');
	printf("Good-bye\n");
	prn_star('-');
}