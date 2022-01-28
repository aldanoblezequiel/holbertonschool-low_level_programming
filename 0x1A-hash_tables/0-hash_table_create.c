#include "hash_tables.h"

/**
 * hash_table_create - Create Hash Table
 * @size: Size of the table
 * Return: Pointer to the hash Table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable = NULL;
	unsigned long int n = 0;

	if (size == 0)
		return (NULL);

	newHashTable = malloc(sizeof(hash_table_t));
		if (!newHashTable)
			return (NULL);
	newHashTable->size = size;
	newHashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!newHashTable->array)
	{
		free(newHashTable);
		return (NULL);
	}
	for (n = 0;  newHashTable->array[n]; n++)
		newHashTable->array[n] = NULL;
	return (newHashTable);
}
