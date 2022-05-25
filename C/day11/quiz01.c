#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// isdigit  �� ctype.h�� ����
#include <ctype.h>
#include <string.h>
// atof �� stdlib.h�� �ִ�
#include <stdlib.h>

//��ũ�η� ����
#define NUM 1
#define CHARCT 2

int numcmp(const char*, const char*);	// �Լ� numcmp ����
//void fcmp(int (**p)(const char*, const char*), char*, char*);	// �Լ� fcmp ����
// �� �ּ�ó�� �ᵵ �ǰ�, ���⼭ ��ŭ�� (**p) �����ص� �����ϴ�. �ؿ� ó��.
void fcmp(int (const char*, const char*), char*, char*);	// �Լ� fcmp ����

int main(void)
{
	char s[80], t[80];
	int (*ptr)(const char *, const char *);		// ���� ptr ���� : ptr�� ����Ű�� ���� �ٲ��� �ʴ� ���ڿ� �ΰ��� ���ڷ� �ϴ� �Լ��� �ִ�.

	// ���� ���� / ���� �ΰ��� �޾ƿ´�.
	scanf("%s %s", s, t);

	// �Լ��� ���� �ּҰ�, s, t�� �ش�.
	fcmp(&ptr, s, t); // �Լ� fcmp ���Ѵ�.
	printf("%d\n", ptr(s, t));
	return 0;
}

// ���� ��. ���ڴ� #include <string.h>�� �ִ� strcmp�� ��� �ҰŴ�!
int numcmp(const char* ps, const char* pt)
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

// ptr�� �Լ� �� ���ϳ��� �־���� �ϴϱ� �� ���� ��ĭ �� �ö󰡼� �����ؾ���. p�� �ּҰ��� numcmp, strcmo�� �־������. p�� ���� ����.
// ptr�� ���� ���� p�� ǥ��. �ֳĸ� �ؿ��� p�� ���� �־�� �ϴϱ�.
void fcmp(int (**p)(const char*, const char*), char* ps, char* pt)
{
	// ps �Ǵ��ϴ� �κ�
	// cond �� �����! ��װ� �������� �������� ������ �����Դ�.
	int cond;
	cond = NUM;
	// s ���ڹ迭 �տ� '-'�� ���� �� ���� �� �о�.
	if (*ps == '-')
		ps++;
	// s, t�迭�� ���°� ���ڸ� 1(NUM), �ƴϸ� �� ���ڸ� 2(NUM)
	// ps�� ����Ű�� ���� ������� ������ ��� �ݺ��ؼ� �о�.
	while (cond == NUM && *ps != NULL)
		// isdigit �Լ��� ���ڰ� �ƴҽÿ� 0, ���ڸ� ���ڰ� ������.
		if (isdigit(*ps) || *ps == '.')
			ps++;
		// �����϶�
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
		*p = numcmp;
	}
	else
	{
		*p = strcmp;
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