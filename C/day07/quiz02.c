#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"
/*
	���� 5���� �Է¹޾� ������ ���� ����ϴ� �ڵ带 �ۼ�
	num1 : 45
	num2 : 9
	num3 : 10
	num4 : 72
	num5 : 30

	< PRINT >
	3	27	1	90	54 << �Ųٷ� �о���� ���� ����� �б�
*/
void print(int* nums);

void main(void)
{
	int nums[5];

	// 1. ���� 5�� �Է¹ޱ�
	for (int i = 0; i < 5; i++)
	{
		printf("num%d : ", i + 1);
		nums[i] = scan_int();
	}

	// 2. ��ġ �ٲ㼭 ����ϱ�
	print(nums);
}

void print(int *nums)
{
	printf("\n< PRINT >\n");
	for (int i = 4; i >= 0; i--)
	{
		int n1 = nums[i] % 10;
		int n10 = nums[i] / 10;
		printf("%5d", n1 * 10 + n10);
	}
}
