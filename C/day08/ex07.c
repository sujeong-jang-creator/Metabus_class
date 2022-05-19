#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "my_string.h"

void main(void)
{
	char str[255] = "Hello";
	char str2[255] = "Hello";

	printf("str  : [%s]\n", str);
	printf("str2 : [%s]\n", str2);

	//	int cmp = strcmp(str, str2);
	int cmp = my_strcmp(str, str2);
	if (cmp == 0)
		printf("%s == %s\n", str, str2);
	else if (cmp > 0)
		printf("%s > %s\n", str, str2);
	else
		printf("%s < %s\n", str, str2);
}