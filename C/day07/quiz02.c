#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"
/*
	정수 5개를 입력받아 다음과 같이 출력하는 코드를 작성
	num1 : 45
	num2 : 9
	num3 : 10
	num4 : 72
	num5 : 30

	< PRINT >
	3	27	1	90	54 << 거꾸로 읽어오고 숫자 뒤집어서 읽기
*/
void print(int* nums);

void main(void)
{
	int nums[5];

	// 1. 정수 5개 입력받기
	for (int i = 0; i < 5; i++)
	{
		printf("num%d : ", i + 1);
		nums[i] = scan_int();
	}

	// 2. 위치 바꿔서 출력하기
	print(nums);
}

void print(int *nums)
{
	printf("\n< PRINT >\n");
	for (int i = 4; i >= 0; i--)
	{
		int n1 = nums[i] % 10;
		int n10 = nums[i] / 10;
		printf("%5d", n1 * 10 + n10);
	}
}
