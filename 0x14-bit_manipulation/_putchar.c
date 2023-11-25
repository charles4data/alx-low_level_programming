#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to stdout,
 * @c: character to print,
 * Return: 1 on success, -1 of failure.
 */

int _putchar(char c)
{
	if (c == '\0')
	{
		return (-1);
	}
	write(1, &c, 1);
	return (1);
}
