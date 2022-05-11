#include <stdio.h>

void main(void)
{
	// 초 계산 프로그램
	int sec, min;

	printf("몇 초를 계산해 드릴까요? : ");
	scanf("%d", &sec);

	min = sec / 60;
	sec = sec - min * 60;

	printf("%d분 %d초", min, sec);
}