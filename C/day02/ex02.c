// �� ������ ���� ���
#include <stdio.h>

void main(void)
{
	int a, b;

	// �ѹ��� �Է¹ޱ�
	printf("���� 2���� �Է� : ");
	scanf("%d%d", &a, &b);

	/*
	printf("ù��° ���� �Է� : ");
	
	// input�� �޴¹�, &�ڿ� ���� ���� ���� ���� ����
	scanf("%d", &a);

	printf("�ι�° ���� �Է� : ");
	scanf("%d", &b);
	*/

	printf("%d + %d = %d\n", a, b, a + b);
}