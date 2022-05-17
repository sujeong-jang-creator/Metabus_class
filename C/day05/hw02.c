#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	2. 학생 5명의 성적을 입력받아 다음과 같이 출력하는 코드 작성
	1's 성적 : 98
	2's 성적 : 1000
	3's 성적 : -34
	4's 성적 : 80
	5's 성적 : 75

	5명 입력 중 [2]번 오류 발생!!!
	총합 : 254점 // 멀쩡한 성적 3개만 더한거.
	평균 : 50.60점(소수점 둘째자리) // 5명 다 나눔
*/
void main(void)
{
	int grade[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d's 성적 : ", i + 1);
		scanf("%d", &grade[i]);
	}

	int total = 0 , cnt = 0;
	for (int j = 0; j < 5; j++)
	{
		if (grade[j] >= 0 && grade[j] <= 100)
		{
			total = total + grade[j];
		}
		else
		{
			cnt++;
		}
	}
	printf("5명 입력 중 [%d]번 오류 발생!!!\n", cnt);
	printf("총합 %d점\n", total);
	printf("평균 %.2f점\n", (double)total / 5);
}