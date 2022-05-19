#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void scoring_ans(int* ran, int* num, int* m_strike, int* m_ball);
void input_num(int* num);
void random_num(int *ran);

void main(void)
{
	// 1. 중복되지 않는 랜덤한 숫자 3개를 출력
	int ran[3];
	random_num(ran);
	printf("정답 : %d %d %d\n", ran[0], ran[1], ran[2]);

	int m_strike = 0, m_ball = 0;
	int cnt = 0;
	do
	{
		// 2. 한 자리수 숫자를 입력받음
		int num[3];
		input_num(num);

		// 3. 답 채점 및 시도횟수 추가
		scoring_ans(ran, num, &m_strike, &m_ball);
		cnt++;

		if (m_strike != 3)
		{
			printf("%d strike / %d ball 입니다.\n", m_strike, m_ball - m_strike);
			printf("기회는 %d번 남았습니다.\n", 6 - cnt);
		}
		else
		{
		printf(" ***** 정답입니다 *****\n");
		}
	} while (m_strike != 3 && cnt < 6);
}

// 입력한 숫자가 답과 같은지 채점 후 시도 횟수 추가
void scoring_ans(int* ran, int* num, int *m_strike, int *m_ball)
{
	int strike = 0;
	int ball = 0;

	for (int i = 0; i < 3; i++)
	{
		// strike 경우
		if (ran[i] == num[i])
		{
			strike++;
		}
		for (int j = 0; j < 3; j++)
		{
			if (ran[i] == num[j])
			{
				ball++;
			}
		}
	}
	*m_strike = strike;
	*m_ball = ball;

	//printf("%d strike / %d ball 입니다.\n", strike, ball - strike);
	//printf("기회는 %d번 남았습니다.\n", 6 - cnt);
}

// 한 자리수 숫자 3개 입력받음
void input_num(int *num)
{
	int num1, num2, num3;

	do
	{
	printf("\n중복되지 않는 한 자리수 숫자 3개를 입력하세요 : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	while (getchar() != '\n');
	} while (num1 < 0 || num1 > 9 && num2 < 0 || num2 > 9 && num3 < 0 || num3 > 9 
		|| num1 == num2 || num1 == num3 || num2 == num3);

	num[0] = num1;
	num[1] = num2;
	num[2] = num3;
}

// 랜덤 숫자 3개 출력
void  random_num(int *ran)
{
	
	srand((unsigned int)time(NULL));

	// 세 숫자가 중복되지 않게 처리
	do
	{
		for (int i = 0; i <= 2; i++)
		{
			ran[i] = rand() % 10;	// 1 ~ 9
		}
	} while (ran[0] == ran[1] || ran[0] == ran[2] || ran[1] == ran[2]);
}