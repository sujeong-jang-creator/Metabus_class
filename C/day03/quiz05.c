#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	2��
	���� 3���� �Է¹޾� ū ������ ������ ������ ���
	���� 3���� �Է� : 34 2 29
	34 29 2

	���� 3���� �Է� : 17 92 34
	92 34 17
*/

void main(void)
{
	int a, b, c, first, second, third;

	printf("���� 3���� �Է� :");
	scanf("%d%d%d", &a, &b, &c);

	// a�� b���� ŭ.
	if (a > b)
	{
		second = a;
		third = b;
		//  a�� c���� ŭ.
		if (second > c)
		{
			// a�� ���� ũ�� ������ first�� a�� ����.
			first = second;
			// b�� c���� ŭ
			if (third > c)
			{
				// b�� c ���� ũ�⶧���� second�� b�� ����. ������ third�� b�� �־�����Ƿ� second=third�� �Ű���.
				second = third;
				// third�� ���� ���� ���� c�� �־���.
				third = c;
			}
			// b�� c ���� �����Ƿ� third�� �־�� �ϴµ� ������ �̹� �־����. ���� second�� c�� �־��ָ� ��.
			else
			{
				second = c;
			}
		}
		// a�� c���� ����. a�� b���ٴ� ũ���� c���ٴ� �۾���. �׷��Ƿ� first�� c�� ����.
		else
		{
			first = c;
		}
	}
	// a�� b���� ����.
	else
	{
		second = b;
		third = a;

		// b�� c���� ŭ.
		if (second > c)
		{
			// b�� ���� ũ�Ƿ� ������ first�� �־���. ������ b�� second�� �־�����ϱ� �ű�.
			first = second;
			// a�� c���� ŭ. second�� a�� �־���. ������ a�� thrid�� �־�����ϱ� �ű�.
			if (third > c)
			{
				second = third;
				// c�� �������� �־���.
				third = c;
			}
			// a�� c���� ����. ������ a�� thrid�� �־�����Ƿ�, second�� c�� �־��ָ� ��.
			else
			{
				second = c;
			}
		}
		else
		{
			first = c;
		}
	}
	printf("���� ū ���� %d \n�ι�°�� ū ���� %d \n������ ���� %d �Դϴ�.", first, second, third);
}

