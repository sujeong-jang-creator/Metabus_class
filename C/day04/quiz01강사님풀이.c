#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
 divide by zero �����. 0���� ������!
*/

void main(void)
{
	int num, div;

	printf("ù��° ���� : ");
	scanf("%d", &num);

	printf("�ι�° ���� : ");
	scanf("%d", &div);


	if (div != 0 && num % div == 0)		// div�� ���� 0�� �ƴϰ� num % div �� 0�� ��. ������ �ٲ�� �ȵ���!
	{									// day 03 �� ���� Ǯ�� ��(quiz04.c)�� ���� �� �����̴�!! ��!!
		printf("%d�� %d�� ����Դϴ�.\n", num, div);
	}
	else
	{
		printf("%d�� %d�� ����� �ƴմϴ�.\n", num, div);
	}
}