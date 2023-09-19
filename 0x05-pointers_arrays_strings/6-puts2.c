#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * prints every other character of a string
 * @str: parameter to be printed
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
}
