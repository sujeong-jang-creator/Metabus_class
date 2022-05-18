#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"

void is_error(int *p_score);
char get_score(int score);
void print(int score, int grade);

void main(void)
{
	// 1. ���� �Է�
	printf("���� : ");
	int score = scan_int();

	// 2. �ùٸ��� �Է��ߴ��� Ȯ��/�Է�
	is_error(&score);

	// 3. ������Ī
	int grade = get_score(score);

	// 4. ���
	print(score, grade);
}

// ������ �ùٸ��� �Է��ߴ��� Ȯ�� �� �ùٸ� ���� �Է�
void is_error(int *p_score)
{
	int score;
	if (*p_score < 0 || *p_score > 100)
	{
		do
		{
		printf("������ 0-100�� �̻����θ� �Է��ؾ� �մϴ�.\n");
		printf("���� : ");
		score = scan_int();
		} while (score < 0 || score > 100);
		*p_score = score;
	}
}

// ������ ��Ī
char get_score(int score)
{
	char grade;

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


// ���
void print(int score, char grade)
{
	printf("%d���� ������ %c�Դϴ�.", score, grade);
}
