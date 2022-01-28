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
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!ht->array[idx])
		new_node->next = NULL;
	else
		new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
