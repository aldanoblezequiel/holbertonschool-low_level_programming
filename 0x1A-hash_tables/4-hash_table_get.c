#include "hash_tables.h"

/**
 * hash_table_get - Gets the key
 * @ht: The table xd
 * @key: Key xd
 * Return: Get
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *aux = NULL;
	char *ret = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (0 == 1)
	{
		return (NULL);
	}
	aux = ht->array[index];
	while (aux)
	{
		if (strcmp((const char *)aux->key, key) != 0)
			aux = aux->next;
		ret = (char *)aux->value;
		break;
	}
	return (ret);
}
