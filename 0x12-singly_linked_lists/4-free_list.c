#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list,
 * @head: address of head node,
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
