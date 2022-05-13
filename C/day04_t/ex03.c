/*
	2 - 100사이의 정수 입력 : 68

	< 68의 약수 출력 >
	1  2  4  17  34  68
	약수의 총개수 : 6개
*/
#include <stdio.h>
void main(void)
{
	int num;

	printf("2 - 100사이의 정수 입력 : ");
	scanf("%d", &num);

	printf("< %d의 약수 출력 >\n", num);

	int cnt = 0;
	// num의 약수가 될수 있는 후보군(1 ~ num)
	for (int i = 1; i <= num; i++)	// i : 약수의 후보
	{
		if (num % i == 0)
		{
			printf("%5d", i);
			cnt++;
		}
	}
	printf("\n약수의 총 개수 : %d개\n", cnt);
}