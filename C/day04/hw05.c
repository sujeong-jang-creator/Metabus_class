#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num;

	printf("1 ~ 50사이의 정수 입력 : ");
	scanf("%d", &num);

	printf("< 1 ~ %d 사이의 369게임 >\n", num);
	for (int i = 1; i <= num; i++)
	{
		// 십의자리, 1의자리 369 포함여부 판단
		int n1 = i % 10;
		int n10 = i / 10;

		int cnt = 0;
		if (n1 == 3 || n1 == 6 || n1 == 9)
			++cnt;
		if (n10 == 3 || n10 == 6 || n10 == 9)
			cnt++;
		// 10 의 배수일때
		if (n1 == 0)
		{
			for (int j = 0; j < n10; j++)
				printf("뽀");
			printf("쑝");
		}
		// 3,6,9일 때
		else if (cnt > 0)
		{
			for (int j = 0; j < cnt; j++)
				printf("짝");
		}
		// 일반 숫자
		else
			printf("%d", i);
		printf("\n");

		/*
		int cnt = 0;
		if (n1 == 0)
		{
			for (int j = 0; j < n10; j++)
				printf("뽀");
			printf("쑝");
		} else if (n1 == 3 || n1 == 6 || n1 == 9)
			cnt++;
		if (n10 == 3 || n10 == 6 || n10 == 9)
			cnt++;
		if (cnt == 0)
			printf("%d", i);
		else
		{
			for (int j = 0; j < cnt; j++)
				printf("짝");
		}
		printf("\n");
		*/
		/*int flag = 0;
		if (n1 == 3 || n1 == 6 || n1 == 9)
		{
			printf("짝");
			flag = 1;
		}
		if (n10 == 3 || n10 == 6 || n10 == 9)
		{
			printf("짝");
			flag = 1;
		}
		if(flag == 0)
			printf("%d", i);
		printf("\n");*/
	}
}