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
	list_t *current_node = NULL;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
