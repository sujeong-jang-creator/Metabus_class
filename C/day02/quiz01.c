#include <stdio.h>

void main(void)
{
	// 두개 정수를 이용한 사칙연산 프로그램
	int a, b;

	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &a);

	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &b);

	printf("두 정수의 합은 %d 입니다.\n", a + b);
	printf("두 정수의 차는 %d 입니다.\n", a - b);
	printf("두 정수의 곱은 %d 입니다.\n", a * b);
	printf("두 정수를 나눈 값은 %.2f 입니다. (단, 소수점 2째자리 까지 나옵니다)", (double)a / b);
}