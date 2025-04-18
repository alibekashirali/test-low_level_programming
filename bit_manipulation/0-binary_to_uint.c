/* 0-binary_to_uint.c */
#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string containing binary digits (0 and 1).
 *
 * Return: The converted unsigned int, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
