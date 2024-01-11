#include "lists.h"

/**
 * dlistint_len - check the code
 * @h: pointer to header
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t size;

	current = h;
	size = 0;

	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
