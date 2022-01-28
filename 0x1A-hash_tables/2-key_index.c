#include "hash_tables.h"

/**
 * key_index - Function return k idx
 * @key: The key xd
 * @size: Size the key
 * Return: Value of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((const unsigned char *)strdup((const char *)key)) % size);
}
