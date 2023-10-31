#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _putchar - prints a character to stdout,
 * @c: character to print,
 * Return: Always 0 of successful.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
