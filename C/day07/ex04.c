#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* pa, int* pb)
{
	printf("swap::pa = %p  pb = %p\n", pa, pb);
	printf("swap::a = %d  b = %d\n", *pa, *pb);

	int temp;
	temp = *pa;		// temp = main::a
	*pa = *pb;		// main::a = main::b
	*pb = temp;
}

void main(void)
{
	int a = 10, b = 5;

	printf("main::a = %d  %d \n", a, *&a);
	printf("main()::a �ּ� = %p  b �ּ� = %p\n", &a, &b);	// p�� 10����
	printf("swap()�� : a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("swap()�� : a = %d b = %d\n", a, b);
}