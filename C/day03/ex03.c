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
		printf("60�� \n");
		break;
	case 5:
		printf("50�� \n");
		break;
	case 4:
		printf("40�� \n");
		break;
	case 3:
		printf("30�� \n");
		break;
	case 2:
		printf("20�� \n");
		break;
	case 1:
		printf("10�� \n");
		break;
	case 0:
		printf("���ҳ� \n");
		break;
	default:
		printf("�ش������ �����ϴ�. \n");
		break;
	}
}