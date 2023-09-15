#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0 - 9, except 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
		{
			putchar(ch);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
}
