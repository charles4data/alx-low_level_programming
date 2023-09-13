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

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			putchar(i * j + '0');
		}
		putchar('\n');
	}
}
