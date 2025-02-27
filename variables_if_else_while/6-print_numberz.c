/*
 * File: 6-print_numberz.c
 * Auth: Alibek
 * Desc: Prints single-digit base 10 numbers using putchar.
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
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
