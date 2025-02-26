/*
 * File: 3-print_alphabets.c
 * Auth: Your Name
 * Desc: Prints the alphabet in lowercase and uppercase, followed by a new line.
 */
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		 putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
