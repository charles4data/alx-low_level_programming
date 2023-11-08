#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on given array,
 * @action: function to execute,
 * @array: target array,
 * @size: size of target array,
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
