#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	호출자함수가 비교할 정수 2개를 넘겨주면
	크기를 비교하여 큰 수를 호출자함수에게 전달
*/

// get_max 함수는 호출자 함수가 숫자 2개 넘겨주면 어떤 행동을 한 후 정수값 하나를 전달한다는 의미
int get_max(int num, int num2)
{
	// int max = num > num2 ? num : num2;
	int max;
	if (num > num2)
	{
		max = num;
	}
	else
		max = num2;

	return max;
}

/*
	키보드에서 하나의 정수를 입력받아
	호출자 함수에게 전달하는 기능
*/
int get_number(void)
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);
	while (getchar() != '\n');

	return num;
}

void prn_result(int num, int num2, int max)
{
	printf("%d, %d 중 큰 수 : %d\n", num, num2, max);
}

void main(void)
{
	int num = get_number();
	int num2 = get_number();

	int max = get_max(num, num2);

	prn_result(num, num2, max);

	// prn_max(num, num2);
}