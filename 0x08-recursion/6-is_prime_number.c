#include "main.h"
#include <stdio.h>

/**
*is_prime_recursive - checks if prime
* @n: number to check
* @divisor: parameter 2
* Return: 1 - yes, 0 - no.
*/

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor == 1)
	{
		return (1);
	}
	else
	{
		if (n % divisor == 0)
		{
			return (0);
		}
		return (is_prime_recursive(n, divisor - 1));
	}
}


/**
 * is_prime_number - checks whether prime
 * @n: parameter,
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, n / 2));
}
