#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	// 괄호안에 적힌 조건이 거짓이 될때까지 반복
	
	printf("[start]========================\n");

	// for 문
	for (int cnt = 1; cnt <= 5; ++cnt)
	{
		printf("Hello\n");
	}
	// printf("cnt = %d\n", cnt);	하면 cnt가 없다고 나옴. 왜냐면 for 문 안에만 있었기 떄문이지
	// 그러므로 바로 다음에 cnt 를 또 다른걸로 써도 가능함.

	/*
	while 문
	int cnt = 1;

	while (cnt <= 5)
	{
		printf("Hello %d\n", cnt);

		++cnt;
	}
	printf("cnt = %d\n", cnt);
	*/

	printf("[e n d]========================\n");
}