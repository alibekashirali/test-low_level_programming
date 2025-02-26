/*
 * File: 2-print_alphabet.c
 * Auth: Your Name
 * Desc: Prints the lowercase alphabet, followed by a new line.
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
        putchar('\n');

        return (0);
}
