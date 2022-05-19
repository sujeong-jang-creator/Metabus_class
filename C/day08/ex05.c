#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "my_string.h"
void main(void)
{
	char str[255];

	printf("문자열 입력 : ");
	gets(str);	// "Hello World!!!"

//	int len = strlen(str);
	int len = my_strlen(str);

	printf("sizeof(str) : %d\n", sizeof(str));	// 255
	printf("[%s] 길이 : %d\n", str, len);


}