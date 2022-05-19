#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(const int* ptr);

void init_zero(int* const ptr)
{
	for (int i = 0; i < 5; i++)
	{
		ptr[i] = 0;
		//	*ptr++ = 0;
	}
}

void main(void)
{
	int ar[5] = { 10, 20, 30, 40, 50 };

	init_zero(ar);

	print(ar);
}


void print(const int* ptr)
{
	for (int i = 0; i < 5; i++)
		printf("%5d", ptr[i]);
	printf("\n");
}