/*
 * File: 7-print_tebahpla.c
 * Auth: Alibek
 * Desc: Prints lowercase alphabet in reverse.
 */
#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
