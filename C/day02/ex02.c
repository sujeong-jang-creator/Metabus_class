// 두 정수의 합을 출력
#include <stdio.h>

void main(void)
{
	int a, b;

	// 한번에 입력받기
	printf("정수 2개를 입력 : ");
	scanf("%d%d", &a, &b);

	/*
	printf("첫번째 정수 입력 : ");
	
	// input값 받는법, &뒤에 받은 값을 넣을 변수 적기
	scanf("%d", &a);

	printf("두번째 정수 입력 : ");
	scanf("%d", &b);
	*/

	printf("%d + %d = %d\n", a, b, a + b);
}