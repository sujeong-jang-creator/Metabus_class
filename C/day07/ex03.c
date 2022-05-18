#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"

int get_min(int num, int num2);
int get_max(int num, int num2);
void print(int min, int max);

void main(void)
{
	int num, num2;

	printf("첫번째 정수 : ");
	num = scan_int();

	printf("두번째 정수 : ");
	num2 = scan_int();

	get_min_max(num, num2);

	//	int min = get_min(num, num2);
	//	int max = get_max(num, num2);

	//	print(min, max);
}

void print(int min, int max)
{
	printf("min : %d, max = %d\n", min, max);
}

int get_max(int num, int num2)
{
	if (num > num2)
		return num;
	else
		return num2;
}

int get_min(int num, int num2)
{
	return num < num2 ? num : num2;
}