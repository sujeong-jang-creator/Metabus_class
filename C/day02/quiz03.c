#include <stdio.h>

void main(void)
{
	// �� ��� ���α׷�
	int sec, min, hour;

	printf("�� �ʸ� ����� �帱���? : ");
	scanf("%d", &sec);

	min = sec / 60;
	sec = sec - min*60;
	hour = min / 60;
	min = min - hour * 60;

	printf("%d�ð� %d�� ,%d��", hour, min, sec);
}