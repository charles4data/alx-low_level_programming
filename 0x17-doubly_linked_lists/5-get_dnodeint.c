#include "lists.h"

/**
 * get_dnodeint_at_index - returns the noth node
 * @head: pointer to head of list,
 * @index: index position for node needed,
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *current;
	unsigned int currentIndex;

	current = head;
	currentIndex = 0;

	while (current != NULL && currentIndex < index)
	{
		current = current->next;
		currentIndex++;
	}
	return (current);
}
