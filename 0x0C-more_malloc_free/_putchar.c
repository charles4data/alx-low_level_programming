#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints a character to stdout,
 * @c: character oto print,
 * Return: Return 1 on success. 0 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
