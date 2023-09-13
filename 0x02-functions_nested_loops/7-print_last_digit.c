#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter to be checked
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (n < 0)
	{
		k = -k;
	}

	_putchar(k + '0');
	return (k);
}
