#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints a character
 * @c: character to print,
 * Return: Always 0 if success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
