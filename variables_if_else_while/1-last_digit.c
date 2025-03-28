/*
 * File: 1-last_digit.c
 * Auth: Your Name
 * Desc: Prints the last digit of a randomly generated number and its relation.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
