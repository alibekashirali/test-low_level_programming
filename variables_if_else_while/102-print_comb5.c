/*
 * File: 102-print_comb5.c
 * Auth: Alibek
 * Desc: Prints all possible combinations of two two-digit numbers.
 */
#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, j;
	int first_digit_i, second_digit_i, first_digit_j, second_digit_j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			first_digit_i = i / 10;
			second_digit_i = i % 10;
			first_digit_j = j / 10;
			second_digit_j = j % 10;

			putchar(first_digit_i + '0');
			putchar(second_digit_i + '0');
			putchar(' ');
			putchar(first_digit_j + '0');
			putchar(second_digit_j + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
