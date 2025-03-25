/* 0-print_name.c */
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to be printed
 * @f: Function pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
