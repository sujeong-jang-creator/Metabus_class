#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	int ar[5] = { 10, 20, 30, 40, 50 };
	int* ptr = ar;

	printf("%d\n", ar[3]);
	printf("%d\n", *(ar + 1));
	printf("%d\n", *(ptr + 4));
	printf("%d\n", *ptr + 1);	// *ptr = *(ptr+0) = ptr[0]
	printf("%d\n", ++ * ptr);
	printf("%d\n", *ptr);
	printf("%d\n", *++ptr);
	printf("%d\n", *ptr);
	printf("%d\n", ptr[2]);
	printf("%d\n", ar[2]);
	printf("%d\n", *ptr++);
	printf("%d\n", *ptr);
	printf("%d\n", (*ptr)++);
	printf("%d\n", *ptr);
}