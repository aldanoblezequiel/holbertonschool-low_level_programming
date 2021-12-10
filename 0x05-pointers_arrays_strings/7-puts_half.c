#include "main.h"

/**
  *puts_half - rev str to half
  *@str: str
  *
  */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
	}

	i = n / 2;
	if (n % 2)
		i = i + 1;

	for (; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
