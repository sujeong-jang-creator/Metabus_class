#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	보유하고 있는 책 권수 : 1
	1 book 이렇게 출력.

	보유하고 있는 책 권수 : 5
	5 books 이렇게 복수형태로 출력.
*/

void main(void)
{
	int book;

	printf("보유하고 있는 책 권수 : ");
	scanf("%d", &book);


	if (book == 1)
	{
		printf("%d book", book);
	}
	else if (book == 0)
	{
		printf("보유한 책 없음");
	}
	else
	{
		printf("%d books", book);
	}
}