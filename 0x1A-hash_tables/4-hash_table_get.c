#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: hash key
 * Return: Null if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	/* Traverse the linked list at the calculated index */
	current = ht->array[index];
	while (current != NULL)
	{
		/* Compare keys */
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	/* Key not found */
	return (NULL);
}
