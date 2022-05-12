#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int age;
	printf("Input age : ");
	scanf("%d", &age);

	switch (age/10)
	{
	case 6 :
		printf("60대 \n");
		break;
	case 5:
		printf("50대 \n");
		break;
	case 4:
		printf("40대 \n");
		break;
	case 3:
		printf("30대 \n");
		break;
	case 2:
		printf("20대 \n");
		break;
	case 1:
		printf("10대 \n");
		break;
	case 0:
		printf("유소년 \n");
		break;
	default:
		printf("해당사항이 없습니다. \n");
		break;
	}
}