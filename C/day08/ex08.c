#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main(void)
{

	char str1[10] = "banana";
	char str2[10] = "boat";
	char str3[10] = "apple";

	char min[10], max[10];
	if (strcmp(str1, str2) < 0)
	{
		strcpy(min, str1);
		strcpy(max, str2);
	}
	else
	{
		strcpy(min, str1);
		strcpy(max, str2);
	}

	if (strcmp(str3, min) < 0)
		printf("%s  %s  %s\n", str3, min, max);
	else if (strcmp(str3, max) < 0)
		printf("%s  %s  %s\n", min, str3, max);
	else
		printf("%s  %s  %s\n", min, max, str3);

	/*
	int a = 10, b = 3, c = 23;

	int min = a, max = b;
	if (a > b)
	{
		min = b;
		max = a;
	}
	if (min > c)
		printf("%d < %d < %d\n", c, min, max);
	else if (max > c)
		printf("%d < %d < %d\n", min, c, max);
	else
		printf("%d < %d < %d\n", min, max, c);
	*/
}