#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing bytes to match
 *
 * Return: pointer to the matched byte in s, or NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
                return (s);
            a++;
        }
        s++;
    }
    return (NULL);
}
