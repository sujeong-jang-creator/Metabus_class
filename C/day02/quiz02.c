#include <stdio.h>

/*
	1. ���� 3���� �Է�
	2. ���� ���ϱ�
	3. ��� ���ϱ�
	4. ����, ��� ���
*/

void main(void)
{
	// 3���� ������ �Է¹޾� ���հ� ����� ���ϴ� �ڵ� �ۼ�
	int a, b, c, sum;
	double avg;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = (double)sum/3;

	printf("�� ������ ���� %d �Դϴ�.\n", sum);
	printf("�� ������ ����� %.2f �Դϴ�. (��, �Ҽ��� 2°�ڸ� ���� ���ɴϴ�)\n", avg);
}