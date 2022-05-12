#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	성적을 입력받아 학점을 출력하는 코드를 작성
		성적	학점
	---------------------
	90점 이상	A
	80~89점		B
	70~79점		C
	60~69점		D
	60점미만	F

	0 - 100 점 사이의 성적 : 89
	89점의 학점은 B입니다.

	0 - 100 점 사이의 성적 : -3
	잘못입력하셨습니다.
*/

// 1.
/*
void main(void)
{
	int score;

	printf("0 - 100 점 사이의 성적 : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf("잘못입력하셨습니다.");
	}
	else if (score >= 90)
	{
		printf("%d점의 학점은 A입니다.", score);
	}
	else if (score >= 80)
	{
		printf("%d점의 학점은 B입니다.", score);
	}
	else if (score >= 70)
	{
		printf("%d점의 학점은 C입니다.", score);
	}
	else if (score >= 60)
	{
		printf("%d점의 학점은 D입니다.", score);
	}
	else
	{
		printf("%d점의 학점은 F입니다.", score);
	}
}
*/

// 2.
void main(void)
{
	int score;

	printf("0 - 100 점 사이의 성적 : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
		printf("잘못입력하셨습니다. ");

	else
	{
		switch (score / 10)
		{
		/*
		case 10:
		case 9:
			printf("%d점의 학점은 A입니다.", score);
			break;
		이렇게 해도 된다.
		*/
		case 10:
			printf("%d점의 학점은 A입니다.", score);
			break;
		case 9:
			printf("%d점의 학점은 A입니다.", score);
			break;
		case 8:
			printf("%d점의 학점은 B입니다.", score);
			break;
		case 7:
			printf("%d점의 학점은 C입니다.", score);
			break;
		case 6:
			printf("%d점의 학점은 D입니다.", score);
			break;
		default:
			printf("%d점의 학점은 F입니다.", score);
			break;
		}
	}
}