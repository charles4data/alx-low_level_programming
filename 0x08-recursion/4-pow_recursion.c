#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - returns value of x raised to power y,
 * @x: value to raise,
 * @y: power of,
 * Return: x to power y, else -1.
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		result = pow(x, y);
		return (result);
	}
}
