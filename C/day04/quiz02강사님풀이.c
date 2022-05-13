#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num1, num2, num3;

	printf("정수 3개를 입력 : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	/*
		num1 > num2 > num3
		num1 > num3 > num2
		num2 > num1 > num3
		num2 > num3 > num1
		num3 > num1 > num2
		num3 > num2 > num1
	*/

	/* 방법1
	if (num1 > num2 && num2 < num3)
	{
		printf("%d%d%d\n", num1, num2, num3)	// 방식만 적은거고 이거 정답 아님.
	}
	*/

	/* 내가 풀은 방법이랑 같다.
	if (num1 > num2)
	{
		if (num1 > num3)	// num1 (num2, num3의 크기 알 수 X)
		{
			if (num2 > num3)
			{
				printf("%d %d %d\n", num1, num2, num3);
			}
			else
			{
				printf("%d %d %d\n", num1, num3, num2);
			}
		}
		else	// num3 > num1 > num2
		{
			printf("%d %d %d\n", num3, num1, num2);
		}
	}
	else	// num2 > num1
	{
		printf("... day03의 quiz05.c 에서 내가 푼거랑 100% 일치. 난 천잰가봐!!")
	}
	*/

	//  방법3. 와 소름 first, second에 넣듯이 넣은것도 세번째 풀이임
}