#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
    int len = 0, i;

    while (str[len] != '\0')
        len++;

    i = (len + 1) / 2;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
