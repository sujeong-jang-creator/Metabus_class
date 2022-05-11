#include <stdio.h>

void main(void)
{
	char ch;
	char win;
	int win2;
	int num;

	printf("문자 입력 : ");
	win = scanf("%c", &ch);

	printf("정수 입력 : ");
	win2 = scanf("%d", &num);

	printf("ch = %c	num = %d, 문자입력반환 횟수 = %d, 정수입력반환 횟수 = %d\n", ch, num, win, win2);
}