#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	10개의 정수를 입력받아 다음과 같이 출력
	 num1 : 34
	 num2 : 3
	 num3 : 12
	 num4 : 5
	 num5 : 23
	 num6 : 340
	 num7 : 94
	 num8 : 5
	 num9 : 11
	 num10 : 45

	 <짝수>
	 34 12 340 92
	 <홀수>
	 3 5 23 5 11 45
*/
void main(void)
{
	//int nums[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };	// 이런 형태로도 가능. 배열의 초기화
	//int nums[10] = {0, 0, 0, 0, 0, 0, };	// 이런 형태로도 가능. 뒤쪽에서 0의 갯수 몰를때 이유
	int ar[10];

	for (int i = 0; i < 10; i++)
	{
		printf("num %d : ", i+1);
		scanf("%d", &ar[i]);
	}
	printf("< 짝수 > \n");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 == 0)
		{
			printf("%5d", ar[i]);
		}
	}
	printf("\n< 홀수 > \n");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 != 0)
		{
			printf("%5d", ar[i]);
		}
	}
}
