#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "myheader.h"

void main(void)
{
	int num, num2;
	int div01[15], div02[15];
	int idx01 = 0, idx02 = 0;

	printf("ù��° ���� �Է� : ");
	num = scan_int();

	printf("�ι�° ���� �Է� : ");
	num2 = scan_int();

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			div01[idx01++] = i;
		}
	}

	for (int i = 1; i <= num2; i++)
	{
		if (num2 % i == 0)
			div02[idx02++] = i;
	}

	int gcd = 0;
	for (int i = idx01 - 1; i >= 0; i--)
	{
		int j;
		for (j = idx02 - 1; j >= 0; j--)
		{
			if (div01[i] >= div02[j])
				break;
		}
		if (div01[i] == div02[j])
		{
			gcd = div01[i];
			break;
		}
	}
	/*
	int gcd = 0;
	for (int i = idx01 - 1; i >= 0; i--)
	{
		for (int j = idx02 - 1; j >= 0; j--)
		{
			if (div01[i] > div02[j])
				break;

			// �ִ����� ã������....
			if (div01[i] == div02[j])
			{
				gcd = div01[i];
				break;
			}
		}
		if (gcd != 0)
			break;
	}
	*/
	printf("�ִ����� : %d\n", gcd);
}