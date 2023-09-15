#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
}
