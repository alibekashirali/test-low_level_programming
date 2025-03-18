#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; 
	printf("%s\n", argv[0]);
	return (0);
}

