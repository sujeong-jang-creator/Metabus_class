#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int nums[10];	// nums[0] ~ nums[9]

	/* ��� 3)
	int loc = 0;
	while(loc < 10)
	{
		printf("num %d : ", loc + 1);
		scanf("%d", &nums[loc]);
		
		if (nums[loc] % 2 == 0)
		{
			loc++
		}
	}

	*/

	/* ��� 2)
	for (int i = 0; i < 10; )
	{
		printf("num %d : ", i + 1);
		scanf("%d", &nums[i]);

		if (num[i] % 2 == 0)
		{
			i++;
		}
	}
	*/

	for (int i = 0; i < 10; i++) // ����, ������ ������ ������ i++ �̰� ������ ��.
	{
		printf("num %d : ", i + 1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 != 0)
		{
			i--; // �̷��� �غ��� ���� for������ i++�ϸ� �ٷ� ���󺹱�. ++�� ��ȿȭ ��Ű�� ����.
		}

		/* ��� 1)
		do // while ���� �ؿ� ������
		{
			printf("num %d : ", i + 1);
			scanf("%d", &nums[i]);
		}
		while (nums[i] % 2 != 0);	// �ٷ� �� ��Ͻ������� ���� �� ���̶�� �ǹ̸� �鶧�� while �ڿ� ; ����
		*/
	}

	printf("< PRINT >\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%5d", nums[j]);
	}
}