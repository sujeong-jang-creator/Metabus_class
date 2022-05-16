#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
void main(void)
{
    for (int dan = 2; dan <= 9; dan += 3)
    {
        for (int i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\t", dan, i, (dan * i));
            printf("%d * %d = %d\t", dan+1, i, (dan * i));
            if (dan + 2 <= 9)
            {
                printf("%d * %d = %d\t", dan+2, i, (dan * i));
            }
            printf("\n");
        }
        printf("\n");
    }
}
*/

void main(void)
{
    for (int dan = 2; dan <= 9; dan += 3)
    {
        for (int i = 0; i <= 9; i++)
        {
            for (int j = dan; j <= 9 && j <= dan + 2; j++)
            {
                if (i == 0)
                {
                    printf("*** %d´Ü ***\t",  j);
                }
                else
                {
                    printf("%d * %d = %d\t", j, i, j * i);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}