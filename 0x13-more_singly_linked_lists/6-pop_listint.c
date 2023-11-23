#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns the data
 * @head: pointer to list
 * Return: head node data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = 0;

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}
