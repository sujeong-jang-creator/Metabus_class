#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num;

	printf("1 ~ 50������ ���� �Է� : ");
	scanf("%d", &num);

	printf("< 1 ~ %d ������ 369���� >\n", num);
	for (int i = 1; i <= num; i++)
	{
		// �����ڸ�, 1���ڸ� 369 ���Կ��� �Ǵ�
		int n1 = i % 10;
		int n10 = i / 10;

		int cnt = 0;
		if (n1 == 3 || n1 == 6 || n1 == 9)
			++cnt;
		if (n10 == 3 || n10 == 6 || n10 == 9)
			cnt++;
		// 10 �� ����϶�
		if (n1 == 0)
		{
			for (int j = 0; j < n10; j++)
				printf("��");
			printf("��");
		}
		// 3,6,9�� ��
		else if (cnt > 0)
		{
			for (int j = 0; j < cnt; j++)
				printf("¦");
		}
		// �Ϲ� ����
		else
			printf("%d", i);
		printf("\n");

		/*
		int cnt = 0;
		if (n1 == 0)
		{
			for (int j = 0; j < n10; j++)
				printf("��");
			printf("��");
		} else if (n1 == 3 || n1 == 6 || n1 == 9)
			cnt++;
		if (n10 == 3 || n10 == 6 || n10 == 9)
			cnt++;
		if (cnt == 0)
			printf("%d", i);
		else
		{
			for (int j = 0; j < cnt; j++)
				printf("¦");
		}
		printf("\n");
		*/
		/*int flag = 0;
		if (n1 == 3 || n1 == 6 || n1 == 9)
		{
			printf("¦");
			flag = 1;
		}
		if (n10 == 3 || n10 == 6 || n10 == 9)
		{
			printf("¦");
			flag = 1;
		}
		if(flag == 0)
			printf("%d", i);
		printf("\n");*/
	}
}