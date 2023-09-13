#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks whether character c is lowercase
 *
 * Return: Either 0 or 1.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
