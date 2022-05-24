#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // for strlen()
#include<stdlib.h> // for malloc()

char *revsqueeze(char *ps, char c);

int main(void)
{
	char c, s[80];
	int i = 0;
	// result 선언
	char *result;

	while ((s[i++] = getchar()) != '\n'); // null 문장
	s[--i] = '\0';
	c = getchar();	// 지우고 싶은 글자 받기
	result = revsqueeze(s, c); // 함수 콜
	printf("result = %s\n", result);
	return 0;
}

// revsqueeze 앞에 *가 있는거면 > 주소값을 리턴시켜 준다는 것. 저게 없다면 그냥 값을 리턴하는거.
char *revsqueeze(char *ps, char c)	// revsqueeze 함수 정의
{
	int len, i = 0, j = 0;
	// temp 선언
	char *temp;

	len = strlen(ps);
	ps = ps + len - 1;
	temp = (char*)malloc(len + 1); // 결과 문자열을 저장할 공간 생성
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
	// loop 에서 빠져 나와서 마지막 요소에 NULL 채워 넣을 것
	return temp;
}
