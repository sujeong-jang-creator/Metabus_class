#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_puts(const char* ptr)
{
	/*
	int i = 0;
	while (ptr[i] != '\0')
	{
		putchar(ptr[i++]);
	}
	*/

	while (*ptr != '\0')
		putchar(*ptr++);

	putchar('\n');
}

void my_gets(char* ptr)
{
	char ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
	{
		ptr[i++] = ch;
	}

	/*
	ch = getchar();
	while (ch != '\n')
	{
		ptr[i++] = ch;
		ch = getchar();
	}
	*/

	ptr[i] = '\0';
}

void main(void)
{
	char str[10] = "Hello";

	printf("문자열을 입력 : ");
	//	gets(str);
	my_gets(str);

	//	printf("%s\n", str);
	//	puts(str);
	my_puts(str);
}