#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 divide by zero 라고함. 0으로 나누면!
*/

void main(void)
{
	int num, div;

	printf("첫번째 정수 : ");
	scanf("%d", &num);

	printf("두번째 정수 : ");
	scanf("%d", &div);


	if (div != 0 && num % div == 0)		// div의 값이 0이 아니고 num % div 가 0인 것. 순서가 바뀌면 안되지!
	{									// day 03 의 내가 풀은 답(quiz04.c)이 완전 찐 정답이다!! 굳!!
		printf("%d는 %d의 배수입니다.\n", num, div);
	}
	else
	{
		printf("%d는 %d의 배수가 아닙니다.\n", num, div);
	}
}