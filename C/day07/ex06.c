#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void prn_ar(int *ar)
{
	printf("< PRINT >\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", ar[i]);
	}
}

void input_ar(int* ar)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d\'s 정수 : ", i + 1);
		scanf("%d", &ar[i]);
		while (getchar() != '\n');
	}
}

void main(void)
{
	int ar[5];

	input_ar(ar);

	// ar은 ar 배열의 시작점 주소임
	prn_ar(ar);
}