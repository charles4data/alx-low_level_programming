#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9times table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i * j + '0');

			if (j < 9)
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
