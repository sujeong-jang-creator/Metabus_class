#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�����ϰ� �ִ� å �Ǽ� : 1
	1 book �̷��� ���.

	�����ϰ� �ִ� å �Ǽ� : 5
	5 books �̷��� �������·� ���.
*/

void main(void)
{
	int book;

	printf("�����ϰ� �ִ� å �Ǽ� : ");
	scanf("%d", &book);


	if (book == 1)
	{
		printf("%d book", book);
	}
	else if (book == 0)
	{
		printf("������ å ����");
	}
	else
	{
		printf("%d books", book);
	}
}