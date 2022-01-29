#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the Hash Table
 * @ht: The Table xd
 * Return: Non
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *toDelete = NULL;
	unsigned long int len = 0;

	if (!ht)
		return;
	for (len = 0; len < ht->size; len++)
	{
		aux = ht->array[len];
		while (aux)
		{
			free(aux->key);
			free(aux->value);
			toDelete = aux;
			aux = aux->next;
			free(toDelete);
		}
	}
	free(ht->array);
	free(ht);
}
