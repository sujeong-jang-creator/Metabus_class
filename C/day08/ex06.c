#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "my_string.h"
void main(void)
{
	char str[255] = "2354673456783456783456789";
	char str2[255] = "Hello world";

	printf("str  : [%s]\n", str);
	printf("str2 : [%s]\n", str2);

	strcpy(str, str2);
	if (sizeof(str) > strlen(str2))
		my_strcpy(str, str2);

	printf("strcpy()...\n");
	printf("str  : [%s]\n", str);
	printf("str2 : [%s]\n", str2);
}