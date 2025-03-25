/* 2-int_index.c */
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Array to search
 * @size: Number of elements in the array
 * @cmp: Function pointer to compare values
 *
 * Return: Index of the first match or -1 if none found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
