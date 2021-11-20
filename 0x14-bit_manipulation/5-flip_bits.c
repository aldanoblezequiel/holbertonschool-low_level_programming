#include "main.h"
/**
 * flip_bits - Flips bits from n to m
 * @n: bit1
 * @m: bit2
 * Return: Bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux_count;
	unsigned int count = 0;

	aux_count = (n ^ m);

	while (aux_count)
	{
		count += (aux_count & 1);

		aux_count >>= 1;
	}

	return (count);
}
