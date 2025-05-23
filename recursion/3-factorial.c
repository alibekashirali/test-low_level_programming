#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number.
 * Return: Factorial value or -1 if n < 0.
 */
int factorial(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0)
        return (1);
    return (n * factorial(n - 1));
}

