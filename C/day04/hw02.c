#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	������ 1�� ~ 9�ܱ��� ����Ͻÿ�.
*/

void main(void)
{
	for (int num = 1; num <= 9; num++)
	{
		printf("*** %d�� *** \n", num);

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