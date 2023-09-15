#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a sqaure followed by a new line
 * @size: paramater
 * Return: 0.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

