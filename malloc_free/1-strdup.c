#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the given string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
    char *copy;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    copy = malloc((len + 1) * sizeof(char));
    if (copy == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        copy[i] = str[i];

    return (copy);
}
