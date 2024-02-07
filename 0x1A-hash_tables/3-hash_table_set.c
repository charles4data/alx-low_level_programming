#include "hash_tables.h"

/**
 * hash_table_set - adds an element to an hash table
 * @ht: hash table to imputed with data
 * @key: key where data should be added
 * @value: corresponding value of the key
 * Return: 1 on success, 0 on failure.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	/* Check if the key already exists in the linked list */
	for (temp = ht->array[index]; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			return (1);
		}
	}

	/* Key not found, create a new node and add it to the beginning of the linked list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		free(new_node);
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}