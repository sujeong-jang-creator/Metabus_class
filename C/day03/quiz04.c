#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	1번
	첫번째 정수 : 10
	두번째 정수 : 4
	10은 4의 배수가 아닙니다

	첫번째 정수 : 12
	두번째 정수 : 4
	12는 4의 배수입니다.

	첫번째 정수 : 12
	두번째 정수 : 0
	런타입 오류발생... 해결코드 작성
*/


// 첫번째 정수가 두번째 정수보다 크지 않아도 된다면 이거
/*
void main(void)
{
	int a, b;

	printf("첫번째 정수 : ");
	scanf("%d", &a);

	printf("두번째 정수 : ");
	scanf("%d", &b);

	if (b == 0)
	{
		// 0으로 나누게 되면 몫이 얼마인지 알 수 없으므로
		printf("나누는 값은 0이 될 수 없습니다. ");
	}
	else
	{
		if (a % b == 0)
		{
			printf("%d는 %d의 배수입니다. ", a, b);
		}
		else
		{
			printf("%d는 %d의 배수가 아닙니다. ", a, b);
		}
	}
}
*/

// 첫번째 정수가 두번째 정수보다 커야한다면
void main(void)
{
	int a, b;

	printf("첫번째 정수 : ");
	scanf("%d", &a);

	printf("두번째 정수 : ");
	scanf("%d", &b);

	if (a > b)
	{
		if (b == 0)
		{
			printf("나누는 값은 0이 될 수 없습니다. ");
		}
		else
		{
			if (a % b == 0)
			{
				printf("%d는 %d의 배수입니다. ", a, b);
			}
			else
			{
				printf("%d는 %d의 배수가 아닙니다. ", a, b);
			}
		}
	}
	else
	{
		printf("첫번째 정수가 두번째 정수보다 커야 합니다. ");
	}	
}
