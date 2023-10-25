#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factorial.
 * @n: Number whose factorial is to be printed,
 * Return: Factorial or -1 if fail.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		int res = 1;
		int i;

		for (i = 2; i <= n; i++)
		{
			res *= i;
		}
		return (res);
	}
}
