#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array,
 * @nmemb: number of elements in array,
 * @size: memory size to allocate,
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int total_size;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	p = calloc(nmemb, size);

	if (p == NULL)
	{
		return (NULL);
	}

	memset(p, 0, total_size);

	return (p);
}
