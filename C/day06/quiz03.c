#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	���� : 90
	90���� ������ A�Դϴ�.

	���� : -1000
	������ 0-100�� ���̷θ� �Է��ؾ� �մϴ�.
	���� : 92
	92���� ������ A�Դϴ�.
*/

// �����޼��� ���
void prn_err_msg(void)
{
	printf("������ 0-100�� ���̷θ� �Է��ؾ� �մϴ�. \n");
}

int get_score(void)
{
	int score, flag;
	
	do
	{
		printf("������ �Է��� �ּ��� : ");
		scanf("%d", &score);
		while (getchar() != '\n');

		// �����߻� Ȯ��
		flag = is_error(score);
		if (flag == 1)
		{
			prn_err_msg();
		}
	}while (flag == 1);

	return score;
}

/*
	ȣ���ڰ� �Ѱ��� ������ �������� üũ�ϴ� �Լ�, 0(����), 1(��)
*/
int is_error(int score)
{
	int flag = 0;

	if (score > 100 || score < 0)
	{
		// ������ 1
		flag = 1;
	}

	return flag;
}

char get_grade(int score)
{
	int grade;

	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else 
	{
		grade = 'F';
	}

	return grade;
}

void prn_result(int score, char grade)
{
	printf("%d���� ������ %c�Դϴ�.", score, grade);
}

void main(void)
{
	// 1. ���� �Է¹ޱ�
	int score = get_score();
	// 2. ���� ���ϱ�
	char grade = get_grade(score);
	// 3. ����ϱ�
	prn_result(score, grade);
}