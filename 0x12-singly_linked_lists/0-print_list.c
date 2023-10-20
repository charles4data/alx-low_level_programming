#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list,
 * @h: where list is stored,
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	printf("[");
	while (h != NULL)
	{
		printf("\"%s\"", h->str);
		if (h->next != NULL)
		{
			printf(", ");
		}
		h = h->next;
		node_count++;
	}
	printf("]\n");
	return (node_count);
}
