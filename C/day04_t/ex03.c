/*
	2 - 100������ ���� �Է� : 68

	< 68�� ��� ��� >
	1  2  4  17  34  68
	����� �Ѱ��� : 6��
*/
#include <stdio.h>
void main(void)
{
	int num;

	printf("2 - 100������ ���� �Է� : ");
	scanf("%d", &num);

	printf("< %d�� ��� ��� >\n", num);

	int cnt = 0;
	// num�� ����� �ɼ� �ִ� �ĺ���(1 ~ num)
	for (int i = 1; i <= num; i++)	// i : ����� �ĺ�
	{
		if (num % i == 0)
		{
			printf("%5d", i);
			cnt++;
		}
	}
	printf("\n����� �� ���� : %d��\n", cnt);
}