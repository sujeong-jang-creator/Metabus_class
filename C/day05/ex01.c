#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	배열 : 연속적인 공간에 같은 타입의 변수가 고정된 개수만큼 모아놓은 집합
*/

void main(void)
{
	// 정수를 5개 모아놓은 배열 ar 선언;
	int ar[5];	// ar[0] ~ ar[4]

	// 5개의 변수를 키보드 입력
	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 정수 : ", i + 1);
		scanf("%d", &ar[i]);
	}
	printf("%3d%3d%3d%3d%3d\n",
		ar[0], ar[1], ar[2], ar[3], ar[4]);

	/*
	// 5개의 변수가 각각 10 ~ 50의 숫자를 대입
	for (int i = 0; i < 5; i++)
	{
		ar[i] = (i + 1) * 10;
	}

	printf("%3d%3d%3d%3d%3d\n",
		ar[0], ar[1], ar[2], ar[3], ar[4]);
	*/
}