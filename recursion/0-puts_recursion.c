#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        write(1, &c, 1);
        _puts_recursion(s + 1);
    }
    else
	write(1, '\n', 1);
}
