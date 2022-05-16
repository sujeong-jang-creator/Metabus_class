#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	岿 : 4
	老 : 10
	1/1 ~ 4/10 : 100老

	岿 : 12
	老 : 30
	1/1 ~ 12/30 : 364老

	岿 : 1
	老 : 1
	1/1 ~ 1/1 : 1老
*/
void main(void)
{
	int month, day;
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("岿 : ");
	scanf("%d", &month);
	printf("老 : ");
	scanf("%d", &day);

	int total = 0;
	for (int i = 1; i < month; i++)
	{
		// 1/1 ~ month/day => (1岿 + 2岿 + ... + (month-1)岿) + day
		total = total + days[i];
	}
	total += day;

	printf("1/1 ~ %d/%d : %d老\n", month, day, total);
}