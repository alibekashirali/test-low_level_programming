#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: Index to set the bit.
 *
 * Return: 1 if success, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
