#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The set of accepted characters.
 *
 * Return: Number of bytes in the initial segment of s from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                count++;
                break;
            }
        }
        if (!accept[i])
            break;
        s++;
    }

    return (count);
}
