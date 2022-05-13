#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	for (int i = 1; i < 10; i = i + 2)
	{
		char star = "\*";
		printf("%c", i * star);
	}
}