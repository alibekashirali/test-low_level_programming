/* 1-array_iterator.c */
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array to iterate
 * @size: Size of the array
 * @action: Function pointer to apply on elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
