#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	int start, end, step = 3;

	printf("���۴� : ");
	scanf("%d", &start);

	printf("����� : ");
	scanf("%d", &end);

	for (int i = start; i <= end; i += step)
	{
		for (int j = 1; j <= 9; j++)
		{
			for (int k = i; k <= 9 && k < i + step; k++)
				printf("%d * %d = %d\t", k, j, k * j);
			printf("\n");
		}
		printf("\n");
	}
}