#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer,
 * @array: array to search,
 * @size: size of array,
 * @cmp: pointer to function to be used to search,
 * Return: Index of first element when successful, or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
