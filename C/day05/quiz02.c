#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�� : 4
	�� : 10
	1/1 ~ 4/10 : 100��

	�� : 12
	�� : 30
	1/1 ~ 12/30 : 364��

	�� : 1
	�� : 1
	1/1 ~ 1/1 : 1��
*/
void main(void)
{
	int month, day;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("�� : ");
	scanf("%d", &month);
	printf("�� : ");
	scanf("%d", &day);

	int total = 0;
	for (int i = 1; i < month; i++)
	{
		// 1/1 ~ month/day => (1�� + 2�� + ... + (month-1)��) + day
		total = total + days[i];
	}
	total += day;

	printf("1/1 ~ %d/%d : %d��\n", month, day, total);
}