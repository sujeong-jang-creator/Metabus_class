#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	main �Լ� 1��
	get_number �Լ� 1�� : ���� �Է� �޴� �Լ�
	get_max �Լ� 1�� : ũ�� �����ִ� �Լ�
	prn_result �Լ� 1�� : �� ������ִ� �Լ�
*/

// ���� �Է¹ޱ�
int get_number(void)
{
	int num;

	printf("���� �ΰ��� �Է��� �ּ��� : ");
	scanf("%d", &num);
	while (getchar() != '\n');

	return num;
}

// ���� ũ�� ���ϱ�
int get_max(int num, int num2)
{
	int max;

	if (num > num2)
	{
		max = num;
	}
	else
	{
		max = num2;
	}

	return max;
}

void prn_result(int max, int num, int num2)
{
	printf("%d, %d �� ū ���� : %d\n", max, num, num2);
}

void main(void)
{
	// 1. �� ���� �Է� �ޱ�
	int num = get_number();
	int num2 = get_number();
	// 2. ���� ũ�� ���ϱ�
	int max = get_max(num, num2);
	// 3. �� ����ϱ�
	prn_result(max, num, num2);
}