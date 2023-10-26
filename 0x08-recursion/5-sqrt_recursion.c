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
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1));
	}
}



/**
 * sqrt_helper - calculates the square root,
 * @n: number to calculate square root of,
 * @guess: initial iterator,
 * Return: guess, -1, square root,
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, guess + 1));
	}
}
