#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0; space--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
