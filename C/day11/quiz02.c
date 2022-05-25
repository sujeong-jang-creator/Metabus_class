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

	// 비교할 문자 / 숫자 두개를 받아온다.
	scanf("%s %s", s, t);

	// ptr은 함수
	ptr = fcmp(s, t);
	printf("%d\n", ptr(s,t));
	return 0;
}

// 숫자 비교. 문자는 #include <string.h>에 있는 strcmp를 사용 할거다!
int numcmp(const char *ps, const char *pt)
{
	float a, b;
	// atof : 문자열을 실수로 바꿔줌.
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

	// pt 판단하는 부분
	if (*pt == '-')
		pt++;
	while (cond == NUM && *pt != NULL)
		if (isdigit(*pt) || *pt == '.')
			pt++;
		else
			cond = CHARCT;
	// ps와 pt가 모두 숫자 문자열 이면 numcmp 함수 연결
	// 그렇지 않으면 strcmp 함수 연결
	if (cond == NUM)
	{
		return numcmp;
	}
	else
	{
		return strcmp;
	}
	/*
		<numcmp의 경우>
		num1 > num2 면  1
		num1 < num2 면 -1
		num1 = num2 면 0

		<strcmp의 경우>
		str1 > str2 면 1
		str1 < str2 면 -1
		str1 = str2 면 0
	*/
}