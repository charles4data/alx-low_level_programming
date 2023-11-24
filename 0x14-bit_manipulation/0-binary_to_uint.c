#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int,
 * @b: pointer to a string of 0 and 1s,
 * Return: Converted unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	char current;

	if (b == NULL)
	{
		return (0);
	}

	while ((current = *b++) != '\0')
	{
		if (current == '0' || current == '1')
		{
			result = (result << 1) + (current - '0');
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
