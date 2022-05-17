#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	0 - 255 : 169
	169의 2진수 : 10101001

	0 - 255 : 4
	4의 2진수 : 00000100
*/
void main(void)
{
	int num, binary[8] = {0};

	while (1)
	{
		printf("0 - 255 : ");
		scanf("%d", &num);

		if (num >= 0 && num <= 255)
		{
			break;
		}
	}

	/*
	do
	{
		printf("0 - 255 : ");
		scanf("%d", &num);
	} while (num < 0 || num > 255);	// 괄호안 조건 달성시 멈춤.
	*/
	int dec = num;
	int loc = 7;
	while (num != 0)  //()안 조건이 될 때 까지
	{
		binary[loc--] = num % 2;
		num = num / 2;
	}
	printf("10진수 : %d -> 2진수 : ", dec);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
}