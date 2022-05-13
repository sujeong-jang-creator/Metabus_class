#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1번) 1 ~ 100까지의 정수 출력
/*
void main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
}
*/

// 2번) 1 ~ 100 홀수출력
/*
void main(void)
{
	for (int i = 1; i < 100; i=i+2)
	{
		printf("%d ", i);
	}
 }
*/

// 3번) 1 ~ 100 짝수출력
void main(void)
{
	for (int i = 100; i > 1; i = i - 2)
	{
		printf("%d ", i);
	}
}