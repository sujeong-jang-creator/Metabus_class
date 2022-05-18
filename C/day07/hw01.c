#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// rand() ����ϱ� ����!
#include <stdlib.h>
#include "myheader.h"
/*
	1 - 100 : 37
	37���� ū �� �Դϴ�.
	��ȸ�� 5�� ���ҽ��ϴ�

	38 - 100 : 60
	60���� ���� �� �Դϴ�.
	��ȸ�� 4�� ���ҽ��ϴ�

	38 - 59 : 41
	41���� ū �� �Դϴ�.
	��ȸ�� 3�� ���ҽ��ϴ�

	42 - 59 : 50
	50 ���� ���� �� �Դϴ�.
	��ȸ�� 2�� ���ҽ��ϴ�

	42 - 29 : 45
	�����Դϴ�.

	���� ��ȸ �� ����
	�ƽ����ϴ�. ��ȸ�� �� �����ϼ̽��ϴ�.
	������ [43] �Դϴ�.   >>> �̰Ÿ� �Լ��� ����ÿ�

	���� 1 - 50 : 51 �Է��ϸ� �ٽ� �Է��ϱ�.
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
		printf("��ȸ�� %d�� ���ҽ��ϴ�.\n", 6 - cnt);
		}
		cnt++;
		if (cnt > 6)
		{
			printf("�ƽ����ϴ�. ��ȸ�� �� �����ϼ̽��ϴ�.\n");
			printf("������ [%d] �Դϴ�. \n", quiz);
			break;
		}
	} while (quiz != num);
}


// 3. �Է¹��� ���ڰ� ������ �ش��ϴ��� ���� �ؼ� ��� & ��� �õ��ߴ��� ����
void inspect_rlt(int quiz, int *num, int *min, int *max)
{
	if (quiz < *num)
	{
		printf("%d ���� ���� �� �Դϴ�.", *num);
		*max = *num;
	}
	else if (quiz > *num)
	{
		printf("%d ���� ū �� �Դϴ�.", *num);
		*min = *num;
	}
	else
	{
		printf("�����Դϴ�.", *num);
	}
}

// 2. ���� �Է¹ޱ�
int input_num(int min, int max)
{
	int num;
	do {
		printf("%d - %d : ", min, max);
		num = scan_int();
		if (num < min || num > max)
		{
			printf("���� �� �ùٸ� ���� �Է��� �ּ���.\n");
		}
	} while (num < min || num > max);

	return num;
}

// 1. �������� ����
int random_num(void)
{
	// �ð��� �̿��ؼ� ������ ���� ������
	srand((unsigned int)time(NULL));

	int quiz = rand() % 100 + 1;	// (0+1 ~ 99+1) : 100���� ������ �������� 0 ~ 99 ������. 
									// �׷��� 1 ~ 100 ������ ������ �� �ϳ� ����ϱ����� 1�� ����
	return quiz;
}