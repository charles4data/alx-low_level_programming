#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: first parameter,
 * Return: Sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;
		sum = n;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}

		va_end(args);
	}
	return (sum);
}
