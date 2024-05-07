#include "search_algos.h"

/**
  * jump_search - searches for value inside an array
  * @array: pointer to the array
  * @size: size of the array
  * @value: Value to be searched
  * Return: Index of the value
  */

int jump_search(int *array, size_t size, int value)
{
	int prev, k, m, index;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
