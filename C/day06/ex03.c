#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	ȣ�����Լ��� ���� ���� 2���� �Ѱ��ָ�
	ũ�⸦ ���Ͽ� ū ���� ȣ�����Լ����� ����
*/

// get_max �Լ��� ȣ���� �Լ��� ���� 2�� �Ѱ��ָ� � �ൿ�� �� �� ������ �ϳ��� �����Ѵٴ� �ǹ�
int get_max(int num, int num2)
{
	// int max = num > num2 ? num : num2;
	int max;
	if (num > num2)
	{
		max = num;
	}
	else
		max = num2;

	return max;
}

/*
	Ű���忡�� �ϳ��� ������ �Է¹޾�
	ȣ���� �Լ����� �����ϴ� ���
*/
int get_number(void)
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);
	while (getchar() != '\n');

	return num;
}

void prn_result(int num, int num2, int max)
{
	printf("%d, %d �� ū �� : %d\n", num, num2, max);
}

void main(void)
{
	int num = get_number();
	int num2 = get_number();

	int max = get_max(num, num2);

	prn_result(num, num2, max);

	// prn_max(num, num2);
}