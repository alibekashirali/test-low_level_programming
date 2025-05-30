#include "main.h"

/**
 * is_prime_helper - Checks if a number is prime.
 * @n: The number.
 * @i: The divisor.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n < 2)
        return (0);
    return (is_prime_helper(n, 2));
}
