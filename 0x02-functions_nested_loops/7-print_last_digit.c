#include "main.h"

/**
*print_last_digit - a function gives last digit form SRAND
*@ld: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int print_last_digit(int ld)
{
	int p;

	p = (ld % 10);
	if (p < 0)
	{
		p = (p * -1);
	}
	_putchar (p + '0');
	return (p);
}
