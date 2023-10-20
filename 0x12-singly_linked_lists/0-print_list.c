#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list,
 * @h: where list is stored,
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}
