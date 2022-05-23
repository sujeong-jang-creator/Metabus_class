#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int mystrcmp(char s[], char t[]) // mystrcmp �Լ� ����
{
	int i = 0, len;
	len = (strlen(s) <= strlen(t) ? strlen(s) : strlen(t));	// ���̰� ���� ���ڿ��� ���̸�ŭ ������ �ϳ��� ��

	// ���� ���ڰ� �ٸ� ���� ã��!
	while (i < len)
	{
		if (s[i] != t[i])
		{
			break;
		}
		i++;
	}

	// 1, 0, -1���
	if (s[i] > t[i])
	{
		return 1;
	}
	else if (s[i] < t[i])
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

void main(void)
{
	char s[80], t[80];
	int i = 0, j = 0, result=0;

	while ((s[i++] = getchar()) != '\n');
	{
		s[--i] = '\0';	// �̰� ���ϸ� 80ĭ �� �۾� ���� �͵鿡 �̻��Ѱ� ��µ�
	}
	while ((t[j++] = getchar()) != '\n');
	{
		t[--j] = '\0';
	}

	//printf("%s \n%s", s, t);

	result = mystrcmp(s, t);
	printf("return : %d" , result);
	return 0;
}