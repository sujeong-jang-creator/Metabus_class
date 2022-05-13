#include <stdio.h>
void main(void)
{
	int num, div;

	printf("첫번째 정수 : ");
	scanf("%d", &num);

	printf("두번째 정수 : ");
	scanf("%d", &div);

	if (div != 0 && num % div == 0)
	{
		printf("%d는 %d의 배수입니다\n", num, div);
	}
	else
	{
		printf("%d는 %d의 배수가 아닙니다\n", num, div);
	}

	if (div == 0)
	{
		printf("0으로는 배수여부를 판단할 수 없습니다\n");
	}
	else if (num % div == 0)
	{
		printf("배수입니다");
	}
	else
	{
		printf("배수가 아닙니다");
	}
}