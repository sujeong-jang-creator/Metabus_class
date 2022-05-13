#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	정수를 입력 받아 n!을 구하는 프로그램 작성하시오.
*/
/*
void main(void)
{
	int num;

	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	int ans = 1;
	for (int i = 1; i <= num; i++)
	{
		ans = ans * i;
	}
	printf("%d", ans);
}
*/

/*
void main(void)
{
	for (int i = 1; i <= 7; i++)
	{
		printf(" ");
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
void main(void)
{
	int cnt = 0;
	for (int i = 1; i <= 7 * 4; i++)
	{
		printf("*");
		if (i % 7 == 0)
		{
			printf("\n");
		}
	}
}
*/

/*
void main(void)
{
	int cnt = 0;
	for (int i = 1; i <= 7 * 4; i++)
	{
		if (i % 2 != 0)
		{
			printf("*");
		}
		else 
		{
			printf(" ");
		}

		if (i % 7 == 0)
		{
			printf("\n");
		}
	}
}
*/

void main(void)
{
	int cnt = 0;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (j % 2 == 0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}