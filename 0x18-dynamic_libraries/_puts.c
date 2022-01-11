#include "main.h"

/**
*_puts - prints a string
*@s: pointer
*/

void _puts(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
