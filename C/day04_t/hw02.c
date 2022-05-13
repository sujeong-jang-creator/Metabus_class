#include <stdio.h>
void main(void)
{
	int num1, num2, num3;

	printf("정수 3개를 입력 : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	int max = num1, min = num2;
	if (num2 > num1)
	{
		max = num2;
		min = num1;
	}

	if (num3 > max)
	{
		printf("%d  %d  %d\n", num3, max, min);
	}
	else if (num3 > min)
	{
		printf("%d  %d  %d\n", max, num3, min);
	}
	else
	{
		printf("%d  %d  %d\n", max, min, num3);
	}

	/*
		num1 > num2 > num3
		num1 > num3 > num2
		num2 > num1 > num3
		num2 > num3 > num1
		num3 > num1 > num2
		num3 > num2 > num1
	*/

	/*
	if (num1 > num2 && num2 > num3)
	{
		printf("%4d%4d%4d\n", num1, num2, num3);
	} 
	else if (num1 > num3 && num3 > num2)
	{
		printf("%4d%4d%4d\n", num1, num3, num2);
	}
	else if (num2 > num1 && num1 > num3)
	{

	}
	*/

	/*
	if (num1 > num2)
	{
		if (num1 > num3)  // num1   (num2, num3크기X)
		{
			if (num2 > num3)
			{
				printf("%d  %d  %d\n", num1, num2, num3);
			}
			else
			{
				printf("%d  %d  %d\n", num1, num3, num2);
			}
		}
		else   // num3 > num1 > num2
		{
			printf("%d  %d  %d\n", num3, num1, num2);
		}
	}
	else  // num2 > num1
	{

	}
	*/
}