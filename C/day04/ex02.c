#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	2 - 10 ������ ���� �Է� : 6

	< 1~ 100������ 6�� ��� ��� >
	6 12 18 24 ... 96
*/

void main(void)
{
	int num;

	printf("2 - 10 ������ ���� �Է� : ");
	scanf("%d", &num);

	/*
	�ٸ� ���
	for (i=1; i<=100; 1++)
	{
		if (i / num == 0)
		{
			printf("%d", num);
		}
	}
	*/

	if (num >= 2 && num <= 10)
	{
		int cnt = 0;
		for (int i = 1; num * i <= 100; i++)
		{
			printf("%d ", num * i);
			cnt++;
			if (cnt % 5 == 0)
			{
				printf("\n");
			}
		}
	}
	else
	{
		printf("�ùٸ� ���� �Է����ּ���. ");
	}
}