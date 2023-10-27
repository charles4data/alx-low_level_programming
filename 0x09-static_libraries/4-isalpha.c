#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Parameter to check
 * Return: Either 1 or 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
