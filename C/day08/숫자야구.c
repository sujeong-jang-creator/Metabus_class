#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void scoring_ans(int* ran, int* num, int* m_strike, int* m_ball);
void input_num(int* num);
void random_num(int *ran);

void main(void)
{
	// 1. �ߺ����� �ʴ� ������ ���� 3���� ���
	int ran[3];
	random_num(ran);
	printf("���� : %d %d %d\n", ran[0], ran[1], ran[2]);

	int m_strike = 0, m_ball = 0;
	int cnt = 0;
	do
	{
		// 2. �� �ڸ��� ���ڸ� �Է¹���
		int num[3];
		input_num(num);

		// 3. �� ä�� �� �õ�Ƚ�� �߰�
		scoring_ans(ran, num, &m_strike, &m_ball);
		cnt++;

		if (m_strike != 3)
		{
			printf("%d strike / %d ball �Դϴ�.\n", m_strike, m_ball - m_strike);
			printf("��ȸ�� %d�� ���ҽ��ϴ�.\n", 6 - cnt);
		}
		else
		{
		printf(" ***** �����Դϴ� *****\n");
		}
	} while (m_strike != 3 && cnt < 6);
}

// �Է��� ���ڰ� ��� ������ ä�� �� �õ� Ƚ�� �߰�
void scoring_ans(int* ran, int* num, int *m_strike, int *m_ball)
{
	int strike = 0;
	int ball = 0;

	for (int i = 0; i < 3; i++)
	{
		// strike ���
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

	//printf("%d strike / %d ball �Դϴ�.\n", strike, ball - strike);
	//printf("��ȸ�� %d�� ���ҽ��ϴ�.\n", 6 - cnt);
}

// �� �ڸ��� ���� 3�� �Է¹���
void input_num(int *num)
{
	int num1, num2, num3;

	do
	{
	printf("\n�ߺ����� �ʴ� �� �ڸ��� ���� 3���� �Է��ϼ��� : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	while (getchar() != '\n');
	} while (num1 < 0 || num1 > 9 && num2 < 0 || num2 > 9 && num3 < 0 || num3 > 9 
		|| num1 == num2 || num1 == num3 || num2 == num3);

	num[0] = num1;
	num[1] = num2;
	num[2] = num3;
}

// ���� ���� 3�� ���
void  random_num(int *ran)
{
	
	srand((unsigned int)time(NULL));

	// �� ���ڰ� �ߺ����� �ʰ� ó��
	do
	{
		for (int i = 0; i <= 2; i++)
		{
			ran[i] = rand() % 10;	// 1 ~ 9
		}
	} while (ran[0] == ran[1] || ran[0] == ran[2] || ran[1] == ran[2]);
}