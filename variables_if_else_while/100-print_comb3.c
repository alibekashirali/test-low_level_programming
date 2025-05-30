/*
 * File: 100-print_comb3.c
 * Auth: Alibek
 * Desc: Prints all possible different combinations of two digits.
 */
#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
