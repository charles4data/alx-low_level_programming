#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * @min: minimum value,
 * @max: maximum value,
 * Return: pointer to array.
 */

int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	p = malloc(sizeof(int) * len);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}

	return (p);
}
