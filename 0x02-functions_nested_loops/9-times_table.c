#include "main.h"

/**
*times_table - a function gives last digit form SRAND
*
*Return: 1 if c is lowercase and 0 otherwise
*/

void times_table(void)
{
	int h;
	int m;
	int p;

	for (h = 0; h < 10; h++)
	{
		for (m = 0; m < 10; m++)
		{
			p = (h * m);

			if (m == 0)
			{
				_putchar('0' + p);
			}
			else if (p <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
