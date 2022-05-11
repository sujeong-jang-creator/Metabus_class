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
	num+num = 3 + 3 = 6 으로 나오는데, 이건 컴파일러마다 다르다. VS 에서는 저렇게 읽는다.
	*/
	printf("%d\n", ++num + ++num);	// 이런코드는 변태양!
	
	/*
	printf("%d\n", num + num) : num+num을 우선 찍어.
	num = num + 1
	num = num + 1	: 그 후에 찍어.
	*/
	printf("%d\n", num++ + num++);
}