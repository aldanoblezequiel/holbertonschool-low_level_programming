#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts binaty to unsigned int
 * @b: Pointer
 * Return: The unsigned int or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	for ( ; *b; b++)
	{
		n <<= 1;
		if (*b == '1')
			n |= 1;
		else if (*b != '0')
			return (0);
	}
	return (n);
}
