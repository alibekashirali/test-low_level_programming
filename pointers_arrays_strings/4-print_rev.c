#include "main.h"
#include <unistd.h>

/**
 * print_rev - Prints a string in reverse
 * @s: String to reverse
 */

void print_rev(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    while (len > 0)
    {
        len--;
        write(1, &str[len], 1);
    }

    write(1, "\n", 1);
}
