#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int mystrcmp(char s[], char t[]) // mystrcmp 함수 정의
{
	int i = 0, len;
	len = (strlen(s) <= strlen(t) ? strlen(s) : strlen(t));	// 길이가 작은 문자열의 길이만큼 내용을 하나씩 비교

	// 둘이 글자가 다른 곳을 찾아!
	while (i < len)
	{
		if (s[i] != t[i])
		{
			break;
		}
		i++;
	}

	// 1, 0, -1출력
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
		s[--i] = '\0';	// 이거 안하면 80칸 중 글씨 없는 것들에 이상한게 출력됨
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