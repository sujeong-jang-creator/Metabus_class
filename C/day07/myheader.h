#pragma once
#include <stdio.h>

int scan_int()
{
	int num;

	scanf("%d", &num);
	while (getchar() != '\n');

	return num;
}

char scan_char()
{
	char ch;

	scanf("%c", &ch);
	while (getchar() != '\n');

	return ch;
}