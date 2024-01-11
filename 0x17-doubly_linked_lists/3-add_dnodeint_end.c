#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the list end
 * @head: pointer to a list of pointers,
 * @n: Data for new node,
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* Declare a new node*/
	dlistint_t *newNode;
	dlistint_t *lastNode;

	/* allocate memory to store the new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		newNode->prev = lastNode;
		lastNode->next = newNode;
	}
	return (newNode);
}
