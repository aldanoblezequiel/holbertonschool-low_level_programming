#include "main.h"
#include <stdio.h>

/**
 * print_number - char to int
 * @n: number
 * Return: int
 */
void print_number(int n)
{
	int num, len = 0, exp = 1, a = 1, imp;

	num = n;
	if (n < 0)
	{
		_putchar(45);
		while (num <= -10)
		{
			num = num / 10;
			len++;
		}
	}
	else
		{
		while (num >= 10)
		{
			num = num / 10;
			len++;
		}
	}
	len++;

	while (a < len)
	{
		if (len <= 10)
			exp = 10 * exp;
		a++;
	}

	a = 0;
	while (a < len)
	{
		imp = n / exp;
		if (imp < 0)
			imp = imp * -1;
		_putchar(imp + '0');
		n = n % exp;
		exp = exp / 10;
		a++;
	}
}
