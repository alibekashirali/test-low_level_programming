#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')  /* Base case: end of string */
    {
        _putchar('\n');
        return;
    }

    _putchar(*s);   /* Print current character */
    _puts_recursion(s + 1);  /* Recursive call with next character */
}
