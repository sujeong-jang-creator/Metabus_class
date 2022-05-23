#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void midstr(char[], int, int); // midstr 함수 선언

int main(void)
{
	char str[80];
	int a, b;

	scanf("%s %d %d", str, &a, &b);
	midstr(str, a, b); // 함수 콜

	printf("결과 문자열은 %s 입니다\n", str);
	return 0;
}

void midstr(char s[], int a, int b) // midstr 함수 정의
{
	if (a > strlen(s))
	{
		printf("첫번째 숫자값이 잘못 입력되었습니다.");
		exit(1);	// 비정상 종료
	}
	else if (b > strlen(s) - a)
	{
		printf("두번째 숫자값이 잘못 입력되었습니다.");
		exit(1);
	}
	int i;
	for (i = 0; i < b; i++)
	{
		s[i] = s[a - 1+ i];
	}
	s[i] = '\0';	// 공백 넣기
}