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
	void *p = calloc(nmemb, nmemb * size);

	memset(p, 0, nmemb * size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		return (p);
	}
}
