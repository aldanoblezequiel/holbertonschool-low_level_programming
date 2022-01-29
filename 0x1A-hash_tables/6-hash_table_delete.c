#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the Hash Table
 * @ht: The Table xd
 * Return: Non
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *head = NULL, *next = NULL;
	unsigned long int n = 0;

	if (!ht)
		return;
	for ( ; n < ht->size; n++)
	{
		head = ht->array[n];
		while ((next = head) != NULL)
		{
			head = head->next;
			free(next->value);
			free(next->key);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}
