#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	10���� ������ �Է¹޾� ������ ���� ���
	 num1 : 34
	 num2 : 3
	 num3 : 12
	 num4 : 5
	 num5 : 23
	 num6 : 340
	 num7 : 94
	 num8 : 5
	 num9 : 11
	 num10 : 45

	 <¦��>
	 34 12 340 92
	 <Ȧ��>
	 3 5 23 5 11 45
*/
void main(void)
{
	//int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };	// �̷� ���·ε� ����. �迭�� �ʱ�ȭ
	//int nums[10] = {0, 0, 0, 0, 0, 0, };	// �̷� ���·ε� ����. ���ʿ��� 0�� ���� ������ ����
	int ar[10];

	for (int i = 0; i < 10; i++)
	{
		printf("num %d : ", i+1);
		scanf("%d", &ar[i]);
	}
	printf("< ¦�� > \n");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 == 0)
		{
			printf("%5d", ar[i]);
		}
	}
	printf("\n< Ȧ�� > \n");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 != 0)
		{
			printf("%5d", ar[i]);
		}
	}
}
