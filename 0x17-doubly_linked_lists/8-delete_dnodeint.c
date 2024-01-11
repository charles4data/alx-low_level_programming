#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node a specific index,
 * @head: Pointer to the doubly linked list head,
 * @index: Posistion where node is to be deleted,
 * Return: 1 on success, -1 on fail.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	/* Traverse to the node at the specified index */
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	/* If the node to be deleted is the head */
	if (current == *head)
	{
		*head = current->next;
	}
	/* Adjust the previous and next pointers */
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	/* Free the memory of the deleted node */
	free(current);
	return (1);
}
