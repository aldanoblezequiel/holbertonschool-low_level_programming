#include "main.h"
/**
 * get_bit - Returns a bit
 * @n: var long int
 * @index: the index xd
 * Return: if condition
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i <= 63; i++)
	{
		if (i == index)
		{
			if (n & 1)
				return (1);
			else
				return (0);
		}
		n >>= 1;
	}

	return (-1);
}
