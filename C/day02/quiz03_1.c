#include <stdio.h>

void main(void)
{
	// �� ��� ���α׷�
	int sec, min;

	printf("�� �ʸ� ����� �帱���? : ");
	scanf("%d", &sec);

	min = sec / 60;
	sec = sec - min * 60;

	printf("%d�� %d��", min, sec);
}