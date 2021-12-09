#include "main.h"
/**
 * print_number - print digit
 * @n: int var
 */
void print_number(int n)
{
	unsigned int aux = n;

	if (n < 0)
	{
		_putchar('-');
		aux = -n;
	}

	if (n / 10)
		print_number(aux / 10);

	_putchar(aux % 10 + '0');
}
