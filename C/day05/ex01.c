#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�迭 : �������� ������ ���� Ÿ���� ������ ������ ������ŭ ��Ƴ��� ����
*/

void main(void)
{
	// ������ 5�� ��Ƴ��� �迭 ar ����;
	int ar[5];	// ar[0] ~ ar[4]

	// 5���� ������ Ű���� �Է�
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� : ", i + 1);
		scanf("%d", &ar[i]);
	}
	printf("%3d%3d%3d%3d%3d\n",
		ar[0], ar[1], ar[2], ar[3], ar[4]);

	/*
	// 5���� ������ ���� 10 ~ 50�� ���ڸ� ����
	for (int i = 0; i < 5; i++)
	{
		ar[i] = (i + 1) * 10;
	}

	printf("%3d%3d%3d%3d%3d\n",
		ar[0], ar[1], ar[2], ar[3], ar[4]);
	*/
}