#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: parameter
 * Return: if n < 0, return -1 to indicate error, else return factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
