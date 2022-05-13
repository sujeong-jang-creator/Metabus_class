#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	2 - 100 사이의 정수 입력 : 68

	< 68의 약수 출력 >
	1 2 4 17 34 68
	약수의 총 개수 6개
*/

void main(void)
{
	int num;

	printf("2 - 100 사이의 정수 입력 : ");
	scanf("%d", &num);

	if (num >= 2 && num <= 100)
	{
		printf("\n<%d의 약수 출력>\n", num);
		int cnt = 0;
		for (int i = 1; i <= 100; i++)
		{
			if (num % i == 0)
			{
				printf("%d ", i);
				cnt++;
			}
		}
		printf("\n약수의 총 개수는 : %d 개", cnt);
	}
	else
	{
		printf("\n올바른 값을 입력하세요.");
	}
}