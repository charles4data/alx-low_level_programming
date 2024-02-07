#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	size_t i;

	if (ht == NULL)
		return;

	/* Iterate through the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			printf("[%lu] ", (unsigned long)i);
			printf("%s:%s\n", current->key, current->value);
			current = current->next;
		}
	}
}
