#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구구단 1단 ~ 9단까지 출력하시오.
*/

void main(void)
{
	for (int num = 1; num <= 9; num++)
	{
		printf("*** %d단 *** \n", num);

		for (int i = 1; i <= 9; i++)
		{
			int result = num * i;
			printf(" %d * %d = %d\n", num, i, result);

			if (i % 9 == 0)
			{
				printf("\n");
			}
		}

	}
}