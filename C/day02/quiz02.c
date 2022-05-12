#include <stdio.h>

/*
	1. 정수 3개를 입력
	2. 총합 구하기
	3. 평균 구하기
	4. 총합, 평균 출력
*/

void main(void)
{
	// 3개의 정수를 입력받아 총합과 평균을 구하는 코드 작성
	int a, b, c, sum;
	double avg;

	printf("3개의 정수를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = (double)sum/3;

	printf("세 정수의 합은 %d 입니다.\n", sum);
	printf("세 정수의 평균은 %.2f 입니다. (단, 소수점 2째자리 까지 나옵니다)\n", avg);
}