#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	3. ���۴ܰ� ������� �Է¹޾� �������� ����Ͻÿ�
*/

void main(void)
{
	int a, b, start, end;

	printf("���۴��� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("������� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	if (a > b)
	{
		start = b;
		end = a;
	}
	else
	{
		start = a;
		end = b;
	}
	
	for (int i = start; i <= end; i++)
	{
		printf("*** %d�� *** \n", i);

		for (int j = 1; j <= 9; j++)
		{
			int result = i * j;
			printf(" %d * %d = %d\n", i, j, result);
		}
	}
}