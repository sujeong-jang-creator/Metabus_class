#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // for strlen()
#include<stdlib.h> // for malloc()

char *revsqueeze(char *ps, char c);

int main(void)
{
	char c, s[80];
	int i = 0;
	// result ����
	char *result;

	while ((s[i++] = getchar()) != '\n'); // null ����
	s[--i] = '\0';
	c = getchar();	// ����� ���� ���� �ޱ�
	result = revsqueeze(s, c); // �Լ� ��
	printf("result = %s\n", result);
	return 0;
}

// revsqueeze �տ� *�� �ִ°Ÿ� > �ּҰ��� ���Ͻ��� �شٴ� ��. ���� ���ٸ� �׳� ���� �����ϴ°�.
char *revsqueeze(char *ps, char c)	// revsqueeze �Լ� ����
{
	int len, i = 0, j = 0;
	// temp ����
	char *temp;

	len = strlen(ps);
	ps = ps + len - 1;
	temp = (char*)malloc(len + 1); // ��� ���ڿ��� ������ ���� ����
	while (i < len)
	{
		if (*ps != c)
		{
			*(temp + j) = *ps;
			j = j + 1;
		}
		else
			;
		i = i + 1;
		ps = ps - 1;	// ps--;
	}
	*(temp + j) = '\0';
	// loop ���� ���� ���ͼ� ������ ��ҿ� NULL ä�� ���� ��
	return temp;
}
