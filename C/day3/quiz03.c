#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	������ �Է¹޾� ������ ����ϴ� �ڵ带 �ۼ�
		����	����
	---------------------
	90�� �̻�	A
	80~89��		B
	70~79��		C
	60~69��		D
	60���̸�	F

	0 - 100 �� ������ ���� : 89
	89���� ������ B�Դϴ�.

	0 - 100 �� ������ ���� : -3
	�߸��Է��ϼ̽��ϴ�.
*/

// 1.
/*
void main(void)
{
	int score;

	printf("0 - 100 �� ������ ���� : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
	{
		printf("�߸��Է��ϼ̽��ϴ�.");
	}
	else if (score >= 90)
	{
		printf("%d���� ������ A�Դϴ�.", score);
	}
	else if (score >= 80)
	{
		printf("%d���� ������ B�Դϴ�.", score);
	}
	else if (score >= 70)
	{
		printf("%d���� ������ C�Դϴ�.", score);
	}
	else if (score >= 60)
	{
		printf("%d���� ������ D�Դϴ�.", score);
	}
	else
	{
		printf("%d���� ������ F�Դϴ�.", score);
	}
}
*/

// 2.
void main(void)
{
	int score;

	printf("0 - 100 �� ������ ���� : ");
	scanf("%d", &score);

	if (score > 100 || score < 0)
		printf("�߸��Է��ϼ̽��ϴ�. ");

	else
	{
		switch (score / 10)
		{
		/*
		case 10:
		case 9:
			printf("%d���� ������ A�Դϴ�.", score);
			break;
		�̷��� �ص� �ȴ�.
		*/
		case 10:
			printf("%d���� ������ A�Դϴ�.", score);
			break;
		case 9:
			printf("%d���� ������ A�Դϴ�.", score);
			break;
		case 8:
			printf("%d���� ������ B�Դϴ�.", score);
			break;
		case 7:
			printf("%d���� ������ C�Դϴ�.", score);
			break;
		case 6:
			printf("%d���� ������ D�Դϴ�.", score);
			break;
		default:
			printf("%d���� ������ F�Դϴ�.", score);
			break;
		}
	}
}