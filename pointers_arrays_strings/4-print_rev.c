#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: String to reverse
 */
void print_rev(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    while (len > 0)
    {
        putchar(s[len - 1]);
        len--;
    }
    putchar('\n');
}
