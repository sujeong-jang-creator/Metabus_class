#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"

void set_min(int num, int num2, int *p_min);
void set_max(int num, int num2, int *p_max);
void set_min_max(int num, int num2, int *p_min, int *p_max);
void print(int min, int max);

void main(void)
{
	int num, num2;
	int min, max;

	printf("첫번째 정수 : ");
	num = scan_int();

	printf("두번째 정수 : ");
	num2 = scan_int();

	//min = get_min(num, num2);
	//set_min(num, num2, &min);
	//set_max(num, num2, &max);

	set_min_max(num, num2, &min, &max);

	print(min, max);
}

void print(int min, int max)
{
	printf("작은수 : %d  큰 수 : %d \n", min, max);
}

void set_min_max(int num, int num2, int* p_min, int* p_max)
{
	if (num < num2)
	{
		*p_min = num;
		*p_max = num2;
	}
	else
	{
		*p_min = num2;
		*p_max = num;
	}
}

void set_min(int num, int num2, int* p_min)
{
	if (num < num2)
	{
		*p_min = num;
	}
	else
	{
		*p_min = num2;
	}
}

void set_max(int num, int num2, int* p_max)
{
	if (num < num2)
	{
		*p_max = num2;
	}
	else
	{
		*p_max = num;
	}
}
