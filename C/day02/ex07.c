#include <stdio.h>

void main(void)
{
	int a = 0, b = 1, c = 0;

	//printf("%d\n", ++a && ++b && ++c);
	//printf("%d\n", ++a || ++b || ++c);
	//printf("%d\n", a++ || b++ || c++);
	
	printf("%d\n", a-- && b++ || c--);

	printf("%d %d %d\n", a, b, c);
}