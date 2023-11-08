#include <stdio.h>
#include <stdlib>

/**
 * putchar - prints a character to out,
 * @c: The character to print,
 * Return: 0 on success, -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
