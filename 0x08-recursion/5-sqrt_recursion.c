#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number,
 * @n: number to return square root of,
 * Return: Square root or -1.
 */

int _sqrt_recursion(int n)
{
	double result;
	double rounded;

	result = sqrt(n);
	rounded = round(result);

	if (result == rounded)
	{
		return (result);
	}
	else
	{
		return (-1);
	}
}
