#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 (Success), 1 (Error if incorrect number of arguments)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
