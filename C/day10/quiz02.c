#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void midstr(char[], int, int); // midstr �Լ� ����

int main(void)
{
	char str[80];
	int a, b;

	scanf("%s %d %d", str, &a, &b);
	midstr(str, a, b); // �Լ� ��

	printf("��� ���ڿ��� %s �Դϴ�\n", str);
	return 0;
}

void midstr(char s[], int a, int b) // midstr �Լ� ����
{
	if (a > strlen(s))
	{
		printf("ù��° ���ڰ��� �߸� �ԷµǾ����ϴ�.");
		exit(1);	// ������ ����
	}
	else if (b > strlen(s) - a)
	{
		printf("�ι�° ���ڰ��� �߸� �ԷµǾ����ϴ�.");
		exit(1);
	}
	int i;
	for (i = 0; i < b; i++)
	{
		s[i] = s[a - 1+ i];
	}
	s[i] = '\0';	// ���� �ֱ�
}