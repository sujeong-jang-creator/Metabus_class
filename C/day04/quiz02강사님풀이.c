#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num1, num2, num3;

	printf("���� 3���� �Է� : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	/*
		num1 > num2 > num3
		num1 > num3 > num2
		num2 > num1 > num3
		num2 > num3 > num1
		num3 > num1 > num2
		num3 > num2 > num1
	*/

	/* ���1
	if (num1 > num2 && num2 < num3)
	{
		printf("%d%d%d\n", num1, num2, num3)	// ��ĸ� �����Ű� �̰� ���� �ƴ�.
	}
	*/

	/* ���� Ǯ�� ����̶� ����.
	if (num1 > num2)
	{
		if (num1 > num3)	// num1 (num2, num3�� ũ�� �� �� X)
		{
			if (num2 > num3)
			{
				printf("%d %d %d\n", num1, num2, num3);
			}
			else
			{
				printf("%d %d %d\n", num1, num3, num2);
			}
		}
		else	// num3 > num1 > num2
		{
			printf("%d %d %d\n", num3, num1, num2);
		}
	}
	else	// num2 > num1
	{
		printf("... day03�� quiz05.c ���� ���� Ǭ�Ŷ� 100% ��ġ. �� õ�鰡��!!")
	}
	*/

	//  ���3. �� �Ҹ� first, second�� �ֵ��� �����͵� ����° Ǯ����
}