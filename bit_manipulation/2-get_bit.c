#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to check.
 * @index: The index of the bit.
 *
 * Return: Value of the bit at index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
