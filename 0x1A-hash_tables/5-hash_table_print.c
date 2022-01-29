#include "hash_tables.h"

/**
 * hash_table_print - Prints the Hash Table
 * @ht: The table xd
 * Return: Non
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int len = 0, flag = 0;
	hash_node_t *aux = NULL;

	if (!ht)
		return;
	printf("{");
	for (len = 0; len < ht->size; len++)
	{
		aux = ht->array[len];
		while (aux)
		{
			if (len > 0 && flag == 1)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			flag = 1;
		}

	}
	printf("}\n");
}
