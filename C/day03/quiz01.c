#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
1. 2���� ������ �Է¹޾� ���� ū ���� ���
2. 4���� ������ �Է¹޾� ���� ���� ���� ���
*/

void main(void)
{
	int a, b;

	printf("2���� ������ �Է��Ͻÿ� : ");
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