#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Adds positive numbers and prints the result
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 (Success), 1 (Error if a non-digit argument is passed)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
