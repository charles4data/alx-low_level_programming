#include "hash_tables.h"

/**
 * hash_table_set - adds an element to an hash table
 * @ht: hash table to imputed with data
 * @key: key where data should be added
 * @value: corresponding value of the key
 * Return: 1 on success, 0 on failure.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
	hash_node_t *new_node, *temp;
	unsigned long int index;

	new_node = NULL;
	temp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];

	/* Check if the key already exists in the linked list */
	while (temp) {
		if (strcmp(temp->key, key) == 0) {
			/* Free the old value */
			free(temp->value);

			/* Duplicate the new value */
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	/* Key not found, create a new node and add it to the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL) {
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL) {
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
