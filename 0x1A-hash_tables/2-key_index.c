#include "hash_tables.h"

/**
 * key_index - returns the index of as key
 * @key: the key whose index is needed
 * @size: size of the array
 * Return: index of provided key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue;

	hashValue = hash_djb2(key);

	return (hashValue % size);
}
