#include <stdio.h>

void main(void)
{
	int num = 10;

	printf("%d\n", ++num);
	printf("num = %d\n", num);

	num = 10;

	printf("%d\n", num++);
	printf("num = %d\n", num);

	num = 1;
	/*
	num = num + 1;	2
	num = num + 1;	3
	num+num = 3 + 3 = 6 ���� �����µ�, �̰� �����Ϸ����� �ٸ���. VS ������ ������ �д´�.
	*/
	printf("%d\n", ++num + ++num);	// �̷��ڵ�� ���¾�!
	
	/*
	printf("%d\n", num + num) : num+num�� �켱 ���.
	num = num + 1
	num = num + 1	: �� �Ŀ� ���.
	*/
	printf("%d\n", num++ + num++);
}