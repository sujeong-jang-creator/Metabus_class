#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num)
{
	int flag = 0;

	 // 1이면 소수아님, 0이면 소수.
	int cnt = 0;
	for (int num2 = 2; num2 <= num; num2++)
	{
		// 소수아님
		if (num % num2 == 0)
		{
			cnt++;
		}
	}
	if (cnt > 1)
	{
		return 1;
	}
	if (cnt == 1)
	{
		return 0;
	}
	return flag;
}

void main(int grade)
{
	int num, flag;

	for (int num = 2; num <= 100; num++)
	{
		flag = is_prime(num);
		if (flag == 0)
			printf("%d : 소수입니다\n", num);
		else
			printf("%d : 소수가 아닙니다\n", num);
	}
}