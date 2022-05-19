#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main(void)
{
	char str[255] = "Hello world";
	char str2[255] = "good-bye";

	printf("str : [%s]\n", str);
	printf("str2 : [%s]\n", str2);

	strcat(str, str2);
	printf("strcat()...\n");
	printf("str : [%s]\n", str);
	printf("str2 : [%s]\n", str2);
	//---------------------------------

	strcpy(str, "Hello world");
	char sub[10] = "llo";

	char* ptr = strstr(str, sub); // 
	printf("%s\n", ptr);

	char addr[255] = "서울시 서초구 서초동 23-5";
	if (strstr(addr, "강남구"))
	{
		printf("강남구민입니다");
	}
	else
	{
		printf("강남구민이 아닙니다");
	}
}