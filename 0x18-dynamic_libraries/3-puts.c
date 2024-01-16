#include "main.h"

/**
 * _puts - prints a strong followed by a new line
 * @str: parameter to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

