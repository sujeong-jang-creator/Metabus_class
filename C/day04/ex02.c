#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	2 - 10 사이의 정수 입력 : 6

	< 1~ 100사이의 6의 배수 출력 >
	6 12 18 24 ... 96
*/

void main(void)
{
	int num;

	printf("2 - 10 사이의 정수 입력 : ");
	scanf("%d", &num);

	/*
	다른 방법
	for (i=1; i<=100; 1++)
	{
		if (i / num == 0)
		{
			printf("%d", num);
		}
	}
	*/

	if (num >= 2 && num <= 10)
	{
		int cnt = 0;
		for (int i = 1; num * i <= 100; i++)
		{
			printf("%d ", num * i);
			cnt++;
			if (cnt % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("올바른 값을 입력해주세요. ");
	}
}