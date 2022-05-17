#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func()
{
	printf("C\n");
	return;
	printf("D\n");
}

void main(void)
{
	printf("A\n");
	func();
	printf("B\n");
}