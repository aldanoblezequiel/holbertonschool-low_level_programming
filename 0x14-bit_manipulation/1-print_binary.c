#include "main.h"

/**
 * print_binary - Prints an int
 * @n: var int
 */

void print_binary(unsigned long int n)
{
	unsigned long int a = 0, i = 63, j = 0;

	while (i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar ('0');
	}
	if (!j)
		_putchar('0');
}
