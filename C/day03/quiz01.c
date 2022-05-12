#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1. 2개의 정수를 입력받아 가장 큰 수를 출력
2. 4개의 정수를 입력받아 가장 작은 수를 출력
*/

void main(void)
{
	int a, b;

	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("%d", a);
	}
	else
	{
		printf("%d", b);
	}

}