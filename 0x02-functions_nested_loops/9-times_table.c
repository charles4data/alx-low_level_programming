#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9times table, starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j, ij;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			ij = i * j;
			if (j == 0)
			{
				printf("%d", ij);
			}
			else
			{
				printf("%2d", ij);
			}

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}

			else
			{
				putchar('\n');
			}
		}
	}
}
