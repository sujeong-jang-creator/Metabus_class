#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1��) 1 ~ 100������ ���� ���
/*
void main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		printf("%d ", i);
	}
}
*/

// 2��) 1 ~ 100 Ȧ�����
/*
void main(void)
{
	for (int i = 1; i < 100; i=i+2)
	{
		printf("%d ", i);
	}
 }
*/

// 3��) 1 ~ 100 ¦�����
void main(void)
{
	for (int i = 100; i > 1; i = i - 2)
	{
		printf("%d ", i);
	}
}