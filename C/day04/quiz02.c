#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	1������

	12345
	12345
	12345
	12345
	12345

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d", j);
		}

		printf("\n");
	}
}
*/

/*
	2������

	55555
	44444
	33333
	22222
	11111

void main(void)
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 5; j >= 1; j--)
		{
		printf("%d", i);
		}
	printf("\n");
	}
}
*/

/*
	3������

	12345
	23456
	34567
	45678
	56789

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= 4 + i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
*/

/*
	4�� ����

	56789
	45678
	34567
	23456
	12345

void main(void)
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j <= 4 + i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
*/

/*
	5�� ����

	*
	**
	***
	****
	*****

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
	6�� ����

	*****
	****
	***
	**
	*

void main(void)
{
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
	7�� ����
	
	*****
	 ****
	  ***
	   **
	    *

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 5; k >= i; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
	8�� ����

		*
	   **
	  ***
	 ****
	*****

void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j >= i; j--)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

/*
	9�� ����

	*
	**
	***
	****
	*****
	****
	***
	**
	*

void main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 4; k >= i - 5; k--)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
*/

/*
	10�� ����

	*****
	****
	***
	**
	*
	**
	***
	****
	*****
void main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 5; j >= i; j--)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 2; k <= i - 3; k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
*/

/*
	11�� ����

	 *****
	  ****
	   ***
	    **
	     *
	    **
	   ***
	  ****
	 *****

void main(void)
{
	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= i; j++)
			{
				printf(" ");
			}
			for (int k = 5; k >= i; k--)
			{
				printf("*");
			}
		}
		else
		{
			for (int j =  5; j >= i-4; j--)
			{
				printf(" ");
			}
			for (int k = 1; k <= i-4; k++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
*/

/*
	12�� ����

	*********
	 *******
	  *****
	   ***
	    *             
*/
void main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int k = 9; k >= 1; k = k - 2)
		{
			printf("%d", k);
			printf("*");
		}
		printf("\n");
	}
}

