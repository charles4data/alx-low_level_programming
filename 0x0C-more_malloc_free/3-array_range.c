#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers,
 * @min: min value,
 * @max: max value,
 * Return: Pointer to newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int count;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	count = max - min + 1;

	ptr = malloc(count * sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		ptr[i] = min + i; 
	}
	return (ptr);
}
