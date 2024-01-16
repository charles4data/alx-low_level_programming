#include "main.h"

/**
 * _islower - checks whether character c is lowercase
 * @c: Parameter to be checked
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
