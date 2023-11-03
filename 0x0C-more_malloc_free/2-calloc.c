#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements,
 * @size: size of each member,
 * Return: Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *byte_ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}

