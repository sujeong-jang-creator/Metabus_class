#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1~3 ������ ���� �Է� :
	1 �Է½� "ONE" ���
	2 �Է½� "TWO" ���
	3 �Է½� "THREE" ���
	1~3�� �ƴ� ���� �Է½� "ERROR" ���
*/

void main(void)
{
	int num;

	printf("1 - 3������ ���� : ");
	scanf("%d", &num);

	// switch ���� {��������}�� �ǹ̰� ����!
	switch (num)
	{
	// num �� 1�ΰ��
	case 1:
		printf("ONE\n");
		break;
	// num �� 2�ΰ��
	case 2:
		printf("TWO\n");
		break;
	// num �� 3�ΰ��
	case 3:
		printf("THREE\n");
		break;
	// ���� ���̽��� �� �������� ���� ��츦 default ��� ��.
	default:
		printf("ERROR\n");
		break;
	}

	/*
	�� switch ���̶� ���� �ǵ� if ������ ǥ���� ��
	if (num == 1)
	{
		printf("ONE\n");
	}
	else if (num == 2)
	{
		printf("TWO\n");
	}
	else if (num == 3)
	{
		printf("THREE\n");
	}
	else
	{
		printf("ERROR\n");
	}
	*/
}