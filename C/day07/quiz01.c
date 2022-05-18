#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"

void is_error(int *p_score);
char get_score(int score);
void print(int score, int grade);

void main(void)
{
	// 1. 성적 입력
	printf("성적 : ");
	int score = scan_int();

	// 2. 올바르게 입력했는지 확인/입력
	is_error(&score);

	// 3. 학점매칭
	int grade = get_score(score);

	// 4. 출력
	print(score, grade);
}

// 성적을 올바르게 입력했는지 확인 및 올바른 성적 입력
void is_error(int *p_score)
{
	int score;
	if (*p_score < 0 || *p_score > 100)
	{
		do
		{
		printf("성적은 0-100점 이상으로만 입력해야 합니다.\n");
		printf("성적 : ");
		score = scan_int();
		} while (score < 0 || score > 100);
		*p_score = score;
	}
}

// 학점을 매칭
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


// 출력
void print(int score, char grade)
{
	printf("%d점의 학점은 %c입니다.", score, grade);
}
