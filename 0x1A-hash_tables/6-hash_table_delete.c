#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the Hash Table
 * @ht: The Table xd
 * Return: Non
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *prev, *tmp;

	if (ht)
	{
		for (n = 0; n < ht->size; n++)
		{
			prev = ht->array[n];

			while (prev)
			{
				tmp = prev->next;

				free(prev->key);
				free(prev->value);
				free(prev);

				prev = tmp;
			}
		}
		free(ht->array);

		free(ht);
	}
}
