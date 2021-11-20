#include "main.h"

/**
 * print_binary - Prints an int
 * @n: var int
 */

void print_binary(unsigned long int n)
{
	unsigned int aux_n;
	int a, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = 63; a >= 0; a--)
	{
		aux_n = n >> a;

		if (aux_n & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag > 0)
			_putchar('0');

	}
}
