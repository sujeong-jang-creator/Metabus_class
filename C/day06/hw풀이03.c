#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total;
	printf("1 - 365 : ");
	scanf("%d", &total);
	int month = 1;
	int day = total;

	while(day > days[month]);
	{
		day = day - days[month];
		++month;
	}

	printf("1/1 + %d일 = %d/%d/\n", total, month, day)
	// 100일 => (1월 + 2월 + 3월) + 10일
}