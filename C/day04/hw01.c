#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1. ���� �Է¹޾� �������� ����ϴ� �ڵ带 �ۼ��Ͻÿ�
	2 - 9  : 5
	* **5�� * **
	5 * 1 = 5
	5 * 2 = 10
	...
	5 * 9 = 45
*/

void main(void)
{
	int num;

	printf("2 - 9 ������ �ڿ����� �Է��ϼ��� : ");
	scanf("%d", &num);

	printf("*** %d�� *** \n", num);
	
	for (int i = 1; i <= 9; i++)
	{
		int result = num * i;
		printf(" %d * %d = %d\n", num, i, result);
	}
}