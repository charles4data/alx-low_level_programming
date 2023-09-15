#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 * Return: return 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0) /*Check of n is positive */
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else /*If n is zero or negative*/
	{
		_putchar('\n');
	}
}
