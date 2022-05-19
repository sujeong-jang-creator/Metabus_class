#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rev_prn(int* ptr)
{
	for (int i = 4; i >= 0; i--)
	{
		printf("%5d", ptr[i]);
	}
	printf("\n");
}

void reverse_prn(int* ptr)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", *(ptr - i));
		//		printf("%5d", ptr[-i]);
	}
	printf("\n");
}


void print01(int* ptr)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", ptr[i]);  // *(ptr+i)
	}
	printf("\n");
}

void print(int* ptr)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", *ptr++);
	}
	printf("\n");
}
void main(void)
{
	int ar[5] = { 10, 20, 30, 40, 50 };

	print(ar);
	//	print01(ar);

	//	reverse_prn( &ar[4]);
	//	rev_prn(ar);
}