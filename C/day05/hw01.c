#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	1. 짝수 10개를 입력받아 출력하는 코드를 작성
	num1 : 10
	num2 : 34
	num3 : 5
	// 짝수가 아니면 다시 입력받는거
	num3 : 20
	num4 : 42
	num5 : 6
	num6 : 9
	num6 : 11
	num6 : 22
	num7 : 4
	num8 : 26
	num9 : 10
	num10 : 8

	<PRINT>
	10 34 20 42 6 22 4 26 10 8
*/
void main(void)
{
	int nums[10];

	for (int i = 0; i < 10; i++)
	{
		printf("num[%d] : ", i+1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 == 0)
		{
			continue;
		}
		else
		{
			while (1)
			{
				printf("잘못된 값을 입력하셨습니다. 다시 입력해 주세요. \n");
				printf("num[%d] : ", i+1);
				scanf("%d", &nums[i]);
				if (nums[i] % 2 == 0)
				{
					break;
				}
			}
		}
	}
	printf("<PRINT>\n");
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d", nums[0], nums[1], nums[2], nums[3],
		nums[4], nums[5], nums[6], nums[7], nums[8], nums[9]);
}