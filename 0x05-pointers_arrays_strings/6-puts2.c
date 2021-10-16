#include "main.h"

/**
*puts2 -check the code
*@str: strin
*Return: Always 0.
*/
void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	while (b < a)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
		b++;
	}
	_putchar('\n');
}
