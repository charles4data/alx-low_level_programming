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
	int i;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result = result + (b[i] - '0');
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
