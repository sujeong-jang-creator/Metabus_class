#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// rand() 사용하기 위해!
#include <stdlib.h>
#include "myheader.h"
/*
	1 - 100 : 37
	37보다 큰 수 입니다.
	기회는 5번 남았습니다

	38 - 100 : 60
	60보다 작은 수 입니다.
	기회는 4번 남았습니다

	38 - 59 : 41
	41보다 큰 수 입니다.
	기회는 3번 남았습니다

	42 - 59 : 50
	50 보다 작은 수 입니다.
	기회는 2번 남았습니다

	42 - 29 : 45
	정답입니다.

	만약 기회 다 쓰면
	아쉽습니다. 기회를 다 소진하셨습니다.
	정답은 [43] 입니다.   >>> 이거를 함수로 만드시오

	만약 1 - 50 : 51 입력하면 다시 입력하기.
*/
void inspect_rlt(int quiz, int* num, int* min, int* max);
int input_num(int min, int max);
int random_num(void);

void main(void)
{
	int min = 1;
	int max = 100;
	int num = 0;
	int cnt = 1;

	int quiz = random_num();

	do
	{
		num = input_num(min, max);
		inspect_rlt(quiz, &num, &min, &max);
		if (quiz != num)
		{
		printf("기회는 %d번 남았습니다.\n", 6 - cnt);
		}
		cnt++;
		if (cnt > 6)
		{
			printf("아쉽습니다. 기회를 다 소진하셨습니다.\n");
			printf("정답은 [%d] 입니다. \n", quiz);
			break;
		}
	} while (quiz != num);
}


// 3. 입력받은 숫자가 범위에 해당하는지 검증 해서 출력 & 몇번 시도했는지 세기
void inspect_rlt(int quiz, int *num, int *min, int *max)
{
	if (quiz < *num)
	{
		printf("%d 보다 작은 수 입니다.", *num);
		*max = *num;
	}
	else if (quiz > *num)
	{
		printf("%d 보다 큰 수 입니다.", *num);
		*min = *num;
	}
	else
	{
		printf("정답입니다.", *num);
	}
}

// 2. 숫자 입력받기
int input_num(int min, int max)
{
	int num;
	do {
		printf("%d - %d : ", min, max);
		num = scan_int();
		if (num < min || num > max)
		{
			printf("범위 내 올바른 값을 입력해 주세요.\n");
		}
	} while (num < min || num > max);

	return num;
}

// 1. 랜덤숫자 생성
int random_num(void)
{
	// 시간을 이용해서 랜덤한 수를 가져옴
	srand((unsigned int)time(NULL));

	int quiz = rand() % 100 + 1;	// (0+1 ~ 99+1) : 100으로 나누면 나머지는 0 ~ 99 까지임. 
									// 그래서 1 ~ 100 사이의 임의의 수 하나 출력하기위해 1을 더함
	return quiz;
}