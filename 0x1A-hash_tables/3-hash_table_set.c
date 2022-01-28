#include "hash_tables.h"

/**
 * hash_table_set - Set hash index
 * @ht: The table
 * @key: Key xd
 * @value: Value xd
 * Return: 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *tmp = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
		return (0);
	idx = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[idx];
	if (tmp && strcmp(tmp->key, key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
