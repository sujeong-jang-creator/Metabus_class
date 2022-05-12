#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1. 2개의 정수를 입력받아 가장 큰 수를 출력
2. 4개의 정수를 입력받아 가장 작은 수를 출력
*/

void main(void)
{
	int a, b, c, d, max1, max2;

	printf("4개의 정수를 입력하시오 : ");
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a > b)
	{
		max1 = a;
	}
	else
	{
		max1 = b;
	}

	//int max2 = (c > d ? c : d);
	if (c > d)
	{
		max2 = c;
	}
	else
	{
		max2 = d;
	}

	if (max1 > max2)
	{
		printf("가장 큰 수는 %d 입니다.", max1);
	}
	else
	{
		printf("가장 큰 수는 %d 입니다.", max2);
	}
}