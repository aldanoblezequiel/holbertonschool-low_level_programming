#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Converts binaty to unsigned int
 * @b: Pointer
 * Return: The unsigned int or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bnum, dnum, n, op;

	dnum = 0;
	if (!b)
		return (0);
	for (op = 0; b[op] != 0; op++)
	{
		if (b[op] != '0' && b[op] != '1')
			return (0);
	}
	bnum = atoi(b);
	for (op = 0; bnum != 0; op++)
	{
		n = bnum % 10;
		dnum += n << op;
		bnum /= 10;
	}
	return (dnum);
}
