#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*	2번
	정수 3개를 입력받아 큰 수에서 작은수 순으로 출력
	정수 3개를 입력 : 34 2 29
	34 29 2

	정수 3개를 입력 : 17 92 34
	92 34 17
*/

void main(void)
{
	int a, b, c, first, second, third;

	printf("정수 3개를 입력 :");
	scanf("%d%d%d", &a, &b, &c);

	// a가 b보다 큼.
	if (a > b)
	{
		second = a;
		third = b;
		//  a가 c보다 큼.
		if (second > c)
		{
			// a가 제일 크기 때문에 first에 a를 넣음.
			first = second;
			// b가 c보다 큼
			if (third > c)
			{
				// b가 c 보다 크기때문에 second에 b를 넣음. 위에서 third에 b를 넣어놨으므로 second=third로 옮겨줌.
				second = third;
				// third에 가장 작은 값인 c를 넣어줌.
				third = c;
			}
			// b가 c 보다 작으므로 third에 넣어야 하는데 위에서 이미 넣어놨음. 따라서 second에 c만 넣어주면 끝.
			else
			{
				second = c;
			}
		}
		// a가 c보다 작음. a는 b보다는 크지만 c보다는 작아짐. 그러므로 first에 c를 넣음.
		else
		{
			first = c;
		}
	}
	// a가 b보다 작음.
	else
	{
		second = b;
		third = a;

		// b가 c보다 큼.
		if (second > c)
		{
			// b가 가장 크므로 위에서 first에 넣어줌. 위에서 b를 second에 넣어놨으니까 옮김.
			first = second;
			// a가 c보다 큼. second에 a를 넣어줌. 위에서 a를 thrid에 넣어놨으니까 옮김.
			if (third > c)
			{
				second = third;
				// c를 마지막에 넣어줌.
				third = c;
			}
			// a가 c보다 작음. 위에서 a를 thrid에 넣어놨으므로, second에 c를 넣어주면 끝.
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
	printf("가장 큰 수는 %d \n두번째로 큰 수는 %d \n마지막 수는 %d 입니다.", first, second, third);
}

