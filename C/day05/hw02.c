#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	2. �л� 5���� ������ �Է¹޾� ������ ���� ����ϴ� �ڵ� �ۼ�
	1's ���� : 98
	2's ���� : 1000
	3's ���� : -34
	4's ���� : 80
	5's ���� : 75

	5�� �Է� �� [2]�� ���� �߻�!!!
	���� : 254�� // ������ ���� 3���� ���Ѱ�.
	��� : 50.60��(�Ҽ��� ��°�ڸ�) // 5�� �� ����
*/
void main(void)
{
	int grade[5];

	for (int i = 0; i < 5; i++)
	{
		printf("%d's ���� : ", i + 1);
		scanf("%d", &grade[i]);
	}

	int total = 0 , cnt = 0;
	for (int j = 0; j < 5; j++)
	{
		if (grade[j] >= 0 && grade[j] <= 100)
		{
			total = total + grade[j];
		}
		else
		{
			cnt++;
		}
	}
	printf("5�� �Է� �� [%d]�� ���� �߻�!!!\n", cnt);
	printf("���� %d��\n", total);
	printf("��� %.2f��\n", (double)total / 5);
}