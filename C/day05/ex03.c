#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int md[2]; // month : md[0], day : md[1]

	for (int i = 0; i < 2; i++)
	{
		printf("Inputs %s : ", i == 0 ? "month" : "day");
		scanf("%d", &md[i]);
	}

	int total = 0;
	for (int i = 1; i < md[0]; i++)
	{
		total = total + days[i];
	}
	total += md[1];
	printf("1/1 ~ %d/%d : %dÀÏ\n", md[0], md[1], total);
}