#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int nums[10];	// nums[0] ~ nums[9]

	/* 방법 3)
	int loc = 0;
	while(loc < 10)
	{
		printf("num %d : ", loc + 1);
		scanf("%d", &nums[loc]);
		
		if (nums[loc] % 2 == 0)
		{
			loc++
		}
	}

	*/

	/* 방법 2)
	for (int i = 0; i < 10; )
	{
		printf("num %d : ", i + 1);
		scanf("%d", &nums[i]);

		if (num[i] % 2 == 0)
		{
			i++;
		}
	}
	*/

	for (int i = 0; i < 10; i++) // 증가, 감소할 문장이 없으면 i++ 이거 지워도 됨.
	{
		printf("num %d : ", i + 1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 != 0)
		{
			i--; // 이렇게 해봐야 위에 for문에서 i++하면 바로 원상복귀. ++을 무효화 시키기 위함.
		}

		/* 방법 1)
		do // while 문이 밑에 붙을때
		{
			printf("num %d : ", i + 1);
			scanf("%d", &nums[i]);
		}
		while (nums[i] % 2 != 0);	// 바로 위 블록스코프링 같은 한 쌍이라는 의미를 띌때는 while 뒤에 ; 붙음
		*/
	}

	printf("< PRINT >\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%5d", nums[j]);
	}
}