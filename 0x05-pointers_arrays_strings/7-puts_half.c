#include "main.h"

/**
  *puts_half - Prints half a string
  *@str: string
  *
  */

void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		n = ((i + 1) / 2);
		for (; str[n]; n++)
		{

		_putchar(str[n]);
		}
		_putchar('\n');
	}
}
