#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	0 - 255 : 169
	169�� 2���� : 10101001

	0 - 255 : 4
	4�� 2���� : 00000100
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
	} while (num < 0 || num > 255);	// ��ȣ�� ���� �޼��� ����.
	*/
	int dec = num;
	int loc = 7;
	while (num != 0)  //()�� ������ �� �� ����
	{
		binary[loc--] = num % 2;
		num = num / 2;
	}
	printf("10���� : %d -> 2���� : ", dec);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
}