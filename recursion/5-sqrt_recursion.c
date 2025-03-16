#include "main.h"

/**
 * _sqrt_helper - Finds the natural square root.
 * @n: The number.
 * @i: The iterator.
 * Return: The square root or -1 if not found.
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n)
        return (-1);
    if (i * i == n)
        return (i);
    return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number.
 * Return: The square root or -1 if not natural.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}
