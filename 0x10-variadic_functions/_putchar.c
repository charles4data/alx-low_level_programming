#include <stdio.h>


/**
 * _putchar - prints a character to stdout,
 * @c: Character to print out,
 * Return: 0 on success, -1 on failure.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
