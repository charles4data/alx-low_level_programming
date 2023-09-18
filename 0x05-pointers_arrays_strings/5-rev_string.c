#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function reverses a string
 * @s: string to be reversed
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
