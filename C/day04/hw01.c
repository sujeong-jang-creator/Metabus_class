#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1. 답을 입력받아 구구단을 출력하는 코드를 작성하시오
	2 - 9  : 5
	* **5단 * **
	5 * 1 = 5
	5 * 2 = 10
	...
	5 * 9 = 45
*/

void main(void)
{
	int num;

	printf("2 - 9 사이의 자연수를 입력하세요 : ");
	scanf("%d", &num);

	printf("*** %d단 *** \n", num);
	
	for (int i = 1; i <= 9; i++)
	{
		int result = num * i;
		printf(" %d * %d = %d\n", num, i, result);
	}
}