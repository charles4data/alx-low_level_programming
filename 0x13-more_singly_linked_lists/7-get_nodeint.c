#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of a list
 * @head: pointer to the list
 * @index: index value of the node,
 * Return: the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
