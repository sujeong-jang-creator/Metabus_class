#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	2 - 100 ������ ���� �Է� : 68

	< 68�� ��� ��� >
	1 2 4 17 34 68
	����� �� ���� 6��
*/

void main(void)
{
	int num;

	printf("2 - 100 ������ ���� �Է� : ");
	scanf("%d", &num);

	if (num >= 2 && num <= 100)
	{
		printf("\n<%d�� ��� ���>\n", num);
		int cnt = 0;
		for (int i = 1; i <= 100; i++)
		{
			if (num % i == 0)
			{
				printf("%d ", i);
				cnt++;
			}
		}
		printf("\n����� �� ������ : %d ��", cnt);
	}
	else
	{
		printf("\n�ùٸ� ���� �Է��ϼ���.");
	}
}