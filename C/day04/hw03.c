#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3. 시작단과 종료단을 입력받아 구구단을 출력하시오
*/

void main(void)
{
	int a, b, start, end;

	printf("시작단을 입력하세요 : ");
	scanf("%d", &a);
	printf("종료단을 입력하세요 : ");
	scanf("%d", &b);
	
	if (a > b)
	{
		start = b;
		end = a;
	}
	else
	{
		start = a;
		end = b;
	}
	
	for (int i = start; i <= end; i++)
	{
		printf("*** %d단 *** \n", i);

		for (int j = 1; j <= 9; j++)
		{
			int result = i * j;
			printf(" %d * %d = %d\n", i, j, result);
		}
	}
}