/*
 * File: 5-print_numbers.c
 * Auth: Alibek
 * Desc: Prints single-digit base 10 numbers.
 */
#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
