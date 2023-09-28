#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: parameter 1
 * @y: parameter 2
 * Return: return x to power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
