#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	3. ������ ����� ���̴� ���α׷� �ۼ�
	1 - 365 : 100
	1/1 + 100 : 4/10

	1- 365 : 364
	1/1 + 364 : 12/30
*/
void main(void)
{
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int num;

	printf("1 ~ 365 ������ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	if (num >= 1 && num <= 365)
	{
		int cnt = 0, org = 0;
		for (int i = 0; i < 12; i++)
		{
			if (num > days[i])
			{
				org = org + days[i];
				num = num - days[i];
				cnt++;
			}
			else
			{
				break;
			}
		}
		printf("1/1 + %d : %d/%d", org+num, cnt, num);
	}
	else
	{
		printf("�߸��� ���� �Է��ϼ̽��ϴ�. ");
	}
}