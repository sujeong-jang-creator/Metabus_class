#include <stdio.h>

void main(void)
{
	// 3���� ������ �Է¹޾� ���հ� ����� ���ϴ� �ڵ� �ۼ�
	int a, b, c, sum;
	float avg;

	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = (float)sum/3;

	printf("�� ������ ���� %d �Դϴ�.\n", sum);
	printf("�� ������ ����� %.2f �Դϴ�. (��, �Ҽ��� 2°�ڸ� ���� ���ɴϴ�)\n", avg);
}