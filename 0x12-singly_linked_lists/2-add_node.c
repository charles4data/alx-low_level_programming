#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beggining of the line,
 * @str: what to add,
 * @head: current head location,
 * Return: Address of new element or Null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
