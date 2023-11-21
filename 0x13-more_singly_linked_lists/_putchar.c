#include <stdio.h>
#include "lists.h"

/**
 * _putchar - prints character to stdout.
 * @c: character to print,
 * Return: printed output.
 */

int _putchar(char c)
{
    return(write(1, &c, 1));
}
