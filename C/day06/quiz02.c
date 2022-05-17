#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	main 함수 1개
	get_number 함수 1개 : 숫자 입력 받는 함수
	get_max 함수 1개 : 크기 비교해주는 함수
	prn_result 함수 1개 : 답 출력해주는 함수
*/

// 숫자 입력받기
int get_number(void)
{
	int num;

	printf("숫자 두개를 입력해 주세요 : ");
	scanf("%d", &num);
	while (getchar() != '\n');

	return num;
}

// 숫자 크기 비교하기
int get_max(int num, int num2)
{
	int max;

	if (num > num2)
	{
		max = num;
	}
	else
	{
		max = num2;
	}

	return max;
}

void prn_result(int max, int num, int num2)
{
	printf("%d, %d 중 큰 수는 : %d\n", max, num, num2);
}

void main(void)
{
	// 1. 두 숫자 입력 받기
	int num = get_number();
	int num2 = get_number();
	// 2. 숫자 크기 비교하기
	int max = get_max(num, num2);
	// 3. 답 출력하기
	prn_result(max, num, num2);
}