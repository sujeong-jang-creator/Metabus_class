#include <stdio.h>
void main(void)
{
/*
	// 15锅
	//----*
	//---***
	//--*****
	//-*******
	//*********
	//-*******
	//--*****
	//---***
	//----*

	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= 5 - i; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= 2 * i - 1; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= i-5; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= 2*(10-i)-1; j++)
			{
				printf("*");
			}

		}
		printf("\n");
	}
*/

/*
	// 14锅
	//*********
	//-*******
	//--*****
	//---***
	//----*

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("-");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

/*
	// 13锅
	//----*
	//---***
	//--*****
	//-*******
	//*********

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("-");
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

/*
	// 12锅
	//----*
	//---**
	//--***
	//-****
	//*****
	//-****
	//--***
	//---**
	//----*

	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= 5 - i; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= i - 5; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= 10 - i; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
*/	

/*
	// 11锅
	//*****
	//-****
	//--***
	//---**
	//----*
	//---**
	//--***
	//-****
	//*****

	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= i - 1; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= 6 - i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= 9 - i; j++)
			{
				printf("-");
			}
			for (int j = 1; j <= i - 4; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
*/
/*
	// 10锅
	//*****
	//****
	//***
	//**
	//*
	//**
	//***
	//****
	//*****

	for (int i = 1; i <= 9; i++)
	{
		if (i <= 5)
		{
			for (int j = 1; j <= 6 - i; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (int j = 1; j <= i - 4; j++)
			{
				printf("*");
			}

		}
		printf("\n");
	}
*/

	// 9锅
	//*
	//**
	//***
	//****
	//*****
	//****
	//***
	//**
	//*

	int star = 1;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= star; j++)
		{
			printf("*");
		}
		printf("\n");
		i < 5 ? star++ : star--;
	}

	// 规过1
	//for (int i = 1; i <= 9; i++)
	//{
	//	if (i <= 5)
	//	{
	//		for (int j = 1; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	else
	//	{
	//		for (int j = 1; j <= 10 - i; j++)
	//		{
	//			printf("*");
	//		}
	//	}
	//	printf("\n");
	//}


/*
	// 8锅
	//----*
	//---**
	//--***
	//-****
	//*****

	// 规过1
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= 5 - i; j++)
	//	{
	//		printf("-");
	//	}
	//	for (int j = 1; j <= i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 规过2
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%c", j < 6 - i ? '-' : '*');
		}
		printf("\n");
	}
*/
/*
	// 7锅
	//*****
	//-****
	//--***
	//---**
	//----*

	// 规过1
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= i - 1; j++)
	//	{
	//		printf("-");
	//	}
	//	for (int j = 1; j <= 6 - i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 规过2
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			if(j < i)
			{ 
				printf("-");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
*/	

/*
	// 6锅
	//*****
	//****
	//***
	//**
	//*

	// 规过1
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// 规过2
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= 6 - i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
*/

/*
	// 5锅
	//*
	//**
	//***
	//****
	//*****

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/
/*
	// 4锅
	//56789
	//45678
	//34567
	//23456
	//12345

	for (int i = 5; i >= 1; i--)
	{
		for (int j = i; j <= i + 4; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
*/
/*
	// 3锅
	//12345
	//23456
	//34567
	//45678
	//56789

	// 规过1
	for (int i = 1; i <= 5; i++)
	{
		for (int j = i; j <= i + 4; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	// 规过2
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("%d", i + j - 1);
	//	}
	//	printf("\n");
	//}
*/

/*
	// 2锅
	//55555
	//44444
	//33333
	//22222
	//11111

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
*/

/*
	// 1锅
	//12345
	//12345
	//12345
	//12345
	//12345
	
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
*/
}