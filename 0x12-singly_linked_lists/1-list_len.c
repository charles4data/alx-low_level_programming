#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements,
 * @h: address of the list,
 * Return: Count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
