#include "lists.h"

/**
 *  insert_dnodeint_at_index - adds a new node at a specific location,
 * @h: pointer to header of the doubly linked list,
 * @idx: Index position where to add the new node,
 * @n: Element to add to the list
 * Return: addres of new node
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* declare variables */
	dlistint_t *newNode, *current;
	unsigned int i;

	/* Allocate memory to store the new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Initialize the new node with the provided data */
	newNode->n = n;

	/* Handle the case where the new node should be the new head */
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}

	/* Traverse the list to find the node before the desired position */
	current = *h;
	for (i = 0; i < idx - 1; ++i)
	{
		if (current == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current = current->next;

	/* Update pointers to insert the new node at the desired position */
	if (current != NULL)
	{
		newNode->prev = current;
		newNode->next = current->next;
		if (current->next != NULL)
		{
			current->next->prev = newNode;
		}
		current->next = newNode;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}