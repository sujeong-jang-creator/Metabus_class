#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void rev_str(char* str)
{
	/*
	char buf[255];
	int loc = 0;
	int len = strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		if (isalpha(str[i]))
			buf[loc++] = toupper(str[i]);
	}
	buf[loc] = '\0';
	strcpy(str, buf);
	*/

	char buf[255];
	int loc = 0;
	int len = strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			buf[loc++] = str[i];
			printf("%c", str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			buf[loc++] = str[i] - 32;
			printf("%c", str[i] - 32);
		}
	}
	buf[loc] = '\0';
	strcpy(str, buf);
	printf("\n");
}

void main()
{
	char str[255];
	printf("Input string : ");
	gets(str);

	printf("str : [%s]\n", str);

	rev_str(str);
	printf("str : [%s]\n", str);
}