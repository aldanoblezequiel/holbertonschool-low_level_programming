#include "main.h"
/**
 * set_bit - Set bit to one
 * @n: pointer
 * @index: The index xd
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);
	*n |= 1 << index;
	return (1);
}
