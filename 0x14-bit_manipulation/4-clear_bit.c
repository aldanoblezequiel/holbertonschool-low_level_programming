#include "main.h"
/**
 * clear_bit - Clear bit to 0
 * @n: Pointer
 * @index: The index xd
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int op = 1 << index;

	if (index > 63)
		return (-1);

	*n = (*n | op);
	*n = (*n ^ op);

	return (1);
}
