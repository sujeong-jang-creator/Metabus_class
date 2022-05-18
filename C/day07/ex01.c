#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	int count = 0;
	for (int num = 2; num <= 500; num++)
	{
		int flag = 0;
		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				flag = 1;
				count++;
				break;
			}

		}
		if (!flag)
			printf("%3d", num);
	}
	printf("\ncount : %d\n", count);
}