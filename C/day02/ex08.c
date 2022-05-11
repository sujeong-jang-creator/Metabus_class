#include <stdio.h>

void main(void)
{
	// f는 16진수. 10진수의 15와 같음.
	int a = 0x5555, b = 0x00ff;
	printf("a = %x, b = %x\n", a, b);
	printf(" ~a = %x, ~b = %x\n", ~a, ~b);
	printf(" a & b = %x\n", a & b);
	printf(" a | b = %x\n", a | b);
	printf(" a ^ b = %x\n", a ^ b);
}