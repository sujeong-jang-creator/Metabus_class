#include <stdio.h>
void main(void)
{
	int num, div;

	printf("ù��° ���� : ");
	scanf("%d", &num);

	printf("�ι�° ���� : ");
	scanf("%d", &div);

	if (div != 0 && num % div == 0)
	{
		printf("%d�� %d�� ����Դϴ�\n", num, div);
	}
	else
	{
		printf("%d�� %d�� ����� �ƴմϴ�\n", num, div);
	}

	if (div == 0)
	{
		printf("0���δ� ������θ� �Ǵ��� �� �����ϴ�\n");
	}
	else if (num % div == 0)
	{
		printf("����Դϴ�");
	}
	else
	{
		printf("����� �ƴմϴ�");
	}
}