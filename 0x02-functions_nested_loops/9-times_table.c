#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9times table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int rows = 10;
	int cols = 10;
	int i;
	int j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			_putchar(i * j + '0');

			if (j < cols -1)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('$');
				putchar('\n');
			}
		}
	}
}
