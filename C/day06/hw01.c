#define _CRT_SECURE_NO_WARNINGS
//#define TRUE	1	// True �� 1�̶�� �Ҳ���
//#define FALSE	0	// False �� 0�̶�� �Ҳ��� �̷������� �� �� ����

#include <stdio.h>

int is_prime(int num)
{
	int flag = 0;

	 // 1�̸� �Ҽ��ƴ�, 0�̸� �Ҽ�.
	int cnt = 0;
	for (int num2 = 2; num2 <= num; num2++)
	{
		// �Ҽ��ƴ�
		if (num % num2 == 0)
		{
			cnt++;
		}
	}
	if (cnt > 1)
	{
		return 1;
	}
	if (cnt == 1)
	{
		return 0;
	}
	return flag;
}

void main(int grade)
{
	int num, flag;

	for (int num = 2; num <= 100; num++)
	{
		flag = is_prime(num);
		if (flag == 0)
			printf("%d : �Ҽ��Դϴ�\n", num);
		else
			printf("%d : �Ҽ��� �ƴմϴ�\n", num);
	}
}