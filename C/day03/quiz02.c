#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1. 2���� ������ �Է¹޾� ���� ū ���� ���
2. 4���� ������ �Է¹޾� ���� ���� ���� ���
*/

void main(void)
{
	int a, b, c, d, max1, max2;

	printf("4���� ������ �Է��Ͻÿ� : ");
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
		printf("���� ū ���� %d �Դϴ�.", max1);
	}
	else
	{
		printf("���� ū ���� %d �Դϴ�.", max2);
	}
}