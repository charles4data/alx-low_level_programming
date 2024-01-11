#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in a list,
 * @head: pointer to the doubly linked list head
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
