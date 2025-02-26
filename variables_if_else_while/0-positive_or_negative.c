/*
 * File: 0-positive_or_negative.c
 * Auth: Your Name
 * Desc: Prints if a randomly generated number is positive, negative, or zero.
 */
#include <stdio.h> /* Added stdio.h */
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	 else if (n == 0) 
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
