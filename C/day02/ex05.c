#include <stdio.h>

void main(void)
{
	char ch;
	char win;
	int win2;
	int num;

	printf("���� �Է� : ");
	win = scanf("%c", &ch);

	printf("���� �Է� : ");
	win2 = scanf("%d", &num);

	printf("ch = %c	num = %d, �����Է¹�ȯ Ƚ�� = %d, �����Է¹�ȯ Ƚ�� = %d\n", ch, num, win, win2);
}