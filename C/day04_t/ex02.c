/*
	2 - 10������ ���� �Է� : 6

	< 1 ~100������ 6�� ��� ��� >
	6  12  18  24  .. 96

	6   12  18  24  30
	36  42  48
*/

#include <stdio.h>
void main(void)
{
	int num;

	printf("2 - 10������ ���� �Է� : ");
	scanf("%d", &num);

	printf("< 1 ~ 100 ������ %d��� ��� >\n", num);

	int cnt = 0;
	for (int i = num; i <= 100; i += num)
	{
		printf("%5d", i);
		cnt++;
		if (cnt % 5 == 0)
		{
			printf("\n");
		}
	}

	/*
	for (int i = num; i <= 100; i++)
	{
		if (i % num == 0)
		{
			printf("%5d", i);
		}
	}
	*/
	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % num == 0)
		{
			printf("%5d", i);
		}
	}
	*/
}