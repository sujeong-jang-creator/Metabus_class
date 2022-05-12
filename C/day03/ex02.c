#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1~3 사이의 정수 입력 :
	1 입력시 "ONE" 출력
	2 입력시 "TWO" 출력
	3 입력시 "THREE" 출력
	1~3가 아닌 정수 입력시 "ERROR" 출력
*/

void main(void)
{
	int num;

	printf("1 - 3사이의 정수 : ");
	scanf("%d", &num);

	// switch 에서 {블럭스코프}는 의미가 없다!
	switch (num)
	{
	// num 이 1인경우
	case 1:
		printf("ONE\n");
		break;
	// num 이 2인경우
	case 2:
		printf("TWO\n");
		break;
	// num 이 3인경우
	case 3:
		printf("THREE\n");
		break;
	// 위의 케이스를 다 만족하지 않은 경우를 default 라고 함.
	default:
		printf("ERROR\n");
		break;
	}

	/*
	위 switch 식이랑 같은 건데 if 문으로 표현한 것
	if (num == 1)
	{
		printf("ONE\n");
	}
	else if (num == 2)
	{
		printf("TWO\n");
	}
	else if (num == 3)
	{
		printf("THREE\n");
	}
	else
	{
		printf("ERROR\n");
	}
	*/
}