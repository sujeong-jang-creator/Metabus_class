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
	printf("main()::a 주소 = %p  b 주소 = %p\n", &a, &b);	// p는 10진수
	printf("swap()전 : a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("swap()후 : a = %d b = %d\n", a, b);
}