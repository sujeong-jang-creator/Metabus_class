#include <stdio.h>

void main(void)
{
	// 초 계산 프로그램
	int sec, min, hour;

	printf("몇 초를 계산해 드릴까요? : ");
	scanf("%d", &sec);

	min = sec / 60;
	sec = sec - min*60;
	hour = min / 60;
	min = min - hour * 60;

	printf("%d시간 %d분 ,%d초", hour, min, sec);
}

/*
강사님 방법

 sec_ori = sec;
 int hour = sec / (60 * 60);
 sec = sec % (60 * 60);
 int min = sec / 60;
 sec = sec % 60;

 printf("%d초 : %d시간 %d분 ,%d초", sec_ori, hour, min, sec);

*/