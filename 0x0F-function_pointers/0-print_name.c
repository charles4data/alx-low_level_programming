#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: to be printed
 * @f: pointer to the function
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
