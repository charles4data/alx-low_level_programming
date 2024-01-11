#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the start of dlistint_t list.
 * @head: pointer to a list of pointers,
 * @n: element to add
 * Return: new element address on success, NULL on fail.
 */



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declare new node */
	dlistint_t *newNode;

	/* Allocate new memory to host new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* Initialize newNode with data, next, and prev addresses */
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	/* Update prev of current head */
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	/* Update head to point to new node */
	*head = newNode;

	/* return address of new element */
	return (newNode);
}
