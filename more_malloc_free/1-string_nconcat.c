#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to take from s2.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed by
 *         the first n bytes of s2, null-terminated. NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int i, j, len1 = 0, len2 = 0;

    if (s1)
        while (s1[len1])
            len1++;
    if (s2)
        while (s2[len2])
            len2++;

    if (n >= len2)
        n = len2;

    concat = malloc(sizeof(char) * (len1 + n + 1));
    if (!concat)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];
    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];
    concat[i + j] = '\0';

    return (concat);
}
