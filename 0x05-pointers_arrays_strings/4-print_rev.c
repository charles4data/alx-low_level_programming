#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_rev - prints a strong in reverse.
 * @s: string to be printed
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
