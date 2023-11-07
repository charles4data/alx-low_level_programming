#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - prints character to sdtout,
 * @c: character to print,
 * Return: return 0 on Success.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
