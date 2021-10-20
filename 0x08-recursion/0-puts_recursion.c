#include "main.h"
/**
*_puts_recursion -Print string
*Return: 0
*@s: char variable
*/
void _puts_recursion(char *s)
{
	if (*s < 1)
	{
	_putchar('\n');
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
