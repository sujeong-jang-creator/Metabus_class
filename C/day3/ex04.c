#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	// ��ȣ�ȿ� ���� ������ ������ �ɶ����� �ݺ�
	
	printf("[start]========================\n");

	// for ��
	for (int cnt = 1; cnt <= 5; ++cnt)
	{
		printf("Hello\n");
	}
	// printf("cnt = %d\n", cnt);	�ϸ� cnt�� ���ٰ� ����. �ֳĸ� for �� �ȿ��� �־��� ��������
	// �׷��Ƿ� �ٷ� ������ cnt �� �� �ٸ��ɷ� �ᵵ ������.

	/*
	while ��
	int cnt = 1;

	while (cnt <= 5)
	{
		printf("Hello %d\n", cnt);

		++cnt;
	}
	printf("cnt = %d\n", cnt);
	*/

	printf("[e n d]========================\n");
}