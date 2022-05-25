#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define NUM 1
#define CHARCT 2

int numcmp(const char*, const char*);
int (*fcmp(char*, char*))(const char*, const char*);

int main(void)
{
	char s[80], t[80];
	int (*ptr)(const char *, const char *);

	// ���� ���� / ���� �ΰ��� �޾ƿ´�.
	scanf("%s %s", s, t);

	// ptr�� �Լ�
	ptr = fcmp(s, t);
	printf("%d\n", ptr(s,t));
	return 0;
}

// ���� ��. ���ڴ� #include <string.h>�� �ִ� strcmp�� ��� �ҰŴ�!
int numcmp(const char *ps, const char *pt)
{
	float a, b;
	// atof : ���ڿ��� �Ǽ��� �ٲ���.
	a = atof(ps);
	b = atof(pt);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int (*fcmp(char *ps, char *pt))(const char*, const char*)
{
	int cond;
	cond = NUM;

	if (*ps == '-')
		ps++;
	while (cond == NUM && *ps != NULL)
		if (isdigit(*ps) || *ps == '.')
			ps++;
		else
			cond = CHARCT;

	// pt �Ǵ��ϴ� �κ�
	if (*pt == '-')
		pt++;
	while (cond == NUM && *pt != NULL)
		if (isdigit(*pt) || *pt == '.')
			pt++;
		else
			cond = CHARCT;
	// ps�� pt�� ��� ���� ���ڿ� �̸� numcmp �Լ� ����
	// �׷��� ������ strcmp �Լ� ����
	if (cond == NUM)
	{
		return numcmp;
	}
	else
	{
		return strcmp;
	}
	/*
		<numcmp�� ���>
		num1 > num2 ��  1
		num1 < num2 �� -1
		num1 = num2 �� 0

		<strcmp�� ���>
		str1 > str2 �� 1
		str1 < str2 �� -1
		str1 = str2 �� 0
	*/
}