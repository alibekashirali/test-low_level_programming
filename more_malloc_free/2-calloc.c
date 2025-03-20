#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int i;
    char *fill;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);

    fill = ptr;
    for (i = 0; i < (nmemb * size); i++)
        fill[i] = 0;

    return (ptr);
}
