#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	1. ¦�� 10���� �Է¹޾� ����ϴ� �ڵ带 �ۼ�
	num1 : 10
	num2 : 34
	num3 : 5
	// ¦���� �ƴϸ� �ٽ� �Է¹޴°�
	num3 : 20
	num4 : 42
	num5 : 6
	num6 : 9
	num6 : 11
	num6 : 22
	num7 : 4
	num8 : 26
	num9 : 10
	num10 : 8

	<PRINT>
	10 34 20 42 6 22 4 26 10 8
*/
void main(void)
{
	int nums[10];

	for (int i = 0; i < 10; i++)
	{
		printf("num[%d] : ", i+1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 == 0)
		{
			continue;
		}
		else
		{
			while (1)
			{
				printf("�߸��� ���� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���. \n");
				printf("num[%d] : ", i+1);
				scanf("%d", &nums[i]);
				if (nums[i] % 2 == 0)
				{
					break;
				}
			}
		}
	}
	printf("< PRINT >\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%5d", nums[j]);
	}
}