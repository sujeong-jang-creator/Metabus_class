#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	성적 : 90
	90점의 학점은 A입니다.

	성적 : -1000
	성적은 0-100점 사이로만 입력해야 합니다.
	성적 : 92
	92점의 학점은 A입니다.
*/

// 에러메세지 출력
void prn_err_msg(void)
{
	printf("성적은 0-100점 사이로만 입력해야 합니다. \n");
}

int get_score(void)
{
	int score, flag;
	
	do
	{
		printf("성적을 입력해 주세요 : ");
		scanf("%d", &score);
		while (getchar() != '\n');

		// 오류발생 확인
		flag = is_error(score);
		if (flag == 1)
		{
			prn_err_msg();
		}
	}while (flag == 1);

	return score;
}

/*
	호출자가 넘겨준 성적이 오류인지 체크하는 함수, 0(거짓), 1(참)
*/
int is_error(int score)
{
	int flag = 0;

	if (score > 100 || score < 0)
	{
		// 오류면 1
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
	printf("%d점의 학점은 %c입니다.", score, grade);
}

void main(void)
{
	// 1. 성적 입력받기
	int score = get_score();
	// 2. 학점 구하기
	char grade = get_grade(score);
	// 3. 출력하기
	prn_result(score, grade);
}