#include "lists.h"

/**
 * free_dlistint - frees a list,
 * @head: pointer to head of list,
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *nextNode;

	current = head;
	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
